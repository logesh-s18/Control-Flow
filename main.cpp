#include <iostream>
#include <print> // to use std::print instead of cout for simple outputs
#include <chrono>

using namespace std;

int main()
{
    int count{ 1 };

    // 2. take start timestamp
    auto start = std::chrono::steady_clock::now();

    // 3. loop (keeps original behavior of printing)
    while (count <= 1'00'000)
    {
        std::cout << count << ' ';
        ++count;
    }

    // 4. take end timestamp
    auto end = std::chrono::steady_clock::now();

    std::cout << "done!\n";

    // 5-6. compute elapsed time
    auto elapsed = end - start;
    double ms = std::chrono::duration_cast<std::chrono::duration<double, std::milli>>(elapsed).count();
    double us = std::chrono::duration_cast<std::chrono::duration<double, std::micro>>(elapsed).count();

    // 7. print elapsed time
    std::cout << "Elapsed time: " << ms << " ms (" << us << " us)\n";

    return 0;
}
