//
//  Enemy.h
//  emptyExample
//
//  Created by Jane Friedhoff on 2/23/14.
//
//

#ifndef __emptyExample__Enemy__
#define __emptyExample__Enemy__

#include <iostream>
#include "ofMain.h"

class Enemy {
public:
    ofPoint pos;
    float speed;
    float amplitude;
    float width;
    
    float start_shoot;
    float shoot_interval;
    
    void setup(float m_e_a, float m_e_s_i, ofImage * enemy_image);
    void update();
    void draw();
    bool time_to_shoot();
    
    ofImage * img;
};

#endif /* defined(__emptyExample__Enemy__) */
