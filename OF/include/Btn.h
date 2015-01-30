#ifndef btn_h
#define btn_h

#include "ofMain.h"
#include "maConsole.h"

class Btn
{
    public:
        Btn(float x, float y, int width, int height, ofColor color, int _id, MaConsole* _cs);
        virtual ~Btn();

        int id;

        int x, y;
        int width, height;

        MaConsole *cs;

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
