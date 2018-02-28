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
    for (int i=0; i< width-60; i+=8){
        for (int j=0; j< height; j+=16){
            ofSetColor(255);
            ofDrawRectangle(20+x+i, 20+y+j, 4, 8);
    }
}
}
