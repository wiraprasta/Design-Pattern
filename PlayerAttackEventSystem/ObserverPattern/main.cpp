#include "Player.h"
#include "UI.h"
#include "SoundSystem.h"
#include "ScoreSystem.h"
#include "Enemy.h"

int main() {
    Player player;
    UI ui;
    SoundSystem sound;
    ScoreSystem score;

    player.attach(&ui);
    player.attach(&sound);
    player.attach(&score);

    Enemy enemy;

    player.attack(enemy); // serangan pertama
    player.attack(enemy); // serangan kedua
    // dst...

    return 0;
}
