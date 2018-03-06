#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    ofPoint pt;
    float t = ofGetElapsedTimef();
    
    //parameters
    //float A = ofMap(sin(t*4), -1,1, 0, 400); // horizontal Amplitude
    //float B = ofMap(sin(t*4), -1,1, 0, 400); // vertical Amplitude
    float A = 400;
    float B = 400;
    
    float a = 3; // horizontal Frequency
    float b = 2; // vertical Frequency
    
    //float phaseDelta = ofMap(sin(t*4), -1,1,0,1);
    float phase = TWO_PI/4;
   
    //center of my gfx
    center.x = 500;
    center.y = 500;
    
    pt.x = center.x + A*sin(a*t + phase);
    pt.y = center.y + B*sin(b*t);

    //draw
    ofSetColor(255);
    
    ofDrawCircle(pt , 10);
    
    //draw line
    line.addVertex(pt.x, pt.y);
    if(line.size() > 1000){
        line.getVertices().erase(line.getVertices().begin());
    }
    line.draw();
    
    
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
