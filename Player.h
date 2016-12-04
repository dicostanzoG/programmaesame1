//
// Created by noble on 29/11/2016.
//

#ifndef PROGRAMMAESAME_PLAYER_H
#define PROGRAMMAESAME_PLAYER_H
#include "Character.h"
#include "Item.h"
#include "Bullets.h"


class Player :  public Character {

public:

    Player(float x, float y, float speed, int size, bool invincible, bool fire, bool bullet, Item *item= NULL) :
            Character(x, y, speed), invincible(invincible), fire(fire), bullet(bullet), item(item) {
    }

    virtual ~Player() {};

    void setSize(int size) {
        Player::size = size;
    }

    int getSize(){
        return size;
    }

    bool isInvincible() {
        return invincible;
    }

    void setInvincible(bool invincible) {
        Player::invincible = invincible;//false
    }

    void setFire(bool fire){
        Player::fire = fire;
    }

    bool getFire(){
        return fire;
    }

    bool pickItem(bool donut, bool pepper, bool coffee){
        bool Pickupped = false;
      if (donut){
          size = 2;
          bullet = true;
          Pickupped=true;
      }

        if (pepper) {
          invincible = true;
          fire = true;
      }

      if (coffee)
          speed *= 2;
    }

    float Jump(float x, float y ){
// TODO salto
    }

protected:
    int size;
    bool invincible;
    bool fire;
    bool bullet;
    Item *item;

};


#endif //PROGRAMMAESAME_PLAYER_H
