
#include "Graphic.h"


int Graphic::loadTextures(){

    // load Player texture
    if (!texturePlayer.loadFromFile("../res/player.png")) {
            return EXIT_FAILURE;
    }

    // load Enemies texture
    if (!textureEnemy1.loadFromFile("../res/enemy1.png")) {
        return EXIT_FAILURE;
    }

    if (!textureEnemy2.loadFromFile("../res/enemy2.png")) {
        return EXIT_FAILURE;
    }
    if (!textureEnemy3.loadFromFile("../res/enemy3.png")) {
        return EXIT_FAILURE;
    }
    if (!textureBoss.loadFromFile("../res/bossenemy.png")) {
        return EXIT_FAILURE;
    }

    // load Fireball texture
    if (!textureFireball.loadFromFile("../res/fire1.png.png")) {
        return EXIT_FAILURE;
    }

    // load Item texture
    if (!textureDonut.loadFromFile("../res/Donut.png")) {
        return EXIT_FAILURE;
    }

    if (!textureCoffee.loadFromFile("../res/Coffee.png")) {
        return EXIT_FAILURE;
    }

    if (!texturePepper.loadFromFile("../res/Pepper.png")) {
        return EXIT_FAILURE;
    }
}

void Graphic::setItems() {
}

void Graphic::setEnemies() {

    rect.setPosition(20, 20);
    sprite.setTexture(textureEnemy1);


    rect.setPosition(10, 15);
    sprite.setTexture(textureEnemy2);

    rect.setPosition(0, 10);
    sprite.setTexture(textureEnemy3);

    rect.setPosition(10, 0);
    sprite.setTexture(textureBoss);

}






