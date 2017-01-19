#include "Enemy.h"


int generateRandom(int max){
    int randomNum = rand();
    int random = (randomNum % max)+1;
    return random;

}


void Enemy::Movement() {

    if (direction == 1) { //left
        rect.move(-speed, 0);
        sprite.setTextureRect(sf::IntRect(counterWalking* 48 , 48, 48, 48));

    }
    else if (direction == 2) {//right
        rect.move(speed, 0);
        sprite.setTextureRect(sf::IntRect(counterWalking* 48 , 2*48, 48, 48));

    }

    counterWalking++;
    if (counterWalking == 2) {
        counterWalking = 0;
    }
    counter++;
    if(counter >= movementLength){
        direction = generateRandom(3);
        counter = 0;
    }
}









