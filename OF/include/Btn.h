#ifndef btn_h
#define btn_h

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

#endif // btn_h
