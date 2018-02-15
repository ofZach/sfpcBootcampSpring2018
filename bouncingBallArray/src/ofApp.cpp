#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    for (int i = 0; i < 10000; i++){
        x[i] = ofRandom(300,600);
        y[i] = ofRandom(300,600);
        velx[i] = ofRandom(-5,5);
        vely[i] = ofRandom(-5,5);
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    
    
    for (int i = 0; i < 10000; i++){
    
        x[i] = x[i] + velx[i];
        y[i] = y[i] + vely[i];

        if (x[i] > ofGetWidth() || x[i] < 0){
            velx[i] = velx[i] * -1;
        }

        if (y[i] > ofGetHeight() || y[i] < 0){
            vely[i] = vely[i] * -1;
        }

    }
    
    
    
    for (int i = 0; i < 10000; i++){
        ofDrawCircle(x[i],y[i],2);
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
