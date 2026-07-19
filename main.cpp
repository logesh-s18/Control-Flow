#include <iostream>

// 1. We mark these functions as 'constexpr'
// They return regular integers, but the compiler computes them at compile time.
constexpr int getMonoLayout() {
    return 1;
}

 int getValue()
{
    return 2;
}

constexpr int getStereoLayout() {
    return getValue();
}

void setupAudioWorkspace(int channels) {
    switch (channels)
    {
        // 2. We can call the constexpr functions directly as case labels!
    case getMonoLayout():
        std::cout << "Setting up 1 mono microphone track.\n";
        break;

    case getStereoLayout():
        std::cout << "Setting up left and right stereo tracks.\n";
        break;

    default:
        std::cout << "Unsupported channel layout.\n";
        break;
    }
}



int main() {

    int value(getValue());
    setupAudioWorkspace(value); // Passes 2, matching the stereo case
    return 0;
}