#pragma once

#include <iostream>

class PlaceBox {
    public:
        PlaceBox();
        ~PlaceBox() = default;
        double position;
        double boxPosition;
        double distanceFromThePlatform;
        double distanceFromPlatform(double position, double shelfPosition);
        void putBox(double distance, int goallevel, double boxSides, double shelfPosition, double boxPosition);
        int getLevel();
        void liftBox(int level);
        void moveToShelf(double shelfPosition, double position, double distanceFromPlatform, double boxSides);
        void slideBoxIntoShelf(double shelfWidth, double boxPosition, double shelfPosition, double boxSides);
        
    private:
        double levelHeight;
        double robotHeight;
        double baseHeight;
        double shelfPosition;
        double boxSide;
        double shelfWidth;
        double level;
};

