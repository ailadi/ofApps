#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(0);
    int thickness=5;
    ofSetLineWidth(thickness);
    
    ofSeedRandom(0);
    
    for (int i=0; i<450; i+=20){
        for (int j=0; j<450; j+=20){
            float rndAngle = ofRandom(-180,180);
            ofPushMatrix();
            //ofTranslate(30, 30);
            ofTranslate(i, j);
            ofRotate(rndAngle);
            if(j<150){
                ofDrawLine(0-8, 0, 8, 0);
                ofDrawCircle(0-8, 0, thickness/2);
                ofDrawCircle(8, 0, thickness/2);
                
            } else if (j>150 && j<300){
                ofDrawLine(0-8, 0, 8, 0);
                ofDrawCircle(0-8, 0, thickness/2);
                ofDrawCircle(8, 0, thickness/2);
                
                ofDrawLine(0-8, 12, 8, 12);
                ofDrawCircle(0-8, 12, thickness/2);
                ofDrawCircle(8, 12, thickness/2);
            } else {
                ofDrawLine(0-8, 0, 8, 0);
                ofDrawCircle(0-8, 0, thickness/2);
                ofDrawCircle(8, 0, thickness/2);
                
                ofDrawLine(0-8, 10, 8, 10);
                ofDrawCircle(0-8, 10, thickness/2);
                ofDrawCircle(8, 10, thickness/2);
                
                ofDrawLine(0-8, 20, 8, 20);
                ofDrawCircle(0-8, 20, thickness/2);
                ofDrawCircle(8, 20, thickness/2);
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
