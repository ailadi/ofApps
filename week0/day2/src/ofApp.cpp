#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    x=0;
//    y=0;
////    h=.866*ofGetHeight();
//    h=ofGetHeight();
//    w=ofGetHeight();
}

//--------------------------------------------------------------
void ofApp::update(){

}


void ofApp::triangoli(float x, float y, float w, float h){
    if(w > ofGetHeight()/4 || (w > 5 && ofRandom(0,100) > 10) ){
        triangoli(x, y, w/2, h/2);
        triangoli(x-0.288*w, y+h/2, w/2, h/2);
        triangoli(x+0.288*w, y+h/2, w/2, h/2);
    } else {
        ofSetColor(ofRandom(0,255), ofRandom(0,255), ofRandom(0,255));
       ofDrawTriangle(x,y,x-w*0.57735, y+h, x+w*0.57735,y+h);
    }
}

/*void ofApp::triangoli(float x, float y, float w, float h){
    if(w > 5 && ofRandom(0,100) > 10 ){
        triangoli(x, y, w/2, h/2);
        triangoli(x-0.288*w, y+h/2, w/2, h/2);
        triangoli(x+0.288*w, y+h/2, w/2, h/2);
    } else if(w > ofGetHeight()/16 ){
        ofNoFill();
        ofSetColor(ofRandom(0,255), ofRandom(0,255), ofRandom(0,255));
        ofDrawTriangle(x,y,x-w*0.57735, y+h, x+w*0.57735,y+h);
        ofFill();
    }else {
        ofSetColor(ofRandom(0,255), ofRandom(0,255), ofRandom(0,255));
        ofDrawTriangle(x,y,x-w*0.57735, y+h, x+w*0.57735,y+h);
    }
}*/

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    ofSeedRandom(mouseX * 1000);

    triangoli(ofGetWidth()/2, 0, ofGetHeight(), ofGetHeight());
    
    /*
    // SQUARE IN SQUARE FLATING GREYS
    ofSeedRandom(mouseX*1000);
    float color = ofMap (sin(ofGetElapsedTimef()), -1, +1, 0,255);
    float color2 = ofMap (sin(ofGetElapsedTimef()/10), -1, +1, 0,255);
    float color3 = ofMap (sin(ofGetElapsedTimef()+.7), -1, +1, 0,255);
    float size = ofMap(mouseX, 0, ofGetHeight(), 5, 400);
    float sizeB = ofRandom(0,size);
    ofBackground(color2);
    ofSetColor(color);
    ofDrawRectangle(ofGetWidth()/2-size/2, ofGetHeight()/2-size/2, size,size );
    ofSetColor(color3);
    ofDrawRectangle(ofGetWidth()/2-sizeB/2, ofGetHeight()/2-sizeB/2, sizeB,sizeB );
    */
    
    
    
    
    
    
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
