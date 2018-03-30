#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    img.load("hand.png");
    img.setImageType(OF_IMAGE_COLOR_ALPHA);
    ofBackground(0);
    
    ofHideCursor();
 
    //ofSetBackgroundAuto(false);
}

//--------------------------------------------------------------
void ofApp::update(){

    
}

//--------------------------------------------------------------
void ofApp::draw(){

   ofSetColor(0);
    for (int i=0; i<20000; i++){
        ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 1);
    }
    
    ofSetColor(255);
    img.getPixel().draw(mouseX,mouseY);

    
    
    

    for (int i=0; i<img.getWidth(); i++){
        for (int j=0; j<img.getHeight(); j++){
            ofColor pixel = img.getColor(i,j);
            pos.x = 0.7*i + 0.3*mouseX;
            pos.y = 0.7*j + 0.3*mouseY;

            ofDrawCircle(pos.x,pos.y, 1);
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
