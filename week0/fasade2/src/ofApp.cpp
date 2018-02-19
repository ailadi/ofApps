#include "ofApp.h"
#include "block.h"

//--------------------------------------------------------------
void ofApp::setup(){
    for(int i = 0; i < facades.size(); i++){
      facades[i].setup();
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i = 0; i < facades.size(); i++){
   facades[i].draw();
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
    
    for(int i = 0; i < facades.size(); i++){
        facades[i].update();
    }
    facades.push_back( facade() );
   
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
