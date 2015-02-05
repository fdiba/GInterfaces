#ifndef CONSOLE_H
#define CONSOLE_H

#include "ofMain.h"

class console
{
    public:
        console(float x, float y);
        virtual ~console();

        string message;

        int x, y;

        ofTrueTypeFont myfont;
        ofColor color;

        void update(string message);
        void display();

    protected:
    private:
};

#endif // CONSOLE_H
