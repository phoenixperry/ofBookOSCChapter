//
//  Player.h
//  emptyExample
//
//  Created by Jane Friedhoff on 2/23/14.
//
//

#ifndef __emptyExample__Player__
#define __emptyExample__Player__

#include <iostream>
#include "ofMain.h"

class Player {
public:
    ofPoint pos;
    float width, height, speed;
    int lives;
    
    bool is_left_pressed, is_right_pressed, is_down_pressed, is_up_pressed;
    
    void setup(ofImage * _img);
    void update();
    void draw();
    void shoot();
    
    void calculate_movement();
    
    bool check_can_shoot();
    
    ofImage * img;
    
};



#endif /* defined(__emptyExample__Player__) */
