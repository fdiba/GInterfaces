#ifndef GINTERFACE_H
#define GINTERFACE_H

#include "ofMain.h"
#include "console.h"

class gInterface
{
    public:
        gInterface(console * myCS, float x, float y, int width, int height);
        virtual ~gInterface();

        console * myCS;

        ofSoundPlayer mySound;

        ofTrueTypeFont myfont;
        ofColor color;

        string message;

        int x, y;
        int width, height;

        void update();
        void updateMessage(int id);
        void testCombinaison();
        void display();

    protected:
    private:
};

#endif // GINTERFACE_H
