#include "maConsole.h"

MaConsole::MaConsole(float _x, float _y, int _width, int _height){
    x = _x;
    y = _y;
    color = ofColor(0, 102, 153);
    width = _width;
    height = _height;
    message = "";
    myfont.loadFont("arialbd.ttf", 20);

}

MaConsole::~MaConsole(){
    //dtor
}
void MaConsole::testCombinaison(){

    if(message.compare(0, 3, "123")==0){
        cout << "COMBINAISON 123" << "\n";
    } else if(message.compare(0, 3, "121")==0){
        cout << "COMBINAISON 121" << "\n";
    } if(message.compare(0, 3, "321")==0){
        cout << "COMBINAISON 321" << "\n";
    }

    //reinit combinaison
    if(message.length()>=3)message="";

}
void MaConsole::updateMessage(int id){

    ostringstream convert;
    convert << id;
    string nextCharacter = convert.str();

    string lastCharacter = "";

    if(message.length() > 0){

        lastCharacter = message.at(message.length()-1);
        //cout << lastCharacter << " " << nextCharacter << "\n";

        if (nextCharacter.compare(lastCharacter)!=0){
            //cout << "NOUVEAU TYPE " << "\n";
            message = message + nextCharacter;
        }


    } else {
        //new combinaison
        message = nextCharacter;
    }

}
void MaConsole::update(){

}
void MaConsole::display(){
    ofSetColor(color);
    myfont.drawString(message, x, y);
}
