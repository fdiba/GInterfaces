#include "btn.h"

btn::btn(ofPoint loc, int _width, int _height, ofColor _color, int _id, gInterface * _gi){

    id = _id;

    color = _color;

    alpha=0;

    gi = _gi;

    location = loc;

    width = _width;
    height = _height;
}
btn::~btn(){
    //dtor
}
void btn::isHit(){
    if(alpha<255){
        alpha+=5;
    } else if(alpha>=255){
        gi->updateMessage(id);
        gi->testCombinaison();
        alpha=0;
    }
}
void btn::isNotHit(){
    if(alpha>0)alpha-=5;
    if(alpha<0)alpha=0;
}
void btn::display(){
    ofSetColor(color, alpha);
    ofFill();
    ofRect(location, width, height);

    ofSetColor(0);
    ofNoFill();
    ofRect(location, width, height);
}
