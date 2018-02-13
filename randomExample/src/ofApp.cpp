#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    //ofSetFrameRate(1);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSeedRandom(mouseX);

    ofBackground(0);
    
    ofSetColor(ofRandom(0,255),ofRandom(0,255), ofRandom(0,255));
    ofDrawRectangle( ofRandom(100,200), ofRandom(100,200), 50, 50);
    
    ofSetColor(ofRandom(0,255),ofRandom(0,255), ofRandom(0,255));
    ofDrawRectangle( ofRandom(100,200), ofRandom(100,200), 50, 50);
    
    ofSetColor(ofRandom(0,255),ofRandom(0,255), ofRandom(0,255));
    ofDrawRectangle( ofRandom(100,200), ofRandom(100,200), 50, 50);
    
    ofSetColor(ofRandom(0,255),ofRandom(0,255), ofRandom(0,255));
    ofDrawRectangle( ofRandom(100,200), ofRandom(100,200), 50, 50);
    
    ofSetColor(ofRandom(0,255),ofRandom(0,255), ofRandom(0,255));
    ofDrawRectangle( ofRandom(100,200), ofRandom(100,200), 50, 50);
    
    ofSetColor(ofRandom(0,255),ofRandom(0,255), ofRandom(0,255));
    ofDrawRectangle( ofRandom(100,200), ofRandom(100,200), 50, 50);
    
    ofSetColor(ofRandom(0,255),ofRandom(0,255), ofRandom(0,255));
    ofDrawRectangle( ofRandom(100,200), ofRandom(100,200), 50, 50);
    
    ofSetColor(ofRandom(0,255),ofRandom(0,255), ofRandom(0,255));
    ofDrawRectangle( ofRandom(100,200), ofRandom(100,200), 50, 50);
    
    ofSetColor(ofRandom(0,255),ofRandom(0,255), ofRandom(0,255));
    ofDrawRectangle( ofRandom(100,200), ofRandom(100,200), 50, 50);
    
    ofSetColor(ofRandom(0,255),ofRandom(0,255), ofRandom(0,255));
    ofDrawRectangle( ofRandom(100,200), ofRandom(100,200), 50, 50);
    

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
