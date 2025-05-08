#ifndef IOBSERVER_H
#define IOBSERVER_H

class IObserver {
public:
    virtual ~IObserver() {}
    virtual void onEnemyAttacked(bool isEnemyDead, int enemyHealth) = 0;
};

#endif
