#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetCircleResolution(100);
    
    float t=ofGetElapsedTimef();
    float red = ofMap(sin(t*2), -1, 1, 0, 255);
    float green = ofMap(sin(t/4), -1, 1, 0, 255);
    float blue = ofMap(sin(t), -1, 1, 0, 255);
    ofBackground(red, green, blue);
    float redX = ofMap(sin(t*3), -1, 1, 0, 255);
    float greenX = ofMap(sin(t), -1, 1, 0, 255);
    float blueX = ofMap(sin(t/4), -1, 1, 0, 255);
    ofSetColor(redX, greenX, blueX);
    ofDrawCircle(400,400, 300);
//    for (int i=0; i<10; i++){
//
//    }
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
