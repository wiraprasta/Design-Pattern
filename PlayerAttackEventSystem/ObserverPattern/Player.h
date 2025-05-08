#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include "IObserver.h"
#include "Enemy.h"

class Player {
private:
    std::vector<IObserver*> observers;
public:
    void attach(IObserver* observer);
    void detach(IObserver* observer);
    void notify(bool isEnemyDead, int enemyHealth);
    void attack(Enemy& enemy);
};

#endif
