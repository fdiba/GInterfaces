#include "btn.h"

Btn::Btn(){
    //ctor
    color.set(255);
    x = ofGetWindowWidth()-50;
    y = 20;
}
void Btn::update(){
}
void Btn::display(){

    ofSetColor(color);
    ofFill();
    ofRect(x, y , 30, 30);

    ofSetColor(0);
    ofNoFill();
    ofRect(x, y , 30, 30);

}
Btn::~Btn(){
    //dtor
}
