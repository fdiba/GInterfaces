#ifndef btn_h
#define btn_h

#include "ofMain.h"

class Btn
{
    public:
        Btn();
        virtual ~Btn();

        int x, y;
        int width, height;

        ofColor color;

        void update();
        void display();

    protected:
    private:
};

#endif // btn_h
