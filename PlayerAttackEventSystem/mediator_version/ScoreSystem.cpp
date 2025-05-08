#include "ScoreSystem.h"
#include <iostream>

void ScoreSystem::onEvent(const std::string& event) {
    if (event == "enemy_dead") {
        std::cout << "ScoreSystem: Menambah skor 100 poin!\n";
    }
}
