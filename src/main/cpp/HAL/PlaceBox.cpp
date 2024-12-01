#include "HAL/PlaceBoxHAL.h"
#include <iostream>
#include <ctime>
#include <networktables/DoubleTopic.h>
#include <networktables/IntegerTopic.h>
#include <networktables/StringTopic.h>
double levelHeight;
int level;
double robotHeight;
double baseHeight;
double shelfPosition;
double boxSide;
double shelfWidth;
double position=0;
double boxPosition=0;
double distanceFromThePlatform=0;
double shelfWidth=0;
double distanceFromPlatform(double position, double shelfPosition)
{
    double distance = shelfPosition-position;
    return distance;
}
double distanceFromThePlatform = distanceFromPlatform(position, shelfPosition);

int getLevel(){
    return int(robotHeight/levelHeight)-1;
}
void liftBox(int level){
    while(getLevel()<level){
        //lift
    }
}
void moveToShelf(double shelfPosition, double position, double distanceFromPlatform, double boxSides){
    while(shelfPosition-position > 0.5){
    }
}
void slideBoxIntoShelf(double shelfWidth, double boxPosition, double shelfPosition, double boxSides){
    while(shelfPosition+shelfWidth > boxPosition+boxSides+1){
    }
}
void putBox(double distance, int goalLevel, double boxSides, double shelfPosition, double boxPosition){
    liftBox(goalLevel);
    moveToShelf(shelfPosition, position, distanceFromThePlatform, boxSides);
    slideBoxIntoShelf(shelfWidth, boxPosition, shelfPosition, boxSides);

double levelHeight;
double robotHeight;
double baseHeight;
double shelfPosition;
double boxSide;
double shelfWidth;
}