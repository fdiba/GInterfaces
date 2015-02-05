#ifndef GINTERFACE_H
#define GINTERFACE_H

#include "ofMain.h"
#include "console.h"

class gInterface
{
    public:
        gInterface(console * myCS, float x, float y, int width, int height);
        virtual ~gInterface();

        void update();
        void resetMessage();
        void updateMessage(int id);
        void testCombinaison();
        void display();

    protected:
    private:

        ofSoundPlayer soundPlayer;
        ofVideoPlayer videoPlayer;

        console * myCS;

        int x, y;
        int width, height;

        ofTrueTypeFont myfont;
        ofColor color;

        string message;
};

#endif // GINTERFACE_H
