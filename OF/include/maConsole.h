#ifndef MACONSOLE_H
#define MACONSOLE_H

#include "ofMain.h"

class MaConsole
{
    public:
        MaConsole(float x, float y, int width, int height);
        virtual ~MaConsole();

        ofTrueTypeFont myfont;
        ofColor color;

        string message;

        int x, y;
        int width, height;

        void update();
        void updateMessage(int id);
        void display();

    protected:
    private:
};

#endif // MACONSOLE_H
