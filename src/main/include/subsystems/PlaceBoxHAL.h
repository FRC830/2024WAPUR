#pragma once
#include <iostream>
#include <ctime>
#include <networktables/DoubleTopic.h>
#include <networktables/IntegerTopic.h>
#include <networktables/StringTopic.h>
class PlaceBoxs{
    public:
        double position;
        double boxPosition;
        double distanceFromThePlatform;
        double raiseSpeed;
        double shelfWidth;
        double heightFromPlatform;
        double distanceFromPlatform(double position);
        double heightFromPlatform(int level, double levelHeight, double baseHeight);
        int raiseSpeed(double noriginalRaiseSpeed, double weight, double changeInAcceleration);
        void putBox(double distance, double heightDistance, double speed, double boxSides, double shelfPosition, double boxPosition);
        
    private:
        double levelHeight;
        double orignalRaiseSpeed;
        double robotHeight;
        double changeInAcceleration;
        double baseHeight;
        double weight;
        double shelfPosition;
        double boxSide;
        double shelfWidth;
        double level;
};

