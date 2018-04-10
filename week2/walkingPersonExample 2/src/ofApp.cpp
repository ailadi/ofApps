#include "ofApp.h"
#include "data.h"

//--------------------------------------------------------------
void ofApp::setup(){


    ofSetVerticalSync(true);
    ofBackground(255);
    
    midiIn.listPorts(); // via instance
    midiIn.openPort(0);
    midiIn.ignoreTypes(false, false, false);
    midiIn.addListener(this);
    midiIn.setVerbose(true);
    
    value = 0;
    ofSetCircleResolution(80);
    midiControl.resize(71);
    
    

    // the data is stored in a big flat array, let's copy it into something more managable
    // don't have to touch this :)
    
    for (int i = 0; i < 30; i++){
        for (int j = 0; j < 24; j++){
            float x = data3d[ i * 24 * 3  + j * 3 + 0 ];
            float y = data3d[ i * 24 * 3  + j * 3 + 1 ];
            float z = data3d[ i * 24 * 3  + j * 3 + 2 ];
            frames[i][j].set(x,y,z);
        }
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = 0; i < 71; i++){
        if(midiMessage.control == i){
            midiControl[i] = midiMessage.value;
        }
    }
}


//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    // you don't have to touch this either:) ----- copy data into array
    ofPoint data3d[24];
    int frameNumber =(int)(ofGetFrameNum()*0.4) % 30;
    for (int i = 0; i < 24; i++){
        data3d[i] = frames[ frameNumber][i];
    } // end do not touch
    
    
    cam.begin();
    cam.enableOrtho();
    ofSetColor(255);

    float time = ofGetElapsedTimef();
    
    ofMesh mesh;
//    OF_PRIMITIVE_TRIANGLE_STRIP,
//    OF_PRIMITIVE_TRIANGLE_FAN,
//    OF_PRIMITIVE_LINE_LOOP,
    mesh.setMode(OF_PRIMITIVE_TRIANGLE_STRIP);
    
        mesh.addVertex( data3d[12]);
        mesh.addVertex( data3d[13]);
        mesh.addVertex( data3d[14]);
        mesh.addVertex( data3d[15]);
        mesh.addVertex( data3d[21]);
        mesh.addVertex( data3d[22]);
        mesh.addVertex( data3d[23]);
        mesh.addVertex( data3d[19]);
        mesh.addVertex( data3d[18]);
        mesh.addVertex( data3d[17]);
        mesh.addVertex( data3d[7]);
        mesh.addVertex( data3d[6]);
        mesh.addVertex( data3d[5]);
        mesh.addVertex( data3d[4]);
        mesh.addVertex( data3d[3]);
        
        mesh.addColor(ofColor::pink);
        mesh.addColor(ofColor::cyan);
        mesh.addColor(ofColor::pink);
        mesh.addColor(ofColor::cyan);
        mesh.addColor(ofColor::pink);
        mesh.addColor(ofColor::cyan);
        mesh.addColor(ofColor::pink);
        mesh.addColor(ofColor::cyan);
        mesh.addColor(ofColor::pink);
        mesh.addColor(ofColor::cyan);
        mesh.addColor(ofColor::pink);
        mesh.addColor(ofColor::cyan);
        mesh.addColor(ofColor::pink);
        mesh.addColor(ofColor::cyan);
        mesh.addColor(ofColor::pink);

    
        //ofDrawLine(data3d[i], data3d[0]);
        //ofDrawSphere(data3d[i], mouseX/20.0);
        
//        float x = data3d[i].x;
//        float y = data3d[i].y;
//        float z = data3d[i].z;
//        z += ofSignedNoise(x*0.01, y*0.01, time) * ofMap(sin(time), -1, 1, 0, 400);
//
//        ofDrawSphere(ofPoint(x,y,z), 5);
        
        //ofDrawBitmapString(ofToString(i), data3d[i]);
        
  
    ofDrawSphere(data3d[10], midiControl[0]);
    //ofCircle(data3d[18], 10);

    mesh.draw();
    cam.end();
    
    
}
void ofApp::exit() {
    
    // clean up
    midiIn.closePort();
    midiIn.removeListener(this);
}

//--------------------------------------------------------------
void ofApp::newMidiMessage(ofxMidiMessage& msg) {
    
    // make a copy of the latest message
    midiMessage = msg;
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
