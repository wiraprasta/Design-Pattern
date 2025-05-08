#include "SoundSystem.h"
#include <iostream>

void SoundSystem::onEvent(const std::string& event) {
    if (event == "attack") {
        std::cout << "Sound: Memutar suara serangan.\n";
    }
}
