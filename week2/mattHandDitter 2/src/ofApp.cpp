#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    img.load("hand.png");
    
}

//--------------------------------------------------------------
void ofApp::update(){

    if (points.size() > 20) {
        points.erase(points.begin());
    }
    
    points.push_back(ofPoint(mouseX, mouseY));
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for (int i = 0; i < img.getWidth(); i++) {
        for (int j = 0; j < img.getHeight(); j++) {
            ofPolyline l;
//            int length = points.size() * ofNoise(i / 100., j / 100.);
//            int length = points.size();
            for (int k = 0; k < points.size(); k++) {
                // mouse position
                ofPoint p = points[k];
                // draw the whole pixel positions
                p += ofPoint(i, j, k);
                // shift cursor position to center of image
                p -= ofPoint(img.getWidth() / 2, img.getHeight() / 2);
                //erase the mouse position, draw only back top origin corner
                p -= points[k];
                // scale
                p *= ofMap(k, 0, points.size(), 10, 1);
//                p *= ofNoise(i / 100., k / 100., ofGetElapsedTimef());
                //reposition
                p += points[k];
                l.addVertex(p);
//                ofSetColor(img.getColor(i, j));
//                ofDrawCircle(p.x, p.y, 1);
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
