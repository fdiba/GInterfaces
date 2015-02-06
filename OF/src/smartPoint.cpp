#include "smartPoint.h"

smartPoint::smartPoint() {
    color.set(255, 0, 0);
    location = ofPoint();
}
smartPoint::~smartPoint() {
    //dtor
}
bool smartPoint::hitTarget(btn myBtn){

    if(location.x > myBtn.location.x && location.x < myBtn.location.x+myBtn.width &&
       location.y > myBtn.location.y && location.y < myBtn.location.y+myBtn.height){
        return true;
    } else {
        return false;
    }
}

void smartPoint::update(int _mouseX, int _mouseY){
    location.x = _mouseX;
    location.y = _mouseY;
}

void smartPoint::display(){

    ofSetColor(color);
    ofFill();
    ofCircle(location, 10);
}
