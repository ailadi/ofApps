#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
}

//--------------------------------------------------------------
void ofApp::update(){

}


void ofApp::roundLine(int x, int y, int thickness){
    ofSetLineWidth(thickness);
    ofSetColor(0);
    ofDrawLine(x, 0-y, x, y);
    ofDrawCircle(x, 0-y, thickness/2);
    ofDrawCircle(x, y, thickness/2);
}

//--------------------------------------------------------------
void ofApp::draw(){
   
    ofSeedRandom(0);
 
    for (int i=0; i<500; i+=20){
        for (int j=0; j<500; j+=20){
            float rndAngle = ofRandom(-180,160);
            ofPushMatrix();
            ofTranslate(i, j);
            ofRotate(rndAngle);
            if(j<=160){
                roundLine(0, 8, thickness);
            } else if (j>160 && j<=320){
                roundLine(6, 8, thickness);
                roundLine(-6, 8, thickness);
            } else {
                roundLine(9, 8, thickness);
                roundLine(0, 8, thickness);
                roundLine(-9, 8, thickness);
            }   
            ofPopMatrix();
        }
    }
            
    

    
    
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
