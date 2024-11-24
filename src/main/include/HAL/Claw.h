#pragma once

class Claw
{
public:

    Claw();
    ~Claw() = default;

    void Clasp();
    void Unclasp();

private:
    // TODO - get rid... only used for printing
    int _signal = 0;


    // TODO - define mechanism
};