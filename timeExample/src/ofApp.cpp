#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    
    
    // two ways to print out info
    // old school -- printf("...");
    // new school -- cout...  cout << " " << endl;
    
    //cout << ofGetElapsedTimef() << endl;
    //cout << sin(ofGetElapsedTimef()) << endl;
    
    
    //ofBackground( 127 + 127 * sin( ofGetElapsedTimef() )   );
    
    float time = ofGetElapsedTimef();
    float sinOfTime = sin(time);
    float mappedSin = ofMap(sinOfTime, -1,1,0,1000 );
    ofDrawCircle(mappedSin, 200, 20);
    
    
    //ofSetColor(255);
    //ofSetColor(255,255,255);
    
    
    //ofBackground(ofGetElapsedTimef()*10);
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
