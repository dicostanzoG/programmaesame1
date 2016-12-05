#ifndef PROGRAMMAESAME_PLAYER_H
#define PROGRAMMAESAME_PLAYER_H

#include "Character.h"
#include "Item.h"
#include "Bullets.h"


class Player : public Character {

public:

    Player(float x, float y, float speed, int size, bool invincible, bool fire, bool bullet):
            Character(x, y, speed), invincible(invincible), fire(fire), bullet(bullet) {
    }

    virtual ~Player() {};

    void setSize(int size) {
        Player::size = size;
    }

    int getSize() {
        return size;
    }

    bool isInvincible() {
        return invincible;
    }

    void setInvincible(bool invincible) {
        Player::invincible = invincible;
    }

    void setFire(bool fire) {
        Player::fire = fire;
    }

    bool getFire() {
        return fire;
    }

    bool CouldBullet() const {
        return bullet;
    }

    void setBullet(bool bullet) {
        Player::bullet = bullet;
    }

    bool pickItem(bool donut, bool pepper, bool coffee) {
        bool Pickupped = false;

        if (donut) {
            size = 2;
            bullet = true;
            Pickupped = true;
        }

        if (pepper) {
            invincible = true;
            fire = true;
            Pickupped = true;
        }

        if (coffee) {
            speed *= 2;
            Pickupped = true;
        }
        return Pickupped;
    }

    void Jump(float x, float y) {
        //TODO JUMP
    }

protected:
    int size;
    bool invincible;
    bool fire;
    bool bullet;


};


#endif //PROGRAMMAESAME_PLAYER_H
