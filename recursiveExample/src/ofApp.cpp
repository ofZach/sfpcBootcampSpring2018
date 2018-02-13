#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofSetFrameRate(1);
}

//--------------------------------------------------------------
void ofApp::update(){

}

void ofApp::splitRectangle(float x, float y, float width, float height){
    
    if (width > 1 && ofRandom(0,1) > 0.5){
        splitRectangle(x,y, width/2, height/2);
        splitRectangle(x + width/2,y, width/2, height/2);
        splitRectangle(x + width/2,y+height/2, width/2, height/2);
        splitRectangle(x,y+height/2, width/2, height/2);
    } else {
        //ofNoFill();
        ofSetColor(ofRandom(0,255), ofRandom(0,255), ofRandom(0,255));
        ofDrawRectangle(x,y,width, height);
    }
    
    
    //ofDrawRectangle(x,y,width, height);
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    
    //ofSeedRandom(mouseX*1000);

    ofSetColor(0);
    
    splitRectangle(100,100,400,400);
    
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
