//
//  Bullet.h
//  emptyExample
//
//  Created by Jane Friedhoff on 3/1/14.
//
//

#ifndef __emptyExample__Bullet__
#define __emptyExample__Bullet__

#include <iostream>
#include "ofMain.h"

class Bullet {
public:
    ofPoint pos;
    
    float speed;
    
    float width;
    
    bool from_player;
    
    void setup(bool f_p, ofPoint p, float s, ofImage * bullet_image);
    void update();
    void draw();
    
    ofImage * img;
};

#endif /* defined(__emptyExample__Bullet__) */
