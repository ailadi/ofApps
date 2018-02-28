#include "facade.h"

void facade::setup() {
    x= ofGetMouseX();
    y= ofGetMouseY();
    tint=ofRandom(255);
    height = ofGetHeight()-ofGetMouseY();
    width = ofRandom(200);
}

void facade::update() {
   
   
   
}

void facade::draw(){
    
    ofSetColor(tint);
    ofDrawRectangle(x, y, width,height);
    
}
