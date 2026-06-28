#include <iostream>
#include <random> // Random numbers generate panna thevayaana library

int main() {

    std::cout << "=== Scenario 1: Fixed Seed (Predictable) ===\n";

    // 1. Oru fixed aana number ah seed ah set pandrom
    unsigned int my_seed = 12345;

    // 2. SEEDING HAPPENS HERE! <-- Idhu dhaan mukkiyam
    // 'prng1' nu oru Mersenne Twister engine create pandrom. 
    // Bracket kulla namma seed ah kudukkurom.
    std::mt19937 prng1(my_seed);

    // 3. Numbers generate pandrom
    std::cout << "Fixed Seed result 1: " << prng1() << '\n';
    std::cout << "Fixed Seed result 2: " << prng1() << '\n';
    std::cout << "(Indha program ah evalo thadava run pannalum mela irukka rendu numbers maaradhu!)\n\n";


    std::cout << "=== Scenario 2: Dynamic Seed (Unpredictable) ===\n";

    // 1. Hardware/OS kitta irundhu oru unmaiyaana random number vanga 'random_device' use pandrom
    std::random_device rd;
    unsigned int dynamic_seed = rd(); // Ippo OS oru pudhu seed kudukkum

    // 2. SEEDING HAPPENS HERE! <-- 
    // Ippo andha pudhu seed ah innoru engine-ku kudukkurom
    std::mt19937 prng2(dynamic_seed);

    // 3. Numbers generate pandrom
    std::cout << "Dynamic Seed result 1: " << prng2() << '\n';
    std::cout << "Dynamic Seed result 2: " << prng2() << '\n';
    std::cout << "(Indha program ah ovvoru thadava run pannumbodhum indha numbers maaritey irukkum!)\n";

    return 0;
}