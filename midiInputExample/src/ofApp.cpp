#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofSetVerticalSync(true);
	ofBackground(255);
	
	midiIn.listPorts(); // via instance
	midiIn.openPort(0);
	midiIn.ignoreTypes(false, false, false);
	midiIn.addListener(this);
	midiIn.setVerbose(true);
    
    value = 0;
    ofSetCircleResolution(80);
    
    dataControl.resize(71);
}

//--------------------------------------------------------------
void ofApp::update() {
    for(int i = 0; i < 71; i++){
        if(midiMessage.control == i){
            dataControl[i] = midiMessage.value;
        }
    }
    
}

//--------------------------------------------------------------
void ofApp::draw() {
	ofSetColor(0);
	
    /*
    float id = midiMessage.control;
    if(id == 0){
        value = midiMessage.value;
    }
    */
    ofDrawCircle(200, 200,  dataControl[0]);
    ofDrawCircle(400, dataControl[21]*10,  dataControl[21]);
    
    
}

//--------------------------------------------------------------
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
void ofApp::keyPressed(int key) {

	switch(key) {
		case 'l':
			midiIn.listPorts();
			break;
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mouseReleased() {
}
