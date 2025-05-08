#include "Enemy.h"

void Enemy::takeDamage(int dmg) {
    health -= dmg;
    if (health < 0) health = 0;
}

int Enemy::getHealth() const {
    return health;
}
