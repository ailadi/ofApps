#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    xVel=5*sin(ofGetElapsedTimef());
    yVel=5*sin(ofGetElapsedTimef());

    
}

//--------------------------------------------------------------
void ofApp::update(){

    
        x=x*0.9+mouseX*0.1;
        y=y*0.9+mouseY*0.1;
    
        //x=x+xVel;
       // y=y+yVel;
    

    if(x+size>ofGetWidth()  || x<0){
        xVel=xVel*-1;
    }
    if(y+size>ofGetHeight()|| y-size<0){
        yVel=yVel*-1;
    }
    
}

void ofApp::dude(float x, float y, float length, float radian, float size){
    ofDrawLine(x, y, x-(length*sin(radian)), y+(length*cos(radian)));
    ofDrawLine(x+size, y, x+size+(length*sin(radian)), y+(length*cos(radian)));
    ofDrawRectangle(x, y-size, size, 2*size);
    ofSetColor(255);
    ofDrawRectangle(x+size*0.2,y-size*0.4, 3,3);
    ofDrawRectangle(x+size*0.64,y-size*0.4, 3,3);
    ofSetColor(0);
    
}



//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(0);
    dude(x,y,15, abs(sin(ofGetElapsedTimef()*10)),size);
    
    //cout << "time "<< ofGetElapsedTimef() << endl;
    //cout << "sin(t) "<< sin(ofGetElapsedTimef()) << endl;
    
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
