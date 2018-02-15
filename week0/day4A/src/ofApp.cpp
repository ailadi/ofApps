#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    for(int i=1; i<HOWMANY; i++){
        x1[i]= ofRandom(200,700);
        y1[i]= ofRandom(200,700);
        x2[i]= ofRandom(200,700);
        y2[i]= ofRandom(200,700);
        x1Vel[i]=ofRandom(-5,5);
        y1Vel[i]=ofRandom(-5,5);
        x2Vel[i]=ofRandom(-5,5);
        y2Vel[i]=ofRandom(-5,5);
        
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i=0; i<HOWMANY; i++){
        x1[i]= x1[i]+x1Vel[i];
        y1[i]= y1[i]+y1Vel[i];
        x2[i]= x2[i]+x2Vel[i];
        y2[i]= y2[i]+y2Vel[i];
        
        if (x1[i]-x2[i] > 50){
            x1Vel[i] = -abs(x1Vel[i]);
            x2Vel[i] = abs(x2Vel[i]);
        }
        if (x2[i]-x1[i] > 50){
            x1Vel[i] = abs(x1Vel[i]);
            x2Vel[i] = -abs(x2Vel[i]);
        }
        if (y1[i]-y2[i] > 50){
            y1Vel[i] = -abs(y1Vel[i]);
//            y2Vel[i] = abs(y2Vel[i]);
        }
        if (y2[i]-y1[i] > 50){
            y1Vel[i] = abs(y1Vel[i]);
//            y2Vel[i] = -abs(y2Vel[i]);
        }

        if(x1[i]>ofGetWidth() || x1[i]<0) {
            x1Vel[i]= x1Vel[i]*-1;
        }
        if(y1[i]>ofGetWidth() || y1[i]<0){
            y1Vel[i]= y1Vel[i]*-1;
        }
        if(x2[i]>ofGetWidth() || x2[i]<0){
            x2Vel[i]= x2Vel[i]*-1;
        }
        if(y2[i]>ofGetWidth() || y2[i]<0){
            y2Vel[i]= y2Vel[i]*-1;
        }
        
      
        
    }

}

//--------------------------------------------------------------
void ofApp::draw(){

    for(int i=0; i<HOWMANY; i++){
        ofSetColor(0);
        ofDrawLine(x1[i], y1[i], x2[i], y2[i]);
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
