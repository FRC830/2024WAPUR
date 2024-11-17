/*#include <frc/Timer.h>
#include "subsystems/PlaceBoxHAL.h"
#include <iostream>
#include <ctime>
#include <networktables/DoubleTopic.h>
#include <networktables/IntegerTopic.h>
#include <networktables/StringTopic.h>

class PlaceBox{
    public:
        double position;
        double boxPosition;
        int level;
        position of claw holding box        
        double distanceFromPlatform(double position){
            double distance = shelfPosition-position;
            return distance;
        }
        double distanceFromThePlatform = distanceFromPlatform(position);
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
            m_timer.Start();
            while((m_timer.Get() > units::millisecond_t(1000*heightDistance/speed))){
                /*lift
            }
        }
        void moveToShelf(double shelfPosition, double position, double distanceFromPlatform, double boxSides){
            while(shelfPosition-position > 0.5){
                /*move forward
            }
        }
        void slideBoxIntoShelf(double shelfWidth, double boxPosition, double shelfPosition, double boxSides){
            while(shelfPosition+shelfWidth > boxPosition+boxSides+1){
                /*slide box forward
            }
        }
        void putBox(double distance, double heightDistance, double speed, double boxSides, double shelfPosition, double boxPosition){
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
        frc::Timer m_timer;
};
*/
