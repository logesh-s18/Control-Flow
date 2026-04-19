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

*/