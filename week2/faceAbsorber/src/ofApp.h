#pragma once

#include "ofMain.h"
#include "ofxCv.h"
#include "ofxFaceTracker.h"

class pixel {
    
public:
    
    ofPoint orig;
    ofPoint pos;
    ofColor color;
    float speed;
    
    
};


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
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    //ofVideoGrabber cam;
    ofImage background;
    ofImage threshold;
    bool bSnapshot;
    
    ofImage phone;
    ofImage screen;
    vector < pixel > pixels;
    
    ofVideoGrabber cam;
    ofxFaceTracker tracker;
    
		
};
