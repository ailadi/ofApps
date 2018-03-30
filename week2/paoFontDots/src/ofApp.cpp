#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    font.load("HelveticaNeueMed.ttf", 600, true, true, true);
    letter = font.getStringAsPoints("HI"); // detect how many letter I have
    cout << letter.size() << endl;

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    //ofTranslate (ofGetWidth()/4,  ofGetHeight()*3/4);
    
    ofPoint center;
    center.x = 100;
    center.y = 650;
    
    ofSetColor(255);
    
    float space = 30;
    float maxWidth = ofGetWidth()/space;
    float maxHeight= ofGetHeight()/space;
    
    for(int x=0; x<maxWidth; x++){
        for(int y=0; y<maxHeight; y++){
            points.push_back(ofPoint(x*space, y*space));
            
           // cout << p << endl;
            ofSetLineWidth(0.1);
            ofDrawLine(x*space, 0, x*space, ofGetHeight());
            ofDrawLine(0, y*space, ofGetWidth(), y*space);
    
        }
        
    }
    
//    for(int a=0; a<ofGetWidth(); a+= 30){
//        for(int b=0; b<ofGetHeight(); b+= 30){
//         //   points.add(ofPoint(a, b));
//           // cout << b << endl;
//            //points[b] = ofPoint(a, b);
//
//            ofSetLineWidth(0.1);
//            ofDrawLine(a, 0, a, ofGetHeight());
//            ofDrawLine(0, b, ofGetWidth(), b);
//
//            count++;
//            cout << count << endl;
//        }
//    }
//
    
    
    
    
    for(int i=0; i<letter.size(); i++){
        vector <ofPolyline> lines = letter[i].getOutline();
        
        for(int j=0; j < lines.size(); j++){
            ofPolyline line = lines[j].getResampledBySpacing(7);
            
            for(int k=0; k < line.size(); k++){
                ofPoint pt = line[k];
                dots.push_back(pt);
                ofDrawCircle(center.x + pt.x, center.y + pt.y, 2);
                
            }
        }
    }
    
    
    for(int a=0; a<points.size(); a++){
        for(int b=0; b<dots.size(); b++){
            ofVec3f distance = points[a] - dots[b];
            float d = distance.length();
            
       
            //cout << d << endl;
            
            if(d < 5){
                ofSetColor(255, 0, 0);
                ofDrawCircle(center.x +dots[b].x, center.y + dots[b].y, 2);
            }
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
