#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    
    ofBackground(255);
    wheel.load("wheel.png");
    
    for (int x=0; x<wheel.getWidth(); x++){
        for (int y=0; y<wheel.getHeight(); y++){
            if(wheel.getColor(x,y).a > 127){
                
                pixel temp;
                temp.pos = ofPoint (x,y);
                temp.orig = ofPoint (x,y);
                temp.color = wheel.getColor(x,y);
                temp.speed = ofRandom(0.5,0.99);
                pixels.push_back(temp);
            
            }
        }
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    
    for (int i=0; i< pixels.size(); i++){
        
        float distance = (pixels[i].pos - ofPoint(mouseX, mouseY)).length();
        if (distance < 500){
            float t = ofGetElapsedTimef();
            pixels[i].pos.x = pixels[i].pos.x*pixels[i].speed
            + (mouseX-wheel.getWidth()/2*sin(t) + pixels[i].orig.x*sin(t))*(1-pixels[i].speed);
            pixels[i].pos.y = pixels[i].pos.y*pixels[i].speed
            + (mouseY-wheel.getHeight()/2*cos(t) + pixels[i].orig.y*cos(t))*(1-pixels[i].speed);
        } else {
            pixels[i].pos.x = -100;
            pixels[i].pos.y = -100;
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    for (int i=0; i<pixels.size(); i++){
        ofSetColor(pixels[i].color);
        ofDrawCircle(pixels[i].pos.x, pixels[i].pos.y, 1);
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
