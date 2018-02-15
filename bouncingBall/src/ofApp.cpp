#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    x = 300;
    y = 300;
    velx = ofRandom(-5,5);
    vely = ofRandom(-5,5);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    // weird stuff :
//    float sineOfVel;
//    if (velx < 0){
//        sineOfVel = -1;
//    } else {
//        sineOfVel = 1;
//    }
//    velx = sineOfVel*ofMap(mouseX, 0, ofGetWidth(), 0, 100);
//
    x = x + velx;
    y = y + vely;
    
    
    if (x > ofGetWidth()){
        velx = velx * -1;
    }
    
    if (x < 0){
        velx = velx * -1;
    }
    
    if (y > ofGetHeight()){
        vely = vely * -1;
    }
    
    if (y < 0 ){
        vely = vely * -1;
    }

    
    
    
    ofDrawCircle(x,y,10);
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
