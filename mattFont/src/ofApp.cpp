#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    font.load("Helvetica.ttc", 300, true, true, true);
    fbo.allocate(ofGetWidth(), ofGetHeight());
    
    string str = "YES!";
    ofRectangle bb = font.getStringBoundingBox(str, 0, 0);
    cout << bb.getHeight() << endl;

    fbo.begin();
    font.drawString(str, ofGetWidth()/2-bb.getWidth()/2 -bb.x, ofGetHeight()/2+bb.getHeight()/2 );
    fbo.end();
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    
    int countXBoxes = 50;
    int countYBoxes = 50;
    float boxW = float(ofGetWidth())/float(countXBoxes);
    float boxH = float(ofGetHeight())/float(countYBoxes);
//    cout << boxW << endl;
    for (int i=0; i<countXBoxes; i++){
        for (int j=0; j<countYBoxes; j++){
            ofNoFill();
            ofDrawRectangle(i*boxW, j*boxH, boxW, boxH);
            ofFill();
            
            ofPixels pix;
            // download the information out of the gfx card and load them into the pix parameter
            // it doesn't take pix as input but it's the element on which it acts
            // fake meaning pix = fbo.getTexture().readToPixels();
            
            fbo.getTexture().readToPixels(pix);
            
            int boxSize = mouseX*0.01;
            int r = 0;
            int g = 0;
            int b = 0;
            for (int x = -boxSize; x <= boxSize; x++) {
                for (int y = -boxSize; y <= boxSize; y++) {
                    // all the colors of the square of pixel around the specific pixel in each i*boxW , j*boxH
                    ofColor c = pix.getColor(i*boxW + x, j*boxH + y);
                    r += c.r;
                    g += c.g;
                    b += c.b;
                }
            }
            ofColor avg = ofColor(r / pow(2*boxSize+1, 2), g / pow(2*boxSize+1, 2), b / pow(2*boxSize+1, 2));
            float diameter = ofMap(avg.getBrightness(), 0, 255, 0, 10);
            
            if (i != 0 && j != 0){
              ofDrawCircle(i*boxW, j*boxH, diameter);
            }
         
    }
        //fbo.draw(0,0);

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
