#ifndef btn_h
#define btn_h

#include "ofMain.h"

class Btn
{
    public:
        Btn(float x, float y, int width, int height, ofColor color);
        virtual ~Btn();

        int x, y;
        int width, height;

        ofColor color;
        int alpha;

        void update();
        void display();

        void isHit();
        void isNotHit();

    protected:
    private:
};

#endif // btn_h
