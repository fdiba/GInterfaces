#include "btn.h"

Btn::Btn(){
    //ctor
    color.set(255);
    x = ofGetWindowWidth()-70;
    y = 20;
}

Btn::~Btn(){
    //dtor
}

void Btn::update(){
}

void Btn::display(){

    ofSetColor(color);
    ofFill();
    ofRect(x, y , 50, 50);

    ofSetColor(0);
    ofNoFill();
    ofRect(x, y , 50, 50);

}
