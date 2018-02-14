#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    positions[0] = 100;
    positions[1] = 300;
    positions[2] = 50;
    positions[3] = 200;
    positions[4] = 66;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofDrawCircle(positions[0], 200, 10);
    ofDrawCircle(positions[1], 200, 10);
    ofDrawCircle(positions[2], 200, 10);
    ofDrawCircle(positions[3], 200, 10);
    ofDrawCircle(positions[4], 200, 10);
    
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
