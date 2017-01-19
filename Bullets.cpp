#include "Bullets.h"

Bullets::Bullets() {
    rect.setPosition(0, 0);
    rect.setSize(sf::Vector2f(32, 32));
    sprite.setTextureRect(sf::IntRect(0, 0 , 32, 32));
}

void Bullets::update() {
    if(direction == 1){
        rect.move(-movementSpeed, 0);//left
    }
    if(direction == 2){
        rect.move(movementSpeed, 0);//right
    }
    sprite.setPosition(rect.getPosition());
}

