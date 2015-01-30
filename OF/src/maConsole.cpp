#include "maConsole.h"

MaConsole::MaConsole(float _x, float _y, int _width, int _height){
    x = _x;
    y = _y;
    color = ofColor(0, 102, 153);
    width = _width;
    height = _height;
    message = "Hello World!";
    myfont.loadFont("arialbd.ttf", 20);

}

MaConsole::~MaConsole(){
    //dtor
}
void MaConsole::updateMessage(int id){

    ostringstream convert;
    convert << id;
    message = convert.str();

}
void MaConsole::update(){

}
void MaConsole::display(){
    ofSetColor(color);
    myfont.drawString(message, x, y);
}
