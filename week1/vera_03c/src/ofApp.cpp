#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    carta.load("paper.jpg");
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

void ofApp::stripySquares(float x, float y, float w, float h, float divisions){
    
    int rnd1 = floor(ofRandom(10));
    for(int i=0; i<=divisions; i++){
        switch(rnd1){
            case 0:
                ofDrawLine(x, y+(h/divisions)*i, x+(w/divisions)*i, y);
                break;
            case 1:
                ofDrawLine(x+(w/divisions)*i, y+h, x+w, y+(h/divisions)*i);
                break;
            case 2:
            case 3:
            case 4:
                ofDrawLine(x, y+(h/divisions)*i, x+(w/divisions)*i, y);
                ofDrawLine(x+(w/divisions)*i, y+h, x+w, y+(h/divisions)*i);
                break;
            case 5:
                ofDrawLine(x, y+(h/divisions)*i, x+w-(w/divisions)*i, y+h);
                break;
            case 6 :
                ofDrawLine(x+(w/divisions)*i, y, x+w, y+h-(h/divisions)*i);
                break;
            default:
                ofDrawLine(x, y+(h/divisions)*i, x+w-(w/divisions)*i, y+h);
                ofDrawLine(x+(w/divisions)*i, y, x+w, y+h-(h/divisions)*i);
                break;
        }
    }
}

void ofApp::chooseStripySquares(float x, float y, float w, float h){
     int rnd2 = floor(ofRandom(3));
    //int divisions = 3+ofRandom(8);
    int divisions = floor(ofMap(mouseX*ofRandom(10), 0, ofGetWidth()*10, 3, 8));
    switch(rnd2){
        case 0:
            stripySquares(x, y, w, h, divisions);
            break;
        case 1:
            stripySquares(x, y, w, h/2, divisions);
            stripySquares(x, y+h/2, w, h/2, divisions);
            break;
        case 2:
            stripySquares(x, y+h/2, w, h/2, divisions);
            break;
        case 3:
            stripySquares(x, y, w, h/2, divisions);
            break;
        case 4:
            stripySquares(x+w/2, y, w/2, h, divisions);
            break;
        case 45:
            stripySquares(x, y, w/2, h, divisions);
            break;
        default:
            stripySquares(x, y, w/2, h, divisions);
            stripySquares(x+w/2, y, w/2, h, divisions);
            break;
    }
}


//--------------------------------------------------------------
void ofApp::draw(){
    ofSeedRandom(1000);
    //carta.draw(0,0,1000, 650);
    ofSetColor(0);
    ofSetLineWidth(0.8);
    for(int i=0; i<20; i++){
        for(int j=0; j<13; j++){
            chooseStripySquares(50*i, 50*j, 50, 50);
            if(ofRandom(5)>4){
            chooseStripySquares(50*i, 50*j, 50, 50);
            }
        }
    }
    ofSetColor(255);
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
