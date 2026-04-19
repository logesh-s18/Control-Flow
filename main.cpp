#include <iostream>
#include <memory>
using namespace std;

int main() {
    cout << "=== RAW POINTER TEST ===" << endl;

    int* rawAddr = nullptr;   // save address for later inspection

    {
        int* raw = new int(42);
        rawAddr = raw;         // capture address BEFORE scope ends

        cout << "Inside scope - raw address: " << raw << endl;
        cout << "Inside scope - raw value:   " << *raw << endl;

        // 🔴 BREAKPOINT 1: here, inspect memory at rawAddr → you'll see 42

    }  // raw pointer goes out of scope — but heap NOT freed!

    // 🔴 BREAKPOINT 2: here, inspect memory at rawAddr → STILL 42 (LEAKED!)
    cout << "After scope - rawAddr still:  " << rawAddr << endl;
    cout << "After scope - value still:    " << *rawAddr << endl;  // still works!

    cout << "\n=== SMART POINTER TEST ===" << endl;

    int* smartAddr = nullptr;

    {
        auto smart = std::make_unique<int>(99);
        smartAddr = smart.get();   // capture raw address


        //auto smart2 = smart;

        cout << "Inside scope - smart address: " << smartAddr << endl;
        cout << "Inside scope - smart value:   " << *smart << endl;

        // 🔴 BREAKPOINT 3: here, inspect memory at smartAddr → you'll see 99

    }  // smart pointer destructor fires — heap AUTOMATICALLY freed!

    // 🔴 BREAKPOINT 4: here, inspect memory at smartAddr → MEMORY FREED
    cout << "After scope - smartAddr:     " << smartAddr << endl;
    // cout << *smartAddr;  // ⚠ DANGEROUS — dangling pointer, undefined behavior

    return 0;
}



/*



The Hack to See the Leak
Step by step:

Set breakpoint INSIDE the { ... } scope
Run, hit breakpoint
Copy the address from Watch window (e.g., 0x000002763ef08aa0)
Open Memory window, paste that address
Note: value shows 2a 00 00 00 (42)
Continue execution (F5)
Set next breakpoint AFTER the closing }
When hit → open Memory window, paste the SAME address
RAW pointer: Still shows 2a 00 00 00 = LEAKED ☠
SMART pointer: Shows dd dd dd dd or garbage = FREED ✓



----------------

Question: "Why do you use auto with smart pointers?"
Your answer:
"Three reasons:
First, smart pointer types are verbose. Writing std::unique_ptr<MyType, std::default_delete<MyType>> manually is error-prone and hard to read. auto lets the compiler deduce the exact type.
Second, it reduces duplication. Without auto, I'd write the type twice: once on the left side of the assignment, and once inside make_unique<>. That's the DRY principle — Don't Repeat Yourself.
Third, modern C++ guidelines (like the Core Guidelines by Stroustrup) explicitly recommend auto with factory functions like make_unique and make_shared. It's idiomatic C++.
However, I avoid auto for primitive types like int or double where explicit types improve readability."


One More Pattern — auto*
cppauto* raw = new int(42);  // auto* makes it clear: this is a pointer
// vs
auto raw = new int(42);   // also works, but less obvious it's a pointer
auto* makes the pointer nature explicit. Small readability win.

*/