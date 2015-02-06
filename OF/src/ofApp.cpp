#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofEnableSmoothing();
    ofSetFrameRate(30); //0

    ofBackground(255);
    ofSetBackgroundAuto(true);

    int xPos = ofGetWindowWidth()-60;

    myCS = new console(ofPoint(20, 200));

    myGI = new gInterface(myCS, ofPoint(20, 40), 100, 20); // actual variable declaration

    btn1 = new btn(ofPoint(xPos, 20), 40, 40, ofColor(255, 0, 0), 1, myGI);
    btn2 = new btn(ofPoint(xPos, 70), 40, 40, ofColor(0, 255, 0), 2, myGI);
    btn3 = new btn(ofPoint(xPos, 120), 40, 40, ofColor(0, 0, 255), 3, myGI);

}

//--------------------------------------------------------------
void ofApp::update(){

    myGI->update();

    sp.update(mouseX, mouseY);

    if(sp.hitTarget(*btn1)){
        btn1->isHit();
    } else {
        btn1->isNotHit();
    }

    if(sp.hitTarget(*btn2)){
        btn2->isHit();
    } else {
        btn2->isNotHit();
    }

    if(sp.hitTarget(*btn3)){
        btn3->isHit();
    } else {
        btn3->isNotHit();
    }

}

//--------------------------------------------------------------
void ofApp::draw(){

    btn1->display();
    btn2->display();
    btn3->display();

    myGI->display();
    myCS->display();

    sp.display();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    myGI->resetMessage();
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}
