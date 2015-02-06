#include "console.h"

console::console(ofPoint loc) {

    location = loc;

    color = ofColor(0);
    myfont.loadFont("times.ttf", 20);
    message = "Hello World!";

}

console::~console() {
    //dtor
}

void console::update(string _message){

    message = _message;
}
void console::display(){
    ofSetColor(color);
    myfont.drawString(message, location.x, location.y);
}
