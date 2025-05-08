#ifndef ENEMY_H
#define ENEMY_H

class Enemy {
private:
    int health;
public:
    Enemy(int hp = 100) : health(hp) {}
    void takeDamage(int dmg);
    int getHealth() const;
};

#endif
