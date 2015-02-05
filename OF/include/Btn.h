#ifndef btn_h
#define btn_h

#include "ofMain.h"
#include "gInterface.h"

class btn
{
    public:
        btn(float x, float y, int width, int height, ofColor color, int _id, gInterface * _gi);
        virtual ~btn();

        int id;

        int x, y;
        int width, height;

        gInterface * gi;

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
