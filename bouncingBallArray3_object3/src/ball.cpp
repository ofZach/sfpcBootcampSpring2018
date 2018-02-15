
#include "ball.h"


void ball::setup(){
    pos.x = ofRandom(200,600);
    pos.y = ofRandom(200,600);
    vel.x = ofRandom(-5,5);
    vel.y = ofRandom(-5,5);
}

void ball::update(){
    
    pos = pos + vel;
    
    if (pos.x > ofGetWidth() || pos.x < 0){
        vel.x *= -1;
    }
    if (pos.y > ofGetHeight() || pos.y < 0){
        vel.y *= -1;
    }
}

void ball::draw(){
    ofDrawCircle(pos.x, pos.y,10);
}
    
