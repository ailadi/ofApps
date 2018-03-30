#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(0);
    originalImg.load("cuteCat.jpg");
    originalImg.setImageType(OF_IMAGE_COLOR);
    
    for (int i=0; i<9; i++){
        img[i].load(to_string(i)+".png");
        img[i].setImageType(OF_IMAGE_COLOR_ALPHA);
    }
 
    fbo.begin();
    originalImg.draw(0,originalImg.getHeight());
    fbo.end();
    
}

//--------------------------------------------------------------
void ofApp::update(){
 

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
  
    int avgBox = 5;
    for (int i=0; i<originalImg.getWidth(); i+=10){
        for (int j=0; j<originalImg.getHeight(); j+=10){
            for (int a= - avgBox; a <= avgBox; a++){
                for (int b= - avgBox; b <= avgBox; b++){
                 ofColor pixel = originalImg.getColor(i+a, j+b);
                }
            }
            
            
            float brightness = pixel.getBrightness();
            int radius = ofMap(brightness, 0,255, 1,9);
            ofSetColor(255);
            //ofDrawCircle(i, j, radius);
            img[radius].draw(i,j);
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
