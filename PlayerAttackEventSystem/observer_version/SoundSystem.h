#ifndef SOUNDSYSTEM_H
#define SOUNDSYSTEM_H

#include "IObserver.h"
#include <iostream>

class SoundSystem : public IObserver {
public:
    void onEnemyAttacked(bool isEnemyDead, int enemyHealth) override;
};

#endif
