#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    tracker.setup();
    cam.initGrabber(640, 480);
    cam.setup(640,480);
    background.allocate(640,480, OF_IMAGE_COLOR);
    threshold.allocate(640,480, OF_IMAGE_COLOR);
    
    phone.load("phone.png");
    screen.load("screen.png");
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
}

//--------------------------------------------------------------
void ofApp::update(){
    cam.update();
    if(cam.isFrameNew()) {
        tracker.update(ofxCv::toCv(cam));
    }
    
    
    if (bSnapshot){
        
        background.setFromPixels(cam.getPixels());
        background.update();
        
        bSnapshot = false;
    }
    
    for (int x = 0; x < 640; x++){
        for (int y = 0; y < 480; y++){
            // let's compare
            // pixel xy in video
            // vs pixel xy in background
            // and if abs(diff) > ...
            // do something.
            int camBrightness = cam.getPixels().getColor(x,y).getBrightness();
            int backgroundBrightness = background.getColor(x,y).getBrightness();
            
            int diff = abs(camBrightness - backgroundBrightness);
            
            //threshold.setColor(x,y,ofColor(diff));
            if (diff > mouseX){
                threshold.setColor(x,y,ofColor(255));
            } else {
                threshold.setColor(x,y,ofColor(0));
            }
        }
    }
    threshold.update();
    
    for (int i = 0; i < pixels.size(); i++){
        
        float distance = (pixels[i].pos - ofPoint(mouseX, mouseY)).length();
        
        if (distance < 100){
            pixels[i].pos.x = pixels[i].speed * pixels[i].pos.x +  (1-pixels[i].speed) * (mouseX + pixels[i].orig.x);
            pixels[i].pos.y = pixels[i].speed * pixels[i].pos.y +  (1-pixels[i].speed) * (mouseY + pixels[i].orig.y);
            
        }
        
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofDrawBitmapString(ofToString((int) ofGetFrameRate()), 10, 20);
    
    if(tracker.getFound()) {
        //        tracker.draw();
        ofPolyline face = tracker.getImageFeature(ofxFaceTracker::LEFT_EYE);
        ofRectangle faceBB = face.getBoundingBox();
        //mouthBB.scaleFromCenter(1.5);
        ofPixels facePixels = cam.getPixels();
        ofImage faceImage;
        faceImage.setFromPixels(facePixels);
        
        //        mouthPixels.draw(0, 0);
        //        mouth.draw();
        
        //get face
        ofPolyline eye = tracker.getImageFeature(ofxFaceTracker::LEFT_EYE);
        ofRectangle eyeBox = eye.getBoundingBox();
        //ofPoint eyeCenter = eyeBox.getCenter();
        
        
        facePixels.crop(faceBB.x, faceBB.y, faceBB.width, faceBB.height-(eyeBox.y+eyeBox.height/2));
        faceImage.draw(faceBB.x, faceBB.y);
        
        
        //mouthImage.draw(eyeCenter.x - mouthImage.getWidth() / 2, eyeCenter.y - mouthImage.getHeight() / 2);
        
        
        
        
        
        
        
    }

    cam.draw(0,0);
    background.draw(640,0);
    threshold.draw(0,480);
    
    phone.draw(0,0);
    
    for (int i = 0; i < pixels.size(); i++){
        ofSetColor(pixels[i].color);
        ofDrawCircle(pixels[i].pos.x, pixels[i].pos.y, 1);
    }
    
    //screen.draw(0,0);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == ' '){
        bSnapshot = true;
    }
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
