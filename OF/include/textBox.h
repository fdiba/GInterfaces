#ifndef TEXTBOX_H
#define TEXTBOX_H

#include "ofMain.h"

class TextBox
{
    public:
        TextBox(float x, float y);
        virtual ~TextBox();

        string message;

        int x, y;

        ofTrueTypeFont myfont;
        ofColor color;

        void update(string message);
        void display();

    protected:
    private:
};

#endif // TEXTBOX_H
