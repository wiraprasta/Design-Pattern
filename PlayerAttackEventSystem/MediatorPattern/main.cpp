#include "EventMediator.h"
#include "UI.h"
#include "SoundSystem.h"
#include "ScoreSystem.h"
#include "Player.h"

int main() {
    EventMediator mediator;

    UI ui;
    SoundSystem sound;
    ScoreSystem score;

    mediator.registerListener("attack", &ui);
    mediator.registerListener("attack", &sound);
    mediator.registerListener("enemy_dead", &score);

    Player player(&mediator);
    player.attack();

    return 0;
}
