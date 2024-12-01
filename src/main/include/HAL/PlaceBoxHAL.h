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
        double shelfWidth;
        double distanceFromPlatform(double position);
        void putBox(double distance, int goallevel, double boxSides, double shelfPosition, double boxPosition);
        
    private:
        double levelHeight;
        double robotHeight;
        double baseHeight;
        double shelfPosition;
        double boxSide;
        double shelfWidth;
        double level;
};

