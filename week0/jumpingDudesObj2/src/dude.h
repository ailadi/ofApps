#include "ofMain.h"

class dude {
    
public:
    
    ofPoint pos;
    ofPoint vel;
    
    float size;
    float length;
    float radian;
    
    void setup();       // pick random position + vel
    void update();      // update pos, bounce off walls
    void draw();        // draw
    
};
