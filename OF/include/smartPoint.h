#ifndef SMARTPOINT_H
#define SMARTPOINT_H

#include "ofMain.h"
#include "btn.h"


class smartPoint {
    public:
        smartPoint();
        virtual ~smartPoint();

        int x;
        int y;
        ofColor color;

        void update(int _mouseX, int _mouseY);

        bool hitTarget(btn myBtn);

        void display();

    protected:
    private:
};

#endif // SMARTPOINT_H
