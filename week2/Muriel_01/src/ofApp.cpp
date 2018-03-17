#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    ABZ.loadFont("HelveticaNeueMed.ttf");
    
    img.allocate(200, 200, OF_IMAGE_COLOR);
    ABZ.drawCharacterIntoImage(img, 'Z');
    soundStream.printDeviceList();
    ofBackground(0);
    int bufferSize = 256;
    
    left.assign(bufferSize, 0.0);
    right.assign(bufferSize, 0.0);
    
    bufferCounter = 0;
    drawCounter = 0;
    smoothedVol = 0.0;
    scaledVol= 0.0;
    
    soundStream.setup(this, 0, 2, 44100, bufferSize, 4);
   
    
}

//--------------------------------------------------------------
void ofApp::update(){
    scaledVol = ofMap(smoothedVol, 0.0, 0.17, 0.0, 1.0, true);
}


//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);
    
    ofSetColor(255);
    ofSetLineWidth(0.1);
    
    for (int i=0; i<ofGetHeight(); i= i+50){
        for (int j=0; j<ofGetWidth(); j= j+50){
            ofDrawLine(0, i, ofGetWidth(), i);
            ofDrawLine(j, 0, j, ofGetHeight());
        }
    }
    
    
    ofDrawCircle(200, 200, scaledVol*100);
    
    //img.draw(0,0);
   
    ofSeedRandom(mouseX);
    for (int i = 0; i < 1000; i++){
        ofPoint pt( ofRandom(0,200), ofRandom(0,200));
        ofColor pixel = img.getColor(pt.x, pt.y);
        float brightness = pixel.getBrightness();
        float radius = ofRandom(3, 35);
        if (brightness > 0){
            
            for (int g=0; g<ofGetWidth(); g= g+50){
                for (int j=0; j<ofGetHeight(); j= j+50){
                    
                    if (g < pt.x*4 || g ???????){
                    ofDrawCircle(g, j, 10);
                    }
                }
            }
//            ofFill();
//            ofSetColor(0);
//            ofDrawCircle(pt.x * 3, pt.y * 3, radius);
//            ofNoFill();
//            ofSetColor(255);
//            ofDrawCircle(pt.x * 3, pt.y * 3, radius);
            
        }
    }
    
}

void ofApp::audioIn(float * input, int bufferSize, int nChannels){
    
    float curVol = 0.0;
    int numCounted = 0;
    
    for (int i = 0; i < bufferSize; i++){
        left[i] = input[i*2]*0.5;
        right[i] = input[i*2+1]*0.5;
        
        curVol += left[i] * left[i];
        curVol += right[i] * right[i];
        numCounted+=2;
    }
    
    curVol /= (float)numCounted;
    curVol = sqrt( curVol );
    
    smoothedVol *= 0.93;
    smoothedVol += 0.07 * curVol;
    
    bufferCounter++;
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
