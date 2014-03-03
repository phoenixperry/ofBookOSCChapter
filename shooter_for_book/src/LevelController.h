//
//  LevelController.h
//  emptyExample
//
//  Created by Jane Friedhoff on 2/23/14.
//
//

#ifndef __emptyExample__LevelController__
#define __emptyExample__LevelController__

#include <iostream>
#include "ofMain.h"

class LevelController {
public:
    float start_time;
    float interval_time;
    
    void setup(float e);
    void update();
    bool should_spawn();
    
};

#endif /* defined(__emptyExample__LevelController__) */
