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
    
    for (int i=1; i<80; i+=2){
    ofPoint pt;
    float t = ofGetElapsedTimef()/2;
    
    //parameters
    //float A = ofMap(sin(t*4), -1,1, 0, 400); // horizontal Amplitude
    //float B = ofMap(sin(t*4), -1,1, 0, 400); // vertical Amplitude
    float A = 300; // horizontal Amplitude
    float B = 300; // vertical Amplitude
    
    float a = 3; // horizontal Frequency
    float b = 2; // vertical Frequency
    
    //float phaseDelta = ofMap(sin(t*4), -1,1,0,1);
    float phase = TWO_PI/4;
   
    //center of my gfx
    center.x = 400;
    center.y = 400;
    
    pt.x = center.x + A*sin(a*t*i/80 + phase);
    pt.y = center.y + B*sin(b*t*i/80);

    //draw
    ofSetColor(255);
    
    ofDrawCircle(pt , 10);
    
    //draw line
//    line.addVertex(pt.x, pt.y);
//    if(line.size() > 1000){
//        line.getVertices().erase(line.getVertices().begin());
//    }
//    line.draw();
    
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
