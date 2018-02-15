#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    for (int i=0; i<360; i++){
        h[i]=i;//ofRandom(0, 200);
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}


void ofApp::tratti(float x, float y, float h, float rotation){
     //ofSetLineWidth(ofRandom(1, 10));
    ofPushMatrix();
    ofTranslate(x, y);
    ofRotate(rotation);
    ofDrawLine(0, -h*0.5, 0, h*0.5);
    ofPopMatrix();
}
//--------------------------------------------------------------
void ofApp::draw(){
    
    /*
    //MESS OF MANY LINES
    ofBackground(0);
    ofSetColor(255);
    float time = ofGetElapsedTimef();
    for (int i=0; i<500; i++ ){
        ofSetColor( 127 + 127 * sin(i*0.03+time), 127 + 127 * sin(i*0.01+time), 127 + 127 * sin(i*0.04+time));
        ofDrawLine(400+400*sin(time + i), ofGetHeight()*0.5+sin(time)*300, ofGetWidth(), i+sin(time+i)*300);
    }*/
  
    /*
    //SINUS FLOW OF COLORED LINES
    ofBackground(0);
    float time = ofGetElapsedTimef();
        for (int i=0; i<1600; i++){
            ofSetColor(127+127*sin(time+i), 127+127*sin(time*0.5), 127+127*sin(time+i*0.1));
            tratti(i*mouseX*0.1, 400+400*sin(time+i*0.05), 10);
        } */
    
    ofBackground(0);
    ofSetColor(255);

    //float time = ofGetElapsedTimef();
//    for (int i=0; i<360; i+=20){
//        for (int j=0; j<360; j++){
//            tratti(i, 200, 20, h[i]);
//        }
//    }
    
    
    
    //ARMONIC MOTION RANDOMLY HAPPENING :-)
    float time = ofGetElapsedTimef();
    for (int i=0; i<1200; i+=20){
        for (int j=0; j<800; j+=20){
        tratti(i, j, 20, h[i%360]*time*0.1+ofRandom(10));
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
