//
//  dude.cpp
//  jumpingDudesObj1
//
//  Created by ailadi  on 2/18/18.
//

#include "dude.h"

void dude::setup(){

        pos.x = ofRandom(100,1000);
        pos.y = ofRandom(100,1000);
        vel.x = ofRandom(-5,5)*sin(ofGetElapsedTimef());
        vel.y = ofRandom(-5,5)*sin(ofGetElapsedTimef());
        size=10;
        length=15;
    }

void dude::update(){
    
        pos+= vel;
        radian=abs(sin(ofGetElapsedTimef()*10));
        
        if(pos.x+size>ofGetWidth()  || pos.x<0){
            vel.x*=-1;
        }
        if(pos.y+size>ofGetHeight()|| pos.y-size<0){
            vel.y*=-1;
        }    
}

void dude::draw(){
    ofSetColor(0);
    ofDrawLine(pos.x, pos.y, pos.x-(length*sin(radian)), pos.y+(length*cos(radian)));
    ofDrawLine(pos.x+size, pos.y, pos.x+size+(length*sin(radian)), pos.y+(length*cos(radian)));
    ofDrawRectangle(pos.x, pos.y-size, size, 2*size);
    ofSetColor(255);
    ofDrawRectangle(pos.x+size*0.2,pos.y-size*0.4, 3,3);
    ofDrawRectangle(pos.x+size*0.64,pos.y-size*0.4, 3,3);
    ofSetColor(0);
}
