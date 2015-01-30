#ifndef SMARTPOINT_H
#define SMARTPOINT_H

#include "ofMain.h"


class SmartPoint
{
    public:
        SmartPoint();
        virtual ~SmartPoint();

        int x;
        int y;
        ofColor color;

        void update(int _mouseX, int _mouseY);
        void display();

    protected:
    private:
};

#endif // SMARTPOINT_H
