#ifndef UI_H
#define UI_H

#include "IObserver.h"
#include <iostream>

class UI : public IObserver {
public:
    void onEnemyAttacked(bool isEnemyDead, int enemyHealth) override;
};

#endif
