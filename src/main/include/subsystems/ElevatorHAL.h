#pragma once

class ElevatorHAL 
{
    public:

    double GetElevatorHeight();
    void MoveElevatorBy(double distance, double speed);
    void MoveElevatorTo(double height);
    private:
    double elevatorHeight;

};
