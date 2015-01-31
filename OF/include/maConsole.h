#ifndef MACONSOLE_H
#define MACONSOLE_H

#include "ofMain.h"
#include "textBox.h"

class MaConsole
{
    public:
        MaConsole(TextBox* textBox, float x, float y, int width, int height);
        virtual ~MaConsole();

        TextBox *textBox;

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

#endif // MACONSOLE_H
