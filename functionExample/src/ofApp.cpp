#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}


void ofApp::drawE( float x, float y, float width, float height  ){
    
    ofDrawLine(x, y, x,y+height);
    ofDrawLine(x, y, x+width, y);
    ofDrawLine(x, y+height*0.5, x+width, y+height*0.5);
    ofDrawLine(x, y+height, x+width, y+height);
    
}


//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    
    
    
    //drawE(100,100,50,200);
    
//    for (int i = 0; i < 20; i++){
//        drawE(100 + i*40,100,30,200);
//    }
    
    
    drawE(120,100,50,200);
    drawE(140,100,50,200);
    drawE(160,100,50,200);
    drawE(170,100,50,200);
    
    

    
    
    
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
