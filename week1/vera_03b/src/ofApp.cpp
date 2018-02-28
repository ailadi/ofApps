#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
}

//--------------------------------------------------------------
void ofApp::update(){
    
  

}

void ofApp::stripySquaresLeft(float x, float y, float w, float h, float divisions){
    ofSetColor(0);
    rnd = floor(ofRandom(3));
    for(int i=0; i<=divisions; i++){
        
        switch(rnd){
            case 0:
                ofDrawLine(x, y+(h/divisions)*i, x+(w/divisions)*i, y);
                break;
            case 1:
                ofDrawLine(x+(w/divisions)*i, y+h, x+w, y+(h/divisions)*i);
                break;
            default:
                ofDrawLine(x, y+(h/divisions)*i, x+(w/divisions)*i, y);
                ofDrawLine(x+(w/divisions)*i, y+h, x+w, y+(h/divisions)*i);
                break;
        }
    }
}


void ofApp::stripySquaresRight(float x, float y, float w, float h, float divisions){
    ofSetColor(0);
    rnd = floor(ofRandom(3));
    for(int i=0; i<=divisions; i++){
        switch(rnd){
            case 0:
                ofDrawLine(x, y+(h/divisions)*i, x+w-(w/divisions)*i, y+h);
                break;
            case 1:
                ofDrawLine(x+(w/divisions)*i, y, x+w, y+h-(h/divisions)*i);
                break;
            default:
                ofDrawLine(x, y+(h/divisions)*i, x+w-(w/divisions)*i, y+h);
                ofDrawLine(x+(w/divisions)*i, y, x+w, y+h-(h/divisions)*i);
                break;
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
   
    ofSeedRandom(mouseX*1000);
    for(int i=0; i<15; i++){
        
        for(int j=0; j<15; j++){
            if(ofRandom(10)>5){
                stripySquaresLeft(0+100*i,0+100*j, 100, 100, 3+ofRandom(12));
            }
            else {
                stripySquaresRight(0+100*i,0+100*j, 100, 100, 5+ofRandom(12));
            }
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
