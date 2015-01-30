#pragma once

#include "ofMain.h"

#include "btn.h"
#include "smartPoint.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		//Btn btn;

		SmartPoint sp;

    private:

        //The star means it will be created in a reserved part of memory just for it.
        Btn *btn1;
        Btn *btn2;
        Btn *btn3;

};
