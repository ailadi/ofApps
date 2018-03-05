#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
}

//--------------------------------------------------------------
void ofApp::update(){

}
void ofApp::triangolo(float x, float y, float k){
    a.x = x-k/2;
    a.y = y-cos(PI/6)*k/2;
    b.x = x+k/2;
    b.y = y-cos(PI/6)*k/2;
    c.x = x;
    c.y = y+cos(PI/6)*k/2;
    
    ofDrawTriangle(a, b, c);

}



//--------------------------------------------------------------
void ofApp::draw(){
    
    float t = ofGetElapsedTimef();
 
    ofSetColor(255);
    ofNoFill();
    for (int i=100; i>1; i-=6){
        triangolo(400+sin(t)*100,400+cos(t+i)*100,3*i);
    }

    
    cout << PI/6 <<endl;
   
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
