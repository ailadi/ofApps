#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(255);
    for (int i = 0; i < 1000; i++){
        
        dudes[i].x = ofRandom(100,1000);
        dudes[i].y = ofRandom(100,1000);
        dudes[i].xVel = ofRandom(-5,5)*sin(ofGetElapsedTimef());
        dudes[i].yVel = ofRandom(-5,5)*sin(ofGetElapsedTimef());
    

        dudes[i].size=10;
        dudes[i].length=15;
        

}
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for (int i = 0; i < 1000; i++){
       
        dudes[i].x = dudes[i].x + dudes[i].xVel;
        dudes[i].y = dudes[i].y + dudes[i].yVel;
        dudes[i].radian=abs(sin(ofGetElapsedTimef()*10));
        
        if(dudes[i].x+dudes[i].size>ofGetWidth()  || dudes[i].x<0){
            dudes[i].xVel*=-1;
        }
        if(dudes[i].y+dudes[i].size>ofGetHeight()|| dudes[i].y-dudes[i].size<0){
            dudes[i].yVel*=-1;
        }
        
    }
    
    
   
//

    for (int i = 0; i < 1000; i++){
        
        ofSetColor(0);
        ofDrawLine(dudes[i].x, dudes[i].y, dudes[i].x-(dudes[i].length*sin(dudes[i].radian)), dudes[i].y+(dudes[i].length*cos(dudes[i].radian)));
        ofDrawLine(dudes[i].x+dudes[i].size, dudes[i].y, dudes[i].x+dudes[i].size+(dudes[i].length*sin(dudes[i].radian)), dudes[i].y+(dudes[i].length*cos(dudes[i].radian)));
        ofDrawRectangle(dudes[i].x, dudes[i].y-dudes[i].size, dudes[i].size, 2*dudes[i].size);
        ofSetColor(255);
        ofDrawRectangle(dudes[i].x+dudes[i].size*0.2,dudes[i].y-dudes[i].size*0.4, 3,3);
        ofDrawRectangle(dudes[i].x+dudes[i].size*0.64,dudes[i].y-dudes[i].size*0.4, 3,3);
        ofSetColor(0);
    }
    

    
    
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

