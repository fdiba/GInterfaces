#ifndef SMARTPOINT_H
#define SMARTPOINT_H

#include "ofMain.h"
#include "btn.h"


class SmartPoint
{
    public:
        SmartPoint();
        virtual ~SmartPoint();

        int x;
        int y;
        ofColor color;

        void update(int _mouseX, int _mouseY);

        bool hitTarget(Btn btn);

        void display();

    protected:
    private:
};

#endif // SMARTPOINT_H
