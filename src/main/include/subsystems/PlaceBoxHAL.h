/*
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
        /*double distanceFromPlatform(double position){
        }
        double heightFromPlatform;
        double heightFromPlatform(level, levelHeight, baseHeight){
        }
        int raiseSpeed(originalRaiseSpeed, weight, changeInAcceleration){
        }
        void putBox(double distance, double heightDistance, double speed, double boxSides, double shelfPosition, box Position){
            liftBox(heightDistance, speed);
            moveToShelf(shelfPosition, position, distanceFromThePlatform, boxSides);
            slideBoxIntoShelf(shelfWidth, boxPosition, shelfPosition, boxSides);
        }
        
    private:
        double levelHeight;
           /*height between levels

        double orignalRaiseSpeed;
        double robotHeight;
        double changeInAcceleration;
        /*relationship between change in mass and change in acceleration
        double baseHeight;
        /*original height of the box
       double weight;
        /*original weight of the box
        double shelfPosition;
        /*position of edge where the box slides towards
        double boxSide;
        double shelfWidth;
};
*/
