#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
   
  
}

void ofApp::tri(float x, float y, float r, float angle){
    
    ofPoint pt[3];
    for (int i=0; i<3; i++){
        pt[i].x = x + cos(TWO_PI/3*i +angle)*r;
        pt[i].y = y + sin(TWO_PI/3*i +angle)*r;
        ofSetColor(0);
   }
    ofDrawTriangle(pt[0], pt[1], pt[2]);
}

//--------------------------------------------------------------
void ofApp::draw(){
 
    //float sint = ofMap(sin)
    
    for (int j=0; j<200; j+=10){
        for (int i=0; i<360; i+=10){
            float t = ofGetElapsedTimef();
            float radius = ofMap(sin(t/4), -1, 1, 40, 200);
            ptx = xcenter + cos(t/4*j)*radius*i*0.03;
            pty = ycenter + sin(t/4*j)*radius*i*0.03;
            tri(ptx, pty, 10, t+i);
        //ofDrawCircle(xcenter,ycenter,10);
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
