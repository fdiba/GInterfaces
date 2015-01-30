#include "btn.h"

Btn::Btn(){
    //ctor
    color.set(255);

    y = 20;
    width = height = 50;
    x = ofGetWindowWidth()-(width+20);
}

Btn::~Btn(){
    //dtor
}

void Btn::update(){
}

void Btn::display(){

    ofSetColor(color);
    ofFill();
    ofRect(x, y , width, height);

    ofSetColor(0);
    ofNoFill();
    ofRect(x, y , width, height);

}
