#include "HAL/PlaceBox.h"
#include <iostream>


PlaceBox::PlaceBox() {
    double levelHeight=0;
    int level=0;
    double robotHeight=0;
    double baseHeight=0;
    double shelfPosition=0;
    double boxSide=0;
    double shelfWidth=0;
    double position=0;
    double boxPosition=0;
    double distanceFromThePlatform=0;
}

double PlaceBox::distanceFromPlatform(double position, double shelfPosition)
{
    double distance = shelfPosition-position;
    return distance;
}

int PlaceBox::getLevel(){
    return int(robotHeight/levelHeight)-1;
}
void PlaceBox::liftBox(int level){
    while(getLevel()<level){
        //lift
    }
}
void PlaceBox::moveToShelf(double shelfPosition, double position, double distanceFromPlatform, double boxSides){
    while(shelfPosition-position > 0.5){
    }
}
void PlaceBox::slideBoxIntoShelf(double shelfWidth, double boxPosition, double shelfPosition, double boxSides){
    while(shelfPosition+shelfWidth > boxPosition+boxSides+1){
    }
}
void PlaceBox::putBox(double distance, int goalLevel, double boxSides, double shelfPosition, double boxPosition){
    liftBox(goalLevel);
    moveToShelf(shelfPosition, position, distanceFromThePlatform, boxSides);
    slideBoxIntoShelf(shelfWidth, boxPosition, shelfPosition, boxSides);

}