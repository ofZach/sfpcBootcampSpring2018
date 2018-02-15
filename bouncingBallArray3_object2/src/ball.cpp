
#include "ball.h"


void ball::setup(){
    x = ofRandom(200,600);
    y = ofRandom(200,600);
    xvel = ofRandom(-5,5);
    yvel = ofRandom(-5,5);
}

void ball::update(){
    
    x = x + xvel;
    y = y + yvel;
    if (x > ofGetWidth() || x < 0){
        xvel *= -1;
    }
    if (y > ofGetHeight() || y < 0){
        yvel *= -1;
    }
}

void ball::draw(){
    ofCircle(x,y,10);
}
    
