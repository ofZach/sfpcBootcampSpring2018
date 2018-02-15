

#include "ofMain.h"

class ball {
    
    public:
    
    ofPoint pos;
    ofPoint vel;
    ofColor color;
    
    void setup();       // pick random position + vel
    void update();      // update pos, bounce off walls
    void draw();        // draw
    
    
};
