#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    float time = ofGetElapsedTimef();
    float amplitude = 50;
    //float frequency = 3 + sin(time*0.1);
    float frequency =2*PI*floor(time);
    float phase = 1 + time *10;
    //float phase =
    
    int numDots = 100;
    for (int i=0; i<numDots; i++) {
        float angle = ofMap(i, 0, numDots, 0, TWO_PI);
        float radius = 100 + sin(angle*frequency + phase)*amplitude;

        float x = radius*cos(angle);
        float y = radius*sin(angle);
        
        float xOriginal = 100*cos(angle);
        float yOriginal = 100*sin(angle);
        ofDrawCircle(x, y, 2);
        ofDrawCircle(xOriginal, yOriginal, 2);
        ofDrawLine(xOriginal, yOriginal, x, y);
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
