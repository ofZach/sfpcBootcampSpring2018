#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    for (int i = 0; i < 100; i++){
        xpositions[i] = ofRandom(0,1000);
        ypositions[i] = ofRandom(0,1000);
        radii[i] = ofRandom(0,50);
        red[i] = ofRandom(0,255);
        green[i] = ofRandom(0,255);
        blue[i] = ofRandom(0,255);
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(127 + 127 * sin(ofGetElapsedTimef()),
                 127 + 127 * sin(ofGetElapsedTimef()*1.1),
                 127 + 127 * sin(ofGetElapsedTimef()*1.2));
//    for (int i = 0; i < 100; i++){
//        xpositions[i] = xpositions[i] + ofRandom(-1,1);
//        ypositions[i] = ypositions[i] + 1;
//    }
//    for (int i = 0; i < 100; i++){
//        radii[i] = radii[i] + 1;
//        if (radii[i] > 100){
//            radii[i] = 1;
//        }
//    }
//
//
//    for (int i = 0; i < 100; i++){
//        ofSetColor(red[i], blue[i], green[i]);
//        ofDrawCircle(xpositions[i], ypositions[i], radii[i] );
//    }

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
