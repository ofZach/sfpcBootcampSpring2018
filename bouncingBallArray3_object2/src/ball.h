

#include "ofMain.h"

class ball {
    
    public:
    
    float x;
    float y;
    float xvel;
    float yvel;
    
    void setup();       // pick random position + vel
    void update();      // update pos, bounce off walls
    void draw();        // draw
    
    
};
