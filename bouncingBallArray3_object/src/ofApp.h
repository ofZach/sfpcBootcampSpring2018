#pragma once

#include "ofMain.h"


class ball {
    
    public:
    
    float x;
    float y;
    float velx;
    float vely;
    float red;
    float green;
    float blue;
    
    
};


class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    
    ball balls[1000];
    
//    float red[1000];
//    float green[1000];
//    float blue[1000];
//    float x[1000];
//    float y[1000];
//    float velx[1000];
//    float vely[1000];
    
		
};
