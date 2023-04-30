#ifndef CUBE_ACTIONS_H
#define CUBE_ACTIONS_H

#include "Cube.h"


class CubeActions : Cube{
    private:

    public:
        void flipArray(char arr[3]);
        void rotateUp();
        void rotateDown();
        void rotateLeft();
        void rotateRight();
        void upClockWise();
        void upCounterClockWise();
        void downClockWise();
        void downCounterClockWise();
        void leftClockWise();
        void leftCounterClockWise();
        void rightClockWise();
        void rightCounterClockWise();
        void frontClockWise();
        void frontCounterClockWise();
        void backClockWise();
        void backCounterClockWise();
        void display();
        void displayFace(char face);
        void displayCube();
};

#endif