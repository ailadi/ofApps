#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(200,200,255);
    //ofSetBackgroundAuto(false);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    
    
    float t= ofGetElapsedTimef();
    
    float amplitude=300;
    
    float k=ofMap(sin(t/10), -1, 1, 0, 3);
    k=10;
    
    center.x = 400;
    center.y = 400;
 
    ofSetColor(255,255,0);
    for (int i=0; i<100; i++){
        float theta=ofMap(sin(t/40), -1, 1, 0, 1);
        
        pt.x = center.x + cos(k*theta*i)*cos(theta*i)*amplitude;
        pt.y = center.y + cos(k*theta*i)*sin(theta*i)*amplitude;
        ofSetColor(255,255,0);
        ofDrawCircle(pt, 10);
        
        
    }
//    //draw line
//    line.addVertex(pt.x, pt.y);
//    if(line.size() > 1000){
//        line.getVertices().erase(line.getVertices().begin());
//    }
//    line.draw();
//
    

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
