
#include "ofMain.h"


class dude {
    
public:
    
    ofPoint pos;
    ofPoint vel;
    ofColor color;
    
    
    void dude(float x, float y, float length, float radian,float size);

    float size=25;
    
    
    
    void setup();       // pick random position + vel
    void update();      // update pos, bounce off walls
    void draw();        // draw
    
    
};
