#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0, 0, 255);
    ofSetColor(255, 255, 255);
    
    /*
     //WRITE NAME:
     //A
     ofDrawTriangle(150, 200, 100, 300, 200, 300);
     //I
     ofDrawLine(250, 200, 250, 300);
     //L
     ofDrawLine(300, 200, 300, 300);
     ofDrawLine(300, 300, 350, 300);
     //A
     ofDrawTriangle(450, 200, 400, 300, 500, 300);
     //D/Users/ailadi/Documents/of_v0.9.8_osx_release/apps/myApps/wks1
     ofDrawRectangle(550, 250, 100, 50);
     ofDrawTriangle(550, 200, 550, 250, 650, 250);
     //I
     ofDrawLine(700, 200, 700, 300);
     */
    
    
    // SEZIONE AUREA
    // E VARIABLES
    float x = 0;
    float y = 0;
    float width = 400;
    float height = 400;
    
    // DRAW E
    ofSetColor(255, 0, 0);
    ofDrawRectangle(x, y, width, height);
    ofSetColor(255, 255, 255);
    ofDrawLine(x, y, x, y+height);
    ofDrawLine(x, y, x+width, y);
    ofDrawLine(x, y+height/2, x+width, y+height/2);
    ofDrawLine(x, y+height, x+width, y+height);
    
    x = x+width;
    width = width/2;
    height = height/2;
    ofSetColor(200, 0, 50);
    ofDrawRectangle(x, y, width, height);
    ofSetColor(255, 255, 255);
    ofDrawLine(x, y, x, y+height);
    ofDrawLine(x, y, x+width, y);
    ofDrawLine(x, y+height/2, x+width, y+height/2);
    ofDrawLine(x, y+height, x+width, y+height);
    
    x = x+0.5*width;
    y = y+height;
    width = width/2;
    height = height/2;
    ofSetColor(150, 0, 100);
    ofDrawRectangle(x, y, width, height);
    ofSetColor(255, 255, 255);
    ofDrawLine(x, y, x, y+height);
    ofDrawLine(x, y, x+width, y);
    ofDrawLine(x, y+height/2, x+width, y+height/2);
    ofDrawLine(x, y+height, x+width, y+height);
    
    x = x-0.5*width;
    y = y+0.5*height;
    width = width/2;
    height = height/2;
    ofSetColor(100, 0, 150);
    ofDrawRectangle(x, y, width, height);
    ofSetColor(255, 255, 255);
    ofDrawLine(x, y, x, y+height);
    ofDrawLine(x, y, x+width, y);
    ofDrawLine(x, y+height/2, x+width, y+height/2);
    ofDrawLine(x, y+height, x+width, y+height);
    
    y = y-0.5*height;
    width = width/2;
    height = height/2;
    ofSetColor(50, 0, 200);
    ofDrawRectangle(x, y, width, height);
    ofSetColor(255, 255, 255);
    ofDrawLine(x, y, x, y+height);
    ofDrawLine(x, y, x+width, y);
    ofDrawLine(x, y+height/2, x+width, y+height/2);
    ofDrawLine(x, y+height, x+width, y+height);
    
    x = x+width;
    width = width/2;
    height = height/2;
    ofSetColor(0, 0, 250);
    ofDrawRectangle(x, y, width, height);
    ofSetColor(255, 255, 255);
    ofDrawLine(x, y, x, y+height);
    ofDrawLine(x, y, x+width, y);
    ofDrawLine(x, y+height/2, x+width, y+height/2);
    ofDrawLine(x, y+height, x+width, y+height);
    
    
    /*
     float x=100;
     float y=100;
     float height=50;
     float horIncrement=50;
     float color=0;
     float colorVariation=50;
     float inclination = 10;
     float shift =10;
     
     
     
     ofSetColor(color,0,0);
     ofDrawLine(x, y, x+inclination, y+height);
     
     for (float i=0; i<2000; i=i+horIncrement){
     x=x+i;
     inclination=inclination+shift;
     color = color + colorVariation;
     ofSetColor(colorVariation,0,0);
     ofDrawLine(x, y, x+inclination, y+height);
     }
     
     */
    
    
    
    
    
    
    
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}

