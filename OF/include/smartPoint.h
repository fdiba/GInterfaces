#ifndef SMARTPOINT_H
#define SMARTPOINT_H

#include "ofMain.h"
#include "btn.h"


class smartPoint {
    public:
        smartPoint();
        virtual ~smartPoint();

        ofColor color;

        void update(int _mouseX, int _mouseY);

        bool hitTarget(btn myBtn);

        void display();

    protected:
    private:

        ofPoint location;
};

#endif // SMARTPOINT_H
