#include "dude.h"


void dude::setup(){
    pos.x = ofRandom(200,600);
    pos.y = ofRandom(200,600);
    vel.x=5*sin(ofGetElapsedTimef());
    vel.y=5*sin(ofGetElapsedTimef());

    
}

void dude::update(){
    
    pos = pos + vel;
    
    
    
    if(pos.x+size>ofGetWidth()  || pos.x<0){
        vel.x*=-1;
    }
    if(pos.y+size>ofGetHeight()|| pos.y-size<0){
        vel.y*=-1;
    }
    
    if (pos.x > ofGetWidth() || pos.x < 0){
        vel.x *= -1;
    }
    if (pos.y > ofGetHeight() || pos.y < 0){
        vel.y *= -1;
    }
}

void dude::draw(){
    ofDrawCircle(pos.x, pos.y,10);
}
