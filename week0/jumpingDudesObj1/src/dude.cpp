//
//  dude.cpp
//  jumpingDudesObj1
//
//  Created by ailadi  on 2/18/18.
//


#include "dude.hpp"


void dude::setup(){

        x = ofRandom(100,1000);
        y = ofRandom(100,1000);
        xVel = ofRandom(-5,5)*sin(ofGetElapsedTimef());
        yVel = ofRandom(-5,5)*sin(ofGetElapsedTimef());
        size=10;
        length=15;
    }

void dude::update(){
    
        x = x + xVel;
        y = y + yVel;
        radian=abs(sin(ofGetElapsedTimef()*10));
        
        if(x+size>ofGetWidth()  || x<0){
            xVel*=-1;
        }
        if(y+size>ofGetHeight()|| y-size<0){
            yVel*=-1;
        }
          
    
}

void dude::draw(){
    ofSetColor(0);
    ofDrawLine(x, y, x-(length*sin(radian)), y+(length*cos(radian)));
    ofDrawLine(x+size, y, x+size+(length*sin(radian)), y+(length*cos(radian)));
    ofDrawRectangle(x, y-size, size, 2*size);
    ofSetColor(255);
    ofDrawRectangle(x+size*0.2,y-size*0.4, 3,3);
    ofDrawRectangle(x+size*0.64,y-size*0.4, 3,3);
    ofSetColor(0);
}
