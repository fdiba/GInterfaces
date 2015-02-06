#ifndef CONSOLE_H
#define CONSOLE_H

#include "ofMain.h"

class console
{
    public:
        console(ofPoint loc);
        virtual ~console();

        string message;

        ofTrueTypeFont myfont;
        ofColor color;

        void update(string message);
        void display();

    protected:
    private:

        ofPoint location;
};

#endif // CONSOLE_H
