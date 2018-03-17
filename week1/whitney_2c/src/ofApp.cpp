#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0);
}

//--------------------------------------------------------------
void ofApp::update(){

}



//--------------------------------------------------------------
void ofApp::draw(){
    
    for (int i=1; i<1000; i+=1){
    ofPoint pt;
        ofPoint pt2;
    float t = ofGetElapsedTimef()/2;
    
    //parameters
        //float A = ofMap(sin(t*4), -1,1, 0, 400); // horizontal Amplitude
        //float B = ofMap(sin(t*4), -1,1, 0, 400); // vertical Amplitude
    float A = 300; // horizontal Amplitude
    float B = 300; // vertical Amplitude
    
    float a = 42; // horizontal Frequency
    float b = 55; // vertical Frequency
    
    //float phaseDelta = ofMap(sin(t*4), -1,1,0,1);
    float phase = TWO_PI/4;
   
    //center of my gfx
    center.x = 400;
    center.y = 400;
        
        float radius = ofMap(sin(t*20*ofRandom(3)), -1, 1, 20*ofRandom(5), 200+i);
        pt.x = center.x + A*sin(a*t*i/80 + phase);
        pt.y = center.y + B*sin(b*t*i/80);
        pt2.x = center.x + radius*sin(t*i/80 + phase);
        pt2.y = center.y + radius*sin(t*i/80);
        
    //draw
    ofSetColor(255);
       
        ofDrawCircle(pt, 1);
        ofDrawCircle(pt2, 1);
//        for (int i=0; i<100; i++){
//
//
//        }
    
    //draw line
//    line.addVertex(pt.x, pt.y);
//    if(line.size() > 1000){
//        line.getVertices().erase(line.getVertices().begin());
//    }
//    line.draw();
    
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
