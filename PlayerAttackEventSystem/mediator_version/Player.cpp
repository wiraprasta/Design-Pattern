#include "Player.h"
#include "EventMediator.h"

Player::Player(EventMediator* mediator) : mediator(mediator) {}

void Player::attack() {
    // Player menyerang musuh
    mediator->triggerEvent("attack");
    // Anggap musuh mati setelah serangan
    mediator->triggerEvent("enemy_dead");
}
