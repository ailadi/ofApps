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
                temp.speed = ofRandom(0.7, 0.9);
                pixels.push_back(temp);
                //ofSetColor(hand.getColor(i,j));
                //ofCircle(100 + i*10, 100 + j*10, 5);
            }
        }
    }
    for (int i = man.getWidth(); i > 0 ; i-=1){
        for (int j = man.getHeight(); j > 0; j-=1){
            if (man.getColor(i,j).a > 127){
                pixel face;
                face.color = man.getColor(i,j);
                face.pos = ofPoint(i,j);
                face.orig = ofPoint(i,j);
                face.speed = ofRandom(0.11, 0.3);
                facePix.push_back(face);
                //ofSetColor(face.getColor(i,j));
                //ofCircle(100 + i*10, 100 + j*10, 5);
            }
        }
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){

  
    for (int i = 0; i < facePix.size(); i++){
        //face controlled by mouse
        facePix[i].pos.x = (mouseX-man.getWidth()/2) + facePix[i].orig.x;
        facePix[i].pos.y = (mouseY-man.getHeight()/2) + facePix[i].orig.y;
        
    }
    
    
    for (int i = 0; i < pixels.size(); i++){
        //face controlled by mouse
        pixels[i].pos.x = 800 + pixels[i].orig.x;
        
        
    }
    
    for (int i = 0; i < facePix.size(); i++) {
        ofVec3f distance = pixels[i].pos - facePix[i].pos;
        
        if (distance.x < 100){
            
            //if distance <300 screen pixel travelling to face
            pixels[i].pos.x = (pixels[i].speed) * pixels[i].pos.x +  (1-pixels[i].speed) * (facePix[i].pos.x);
            pixels[i].pos.y = (pixels[i].speed) * pixels[i].pos.y +  (1-pixels[i].speed) * (facePix[i].pos.y);
            
//            //if distance <300 face pixel travelling to screen
//            facePix[i].pos.x = facePix[i].speed * facePix[i].pos.x +  (1-facePix[i].speed) * (pixels[i].pos.x + facePix[i].orig.x);
//            facePix[i].pos.y = facePix[i].speed * facePix[i].pos.y +  (1-facePix[i].speed) * (pixels[i].pos.y + facePix[i].orig.y);
            
            
            
        }
    }
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    phone.draw(800,0);
    
    //man.draw(mouseX-man.getWidth()/2,mouseY-man.getHeight()/2);
    
    for (int i = 0; i < facePix.size(); i++){
        ofSetColor(facePix[i].color);
        ofDrawCircle(facePix[i].pos.x, facePix[i].pos.y, 1);
    }
    
    for (int i = 0; i < pixels.size(); i++){
        ofSetColor(pixels[i].color);
        ofDrawCircle(pixels[i].pos.x, pixels[i].pos.y, 1);
    }
    
    
    //screen.draw(0,0);
    
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
