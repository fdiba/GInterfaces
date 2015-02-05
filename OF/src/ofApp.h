#pragma once

#include "ofMain.h"

#include "btn.h"
#include "smartPoint.h"
#include "gInterface.h"
#include "console.h"

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

		smartPoint sp;

        console * myCS;

    private:

        gInterface * myGI; //pointer variable

        btn * btn1;
        btn * btn2;
        btn * btn3;

};
