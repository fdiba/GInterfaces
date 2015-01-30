#include "btn.h"

Btn::Btn(float _x, float _y, int _width, int _height, ofColor _color){
    //ctor
    color = _color;

    alpha=0;

    x = _x;
    y = _y;

    width = _width;
    height = _height;
}
Btn::~Btn(){
    //dtor
}
void Btn::isHit(){
    if(alpha<255){
        alpha+=5;
    } else if(alpha>=255){
        cout << "new evt " << ofRandom(1) << "\n";
        alpha=0;
    }


}
void Btn::isNotHit(){
    if(alpha>0)alpha-=5;
    if(alpha<0)alpha=0;
}
void Btn::display(){

    ofSetColor(color, alpha);
    ofFill();
    ofRect(x, y , width, height);

    ofSetColor(0);
    ofNoFill();
    ofRect(x, y , width, height);

}
