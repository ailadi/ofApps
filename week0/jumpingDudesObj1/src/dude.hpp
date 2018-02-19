#include "ofMain.h"

class dude {
    
public:
    
    float x;
    float y;
    float xVel;
    float yVel;
    float size;
    float length;
    float radian;
    
    void setup();       // pick random position + vel
    void update();      // update pos, bounce off walls
    void draw();        // draw
    
};
