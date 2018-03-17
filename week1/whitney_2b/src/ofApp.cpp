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
    
    for (int i=1; i<10; i+=1){
    ofPoint pt;
    float t = ofGetElapsedTimef()/2;
    
    //parameters

    //float A = 300; // horizontal Amplitude
    //float B = 300; // vertical Amplitude
    
    float a = 42; // horizontal Frequency
    float b = 55; // vertical Frequency
    
    //float phaseDelta = ofMap(sin(t*4), -1,1,0,1);
    float phase = TWO_PI/4;
   
    //center of my gfx
    center.x = 400;
    center.y = 400;
    


    //draw
    ofSetColor(255);
        for (int i=0; i<100; i++){
            float A = 300; //ofMap(sin(t*4), -1,1, 0, 400); // horizontal Amplitude
            float B = 300; //ofMap(sin(t*4), -1,1, 0, 400); // vertical Amplitude
            pt.x = center.x + A*sin(a*t*i/80 + phase);
            pt.y = center.y + B*sin(b*t*i/80);
            ofDrawCircle(pt.x+i, pt.y+i, 1);
        }
    
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
