#pragma once

#include "ofMain.h"


#define HOWMANY 100

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
		
        
        float x1[HOWMANY];
        float y1[HOWMANY];
        float x2[HOWMANY];
        float y2[HOWMANY];
        float x1Vel[HOWMANY];
        float y1Vel[HOWMANY];
        float x2Vel[HOWMANY];
        float y2Vel[HOWMANY];
    
    
    
};
