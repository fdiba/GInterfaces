#ifndef BTN_H
#define BTN_H

#include "ofMain.h"

class Btn
{
    public:
        Btn();
        virtual ~Btn();

        int x;
        int y;
        ofColor color;

        void update();
        void display();

    protected:
    private:
};

#endif // BTN_H
