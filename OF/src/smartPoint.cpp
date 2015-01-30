#include "smartPoint.h"

SmartPoint::SmartPoint()
{
    //ctor
    color.set(255, 0, 0);
    x = 50;
    y = 20;
}

SmartPoint::~SmartPoint()
{
    //dtor
}

void SmartPoint::update(int _mouseX, int _mouseY){
    x = _mouseX;
    y = _mouseY;
}

void SmartPoint::display(){

    ofSetColor(color);
    ofFill();
    ofCircle(x, y , 10);

}
