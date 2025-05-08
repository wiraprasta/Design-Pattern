#include "Player.h"
#include <algorithm> // ⬅️ Tambahkan ini untuk std::remove

void Player::attach(IObserver* observer) {
    observers.push_back(observer);
}

void Player::detach(IObserver* observer) {
    observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
}

void Player::notify(bool isEnemyDead, int enemyHealth) {
    for (auto& obs : observers) {
        obs->onEnemyAttacked(isEnemyDead, enemyHealth);
    }
}

void Player::attack(Enemy& enemy) {
    enemy.takeDamage(10);  // contoh damage
    bool isDead = enemy.getHealth() <= 0;
    notify(isDead, enemy.getHealth());
}
