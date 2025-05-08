#ifndef SCORESYSTEM_H
#define SCORESYSTEM_H

#include "IObserver.h"
#include <iostream>

class ScoreSystem : public IObserver {
private:
    int score = 0;
public:
    void onEnemyAttacked(bool isEnemyDead, int enemyHealth) override;
};

#endif
