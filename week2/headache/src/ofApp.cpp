#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255, 255, 255);
    ofSetCircleResolution(80);
    pt.x = ofRandom(220,580);
    pt.y = ofRandom(220,580);
    velx = ofRandom(-50,50);
    vely = ofRandom(-50,50);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    pt.x = pt.x + velx;
    pt.y = pt.y + vely;
    
    if (pt.x > 560 || pt.x <240 ){
        velx = -velx;
    }
    
    if (pt.y > 560 || pt.y <240 ){
        vely = -vely;
    }
    
    ofSetColor(255, 255, 100);
    ofDrawRectangle(200, 200, 400, 400);
    ofSetColor(0, 0, 0);
    ofDrawCircle(pt.x, pt.y, 40);
    
    
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
