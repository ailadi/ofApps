#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    cam.initGrabber(640, 480);
    tracker.setup();

}

//--------------------------------------------------------------
void ofApp::update(){
    cam.update();
    if(cam.isFrameNew()) {
        tracker.update(ofxCv::toCv(cam));
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    cam.draw(0, 0);
    ofDrawBitmapString(ofToString((int) ofGetFrameRate()), 10, 20);
    
    if(tracker.getFound()) {
        //        tracker.draw();
        ofPolyline mouth = tracker.getImageFeature(ofxFaceTracker::FACE_OUTLINE);
        ofRectangle mouthBB = mouth.getBoundingBox();
        mouthBB.scaleFromCenter(1.5);
        ofPixels mouthPixels = cam.getPixels();
        mouthPixels.crop(mouthBB.x, mouthBB.y, mouthBB.width, mouthBB.height);
        ofImage mouthImage;
        mouthImage.setFromPixels(mouthPixels);
        
        //        mouthPixels.draw(0, 0);
        //        mouth.draw();
        
        ofPolyline eye = tracker.getImageFeature(ofxFaceTracker::LEFT_EYE);
        ofRectangle eyeBox = eye.getBoundingBox();
        ofPoint eyeCenter = eyeBox.getCenter();
        
        mouthImage.draw(eyeCenter.x - mouthImage.getWidth() / 2, eyeCenter.y - mouthImage.getHeight() / 2);
        
        
        
        
        
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
