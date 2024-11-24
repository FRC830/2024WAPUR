#include <frc/Timer.h>
#include "subsystems/PlaceBoxHAL.h"
#include <iostream>
#include <ctime>
#include <networktables/DoubleTopic.h>
#include <networktables/IntegerTopic.h>
#include <networktables/StringTopic.h>
frc::Timer times;
double levelHeight;
int level;
double orignalRaiseSpeed;
double robotHeight;
double changeInAcceleration;
double baseHeight;
double weight;
double shelfPosition;
double boxSide;
double shelfWidth;
double position=0;
double boxPosition=0;
double distanceFromThePlatform=0;
double raiseSpeed=0;
double shelfWidth=0;
double heightFromPlatform=0;
double distanceFromPlatform(double position, double shelfPosition)
{
    double distance = shelfPosition-position;
    return distance;
}
double distanceFromThePlatform = distanceFromPlatform(position, shelfPosition);
double heightFromPlatform(int level, double levelHeight, double baseHeight){
    double heightDifference = level*levelHeight - baseHeight;
    return heightDifference;
}
double raisingSpeed(double originalRaiseSpeed, double weight, double changeInAcceleration){
    double actualRaiseSpeed = originalRaiseSpeed*changeInAcceleration;
    return actualRaiseSpeed;
}
double raiseSpeed = raisingSpeed(orignalRaiseSpeed, weight, changeInAcceleration);
double heightFromPlatform = heightFromPlatform(level, levelHeight, baseHeight);

void liftBox(double heightDistance, double speed){
    times.Start();
    while((times.Get() > units::millisecond_t(1000*heightDistance/speed))){

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
void putBox(double distance, double heightDistance, double speed, double boxSides, double shelfPosition, double boxPosition){
    liftBox(heightDistance, speed);
    moveToShelf(shelfPosition, position, distanceFromThePlatform, boxSides);
    slideBoxIntoShelf(shelfWidth, boxPosition, shelfPosition, boxSides);

double levelHeight;
double orignalRaiseSpeed;
double robotHeight;
double changeInAcceleration;
double baseHeight;
double weight;
double shelfPosition;
double boxSide;
double shelfWidth;
frc::Timer m_timer;
}

