#include "facade.h"

void facade::setup() {
    x=0;
    y=0;
    height = 100;
    width=200;
    tint=10;
}

void facade::update() {
    x= ofGetMouseX();
    y= ofGetMouseY();
    tint=ofRandom(255);
    height = ofGetHeight()-ofGetMouseY();
    width = ofRandom(200);
}

void facade::draw(){
    
    ofSetColor(tint);
    ofDrawRectangle(x, y, width,height);
    
}
