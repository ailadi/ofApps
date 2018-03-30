#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    img.load("hand.png");
    
}

//--------------------------------------------------------------
void ofApp::update(){

    if (points.size() > 30) {
        points.erase(points.begin());
    }
    
    points.push_back(ofPoint(mouseX, mouseY));
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for (int i = 0; i < img.getWidth(); i++) {
        for (int j = 0; j < img.getHeight(); j++) {
            ofPolyline l;
            for (int k = 0; k < points.size(); k++) {
                ofPoint p = points[k];
                p += ofPoint(i, j, k);
                l.addVertex(p);
            }
            ofSetColor(img.getColor(i, j));
            l.draw();
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
