#include "textBox.h"

TextBox::TextBox(float _x, float _y){
    //ctor
    x = _x;
    y = _y;

    color = ofColor(0);
    myfont.loadFont("times.ttf", 20);
    message = "Hello World!";
}

TextBox::~TextBox(){
    //dtor
}

void TextBox::update(string _message){

    message = _message;
}
void TextBox::display(){
    ofSetColor(color);
    myfont.drawString(message, x, y);
}
