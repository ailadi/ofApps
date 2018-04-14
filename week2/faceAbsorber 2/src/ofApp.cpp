#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0);
    phone.load("phone.png");
    screen.load("screen.png");
    man.load("man.png");
    for (int i = 0; i < screen.getWidth(); i++){
        for (int j = 0; j < screen.getHeight(); j++){
            if (screen.getColor(i,j).a > 127){
                pixel temp;
                temp.color = screen.getColor(i,j);
                temp.pos = ofPoint(i,j);
                temp.orig = ofPoint(i,j);
                temp.speed = ofRandom(0.7, 0.99);
                pixels.push_back(temp);
                //ofSetColor(hand.getColor(i,j));
                //ofCircle(100 + i*10, 100 + j*10, 5);
            }
        }
    }
    for (int i = 0; i < man.getWidth(); i++){
        for (int j = 0; j < man.getHeight(); j++){
            if (man.getColor(i,j).a > 127){
                pixel face;
                face.color = man.getColor(i,j);
                face.pos = ofPoint(i,j);
                face.orig = ofPoint(i,j);
                face.speed = ofRandom(0.7, 0.99);
                facePix.push_back(face);
                //ofSetColor(face.getColor(i,j));
                //ofCircle(100 + i*10, 100 + j*10, 5);
            }
        }
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){

    for (int i = 0; i < pixels.size(); i++){
        float distance = (pixels[i].pos - ofPoint(mouseX, mouseY)).length();
        if (distance < 100){
            pixels[i].pos.x = pixels[i].speed * pixels[i].pos.x +  (1-pixels[i].speed) * (mouseX + pixels[i].orig.x);
            pixels[i].pos.y = pixels[i].speed * pixels[i].pos.y +  (1-pixels[i].speed) * (mouseY + pixels[i].orig.y);
        }
    }
    
    for (int i = 0; i < facePix.size(); i++){
        float distance = (facePix[i].pos - ofPoint(mouseX, mouseY)).length();
        
            facePix[i].pos.x = facePix[i].speed * facePix[i].pos.x +  (1-facePix[i].speed) * (mouseX + facePix[i].orig.x);
            facePix[i].pos.y = facePix[i].speed * facePix[i].pos.y +  (1-facePix[i].speed) * (mouseY + facePix[i].orig.y);
        
    }
    
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    phone.draw(0,0);
    screen.draw(0,0);
    man.draw(mouseX-man.getWidth()/2,mouseY-man.getHeight()/2);
    
    for (int i = 0; i < pixels.size(); i++){
        ofSetColor(pixels[i].color);
        ofDrawCircle(pixels[i].pos.x, pixels[i].pos.y, 1);
    }
    
    for (int i = 0; i < facePix.size(); i++){
        ofSetColor(facePix[i].color);
        ofDrawCircle(facePix[i].pos.x, facePix[i].pos.y, 1);
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
