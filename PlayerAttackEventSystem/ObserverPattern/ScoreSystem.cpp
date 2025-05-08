#include "ScoreSystem.h"

void ScoreSystem::onEnemyAttacked(bool isEnemyDead, int enemyHealth) {
    if (isEnemyDead) {
        score += 100;
        std::cout << "[ScoreSystem] Enemy defeated! Score: " << score << "\n";
    }
}
