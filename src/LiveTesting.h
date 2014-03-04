

#ifndef __OfBookOsc__LiveTesting__
#define __OfBookOsc__LiveTesting__

#include <iostream>
#include "ofxOsc.h"

class LiveTesting
{
public: 
    LiveTesting();
    
    void setup();
    void update();
    ofxOscSender sender;
    //you can set up a sender! We aren't doing that here but it's good example
    //code to have around
    ofxOscReceiver receiver;
    //this is the magic! This is how your game gets incoming data
    ofxOscMessage m;
    //this is the osc message it gets.
    
    
    float max_enemy_amplitude;
    int interval_time;
    float max_enemy_shoot_interval;
    bool triggerBonus; 
    
};

#endif /* defined(__OfBookOsc__LiveTesting__) */
