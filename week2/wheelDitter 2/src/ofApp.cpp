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
                temp.orig = ofPoint (x-wheel.getWidth()/2,y-wheel.getHeight()/2);
                temp.color = wheel.getColor(x,y);
                temp.magnetism = ofRandom(0.5,0.99);
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
            
            float magnetism = pixels[i].magnetism;
            
            ofPoint original = pixels[i].orig;
            float distance = ofDist(0, 0, original.x, original.y);
            float angle = atan2(original.y, original.x);
            angle = angle + t;
            
            ofPoint newOrig;
            newOrig.x = 0 + distance*cos(angle);
            newOrig.y = 0 + distance*sin(angle);
            
        
            float currPosX = pixels[i].pos.x;
            float newPosX = mouseX + newOrig.x;
            
            pixels[i].pos.x = currPosX * magnetism + newPosX * (1-magnetism);
            
            float currPosY = pixels[i].pos.y;
            float newPosY = mouseY + newOrig.y;
            
            pixels[i].pos.y = currPosY * magnetism + newPosY * (1-magnetism);
            

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
        //ofDrawCircle(-pixels[i].orig.x + pixels[i].pos.x, -pixels[i].orig.y + pixels[i].pos.y, 1);
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
