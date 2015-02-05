#include "smartPoint.h"

smartPoint::smartPoint() {
    color.set(255, 0, 0);
    x = 50;
    y = 20;
}
smartPoint::~smartPoint() {
    //dtor
}
bool smartPoint::hitTarget(btn myBtn){

    if(x > myBtn.x && x < myBtn.x+myBtn.width && y > myBtn.y && y < myBtn.y+myBtn.height){
        return true;
    } else {
        return false;
    }
}

void smartPoint::update(int _mouseX, int _mouseY){
    x = _mouseX;
    y = _mouseY;
}

void smartPoint::display(){

    ofSetColor(color);
    ofFill();
    ofCircle(x, y , 10);
}
