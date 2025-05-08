#include "UI.h"
#include <iostream>

void UI::onEvent(const std::string& event) {
    if (event == "attack") {
        std::cout << "UI: Menampilkan update health musuh.\n";
    }
}
