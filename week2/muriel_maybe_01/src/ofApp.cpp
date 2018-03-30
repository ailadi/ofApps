#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    font.load("HelveticaNeueMed.ttf", 500, true, true, true);
    myImage.allocate(500,500, OF_IMAGE_GRAYSCALE);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    font.drawString("OH", 0,500);
    for(int i=0; i<500; i++){
        for (int j=0; j<500; j++){
            myImage.getColor(i,j);
            myImage.setColor(i,j, ofColor(ofRandom(0, 255)));
            myImage.getPixels();
        }
    }
    
    myImage.draw(0,0);
    myImage.update();
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
