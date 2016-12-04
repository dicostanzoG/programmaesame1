//
// Created by noble on 29/11/2016.
//

#ifndef PROGRAMMAESAME_ITEM_H
#define PROGRAMMAESAME_ITEM_H
#include <SFML/Graphics.hpp>

class Item {
public:
    void setDonut(bool donut) {
        Item::donut = donut;
    }

    bool isDonut() const  {
        return donut;
    }

    bool isCoffee() const {
        return coffee;
    }

    void setCoffee(bool coffee) {
        Item::coffee = coffee;
    }

    bool isPepper() const {
        return pepper;
    }

    void setPepper(bool pepper) {
        Item::pepper = pepper;
    }

protected:
    bool donut;
    bool pepper;
    bool coffee;
};


#endif //PROGRAMMAESAME_ITEM_H
