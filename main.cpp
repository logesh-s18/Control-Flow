#include <iostream>
using namespace std;

// ─── CASE 3: Static/Global pointer ───
int* globalPtr = nullptr;

// ─── CASE 4: Class member pointer ───
class Wallet {
public:
    int* memberPtr;
    Wallet(int val) { memberPtr = new int(val); }
    ~Wallet() { delete memberPtr; }
};

int main() {
    cout << "=== int** can point to int* ANYWHERE ===" << endl << endl;

    // ─── CASE 1: Stack variable ───
    {
        int x = 10;
        int* stackPtr = &x;
        int** pp = &stackPtr;

        cout << "CASE 1 - Stack:" << endl;
        cout << "  pp    = " << pp << " (address of stackPtr)" << endl;
        cout << "  *pp   = " << *pp << " (= &x)" << endl;
        cout << "  **pp  = " << **pp << " (= 10)" << endl << endl;
    }

    // ─── CASE 2: Heap data, pointer on stack ───
    {
        int* heapPtr = new int(20);
        int** pp = &heapPtr;

        cout << "CASE 2 - Heap data:" << endl;
        cout << "  pp    = " << pp << " (address of heapPtr)" << endl;
        cout << "  *pp   = " << *pp << " (heap address)" << endl;
        cout << "  **pp  = " << **pp << " (= 20)" << endl << endl;

        delete heapPtr;
    }

    // ─── CASE 2b: Pointer ITSELF on heap ───
    {
        int** pp = new int*;
        *pp = new int(25);

        cout << "CASE 2b - Pointer itself on heap:" << endl;
        cout << "  pp    = " << pp << " (heap address of int*)" << endl;
        cout << "  *pp   = " << *pp << " (heap address of int)" << endl;
        cout << "  **pp  = " << **pp << " (= 25)" << endl << endl;

        delete* pp;
        delete pp;
    }

    // ─── CASE 3: Static/Global pointer ───
    {
        int y = 30;
        globalPtr = &y;
        int** pp = &globalPtr;

        cout << "CASE 3 - Global:" << endl;
        cout << "  pp    = " << pp << " (address of globalPtr)" << endl;
        cout << "  *pp   = " << *pp << " (= &y)" << endl;
        cout << "  **pp  = " << **pp << " (= 30)" << endl << endl;
    }

    // ─── CASE 4: Class member pointer ───
    {
        Wallet w(40);
        int** pp = &w.memberPtr;

        cout << "CASE 4 - Class member:" << endl;
        cout << "  pp    = " << pp << " (address of w.memberPtr)" << endl;
        cout << "  *pp   = " << *pp << " (heap address)" << endl;
        cout << "  **pp  = " << **pp << " (= 40)" << endl << endl;
    }

    // ─── CASE 5: Triple pointer (int***) ───
    {
        int x = 19;                      // x on stack (int, value 19)
        int* ptr = new int(23);          // ptr on stack, 23 on heap
        int** ptr1 = &ptr;               // ptr1 on stack, points to ptr
        int*** ptr2 = &ptr1;             // ptr2 on stack, points to ptr1

        cout << "CASE 5 - Triple Pointer:" << endl;
        cout << "  x     = " << x << " (stack int)" << endl;
        cout << "  &x    = " << &x << " (x's stack address)" << endl;
        cout << endl;
        cout << "  ptr   = " << ptr << " (heap address — points to 23)" << endl;
        cout << "  *ptr  = " << *ptr << " (= 23, dereferenced)" << endl;
        cout << "  &ptr  = " << &ptr << " (ptr's stack address)" << endl;
        cout << endl;
        cout << "  ptr1  = " << ptr1 << " (= &ptr, points to ptr)" << endl;
        cout << "  *ptr1 = " << *ptr1 << " (= ptr, heap address)" << endl;
        cout << "  **ptr1= " << **ptr1 << " (= 23, final value)" << endl;
        cout << endl;
        cout << "  ptr2  = " << ptr2 << " (= &ptr1, points to ptr1)" << endl;
        cout << "  *ptr2 = " << *ptr2 << " (= ptr1, which = &ptr)" << endl;
        cout << "  **ptr2= " << **ptr2 << " (= ptr, heap address)" << endl;
        cout << "  ***ptr2= " << ***ptr2 << " (= 23, FINAL value)" << endl;

        delete ptr;   // cleanup heap
    }

    return 0;
}