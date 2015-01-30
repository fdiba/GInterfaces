#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofEnableSmoothing();
    ofSetFrameRate(30);

    int xPos = ofGetWindowWidth()-60;

    btn1 = new Btn(xPos, 20, 40, 40, ofColor(255, 0, 0));
    btn2 = new Btn(xPos, 70, 40, 40, ofColor(0, 255, 0));
    btn3 = new Btn(xPos, 120, 40, 40, ofColor(0, 0, 255));

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(255);

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

    btn1->display();
    btn2->display();
    btn3->display();

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
