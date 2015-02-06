#include "gInterface.h"

gInterface::gInterface(console * _myCS, ofPoint loc, int _width, int _height){

    myCS = _myCS;

    location = loc;
    color = ofColor(0, 102, 153);
    width = _width;
    height = _height;
    message = "";
    myfont.loadFont("arialbd.ttf", 20);

    soundPlayer.loadSound("kick.wav");
    videoPlayer.loadMovie("test.mov");
    videoPlayer.setLoopState(OF_LOOP_NONE);

}
gInterface::~gInterface(){
    //dtor
}
void gInterface::testCombinaison(){

    if(message.compare(0, 3, "123")==0){
        //cout << "COMBINAISON 123" << "\n";
        soundPlayer.play();
        myCS->update("soundPlayer.play();");
    } else if(message.compare(0, 3, "121")==0){
        //cout << "COMBINAISON 121" << "\n";
        myCS->update("A quick brown fox jumps over the lazy dog.");
    } if(message.compare(0, 3, "321")==0){
        //cout << "COMBINAISON 321" << "\n";
        videoPlayer.play();
        myCS->update("videoPlayer.play();");
    }

    //reinit combinaison
    if(message.length()>=3)message="";

}
void gInterface::resetMessage(){
    message="";
}
void gInterface::updateMessage(int id){

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
void gInterface::update(){

    videoPlayer.update();

    if(videoPlayer.getIsMovieDone()){
        videoPlayer.firstFrame();
        videoPlayer.stop();
    }

}
void gInterface::display(){

    ofSetColor(color);
    myfont.drawString(message, location.x, location.y);

    if(videoPlayer.isPlaying()){
        ofSetColor(255);
        videoPlayer.draw(ofGetWidth()-200,ofGetHeight()-160);
    }

}

