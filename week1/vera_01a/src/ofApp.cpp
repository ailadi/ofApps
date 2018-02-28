#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    //vera.allocate(228,232, OF_IMAGE_COLOR);
    vera.load("vera.png");
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofEnableAlphaBlending();
    ofSetColor(0,0,0,0x88);
    ofFill();

    ofSeedRandom(mouseX*1000);
    for (int i=0; i<500; i+=80){
        for (int j=0; j<500; j+=80){
            vera.draw(300+i+(ofRandom(-8,8)), 100+j+(ofRandom(-8,8)),70,70);
            //ofDrawRectangle(300+i+(ofRandom(-8,8)), 100+j+(ofRandom(-8,8)), 70, 70);
        }
    }
    ofDisableAlphaBlending();
    
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
