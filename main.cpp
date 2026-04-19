#include <iostream>
using namespace std;

int globalPtr_value = 30;
int* globalPtr = &globalPtr_value;   // CASE 3 setup

class Wallet {
public:
    int* memberPtr;
    Wallet(int val) { memberPtr = new int(val); }
    ~Wallet() { delete memberPtr; }
};

int main() {
    // CASE 1: int* on stack
    int a = 10;
    int* p1 = &a;
    int** pp1 = &p1;
    cout << "CASE 1 (stack):   **pp1 = " << **pp1 << endl;

    // CASE 2: int* on stack, data on heap
    int* p2 = new int(20);
    int** pp2 = &p2;
    cout << "CASE 2 (heap):    **pp2 = " << **pp2 << endl;
    delete p2;

    // CASE 3: int* as global
    int** pp3 = &globalPtr;
    cout << "CASE 3 (global):  **pp3 = " << **pp3 << endl;

    // CASE 4: int* as class member
    Wallet w(40);
    int** pp4 = &w.memberPtr;
    cout << "CASE 4 (class):   **pp4 = " << **pp4 << endl;

    // CASE 5: Triple pointer
    int b = 50;
    int* p5 = &b;
    int** pp5 = &p5;
    int*** ppp5 = &pp5;
    cout << "CASE 5 (triple):  ***ppp5 = " << ***ppp5 << endl;

    return 0;
}