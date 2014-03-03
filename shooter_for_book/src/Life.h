//
//  Life.h
//  emptyExample
//
//  Created by Jane Friedhoff on 3/2/14.
//
//

#ifndef __emptyExample__Life__
#define __emptyExample__Life__

#include <iostream>
#include "ofMain.h"

class Life {
public:
    ofPoint pos;
    float speed;
    float width;
    
    ofImage * img;
    
    void setup(ofImage * _img);
    void update();
    void draw();
    
};

#endif /* defined(__emptyExample__Life__) */
