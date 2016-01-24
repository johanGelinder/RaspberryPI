#include "maximilian.h"
#include <iostream>

using namespace std;

maxiOsc osc,mod;//Two oscillators
maxiEnv env;

double sample, freq, modIndex, modFrequency;
double counter;

void setup() {
    
    freq = 440;
    modFrequency = 0;
    modIndex = 100;
    
    env.setAttack(2000);
    env.setDecay(1);
    env.setSustain(1);
    env.setRelease(3000);
    
}

void play(double *output) {
    
    env.trigger = 1;
    modFrequency = 8;
    
    sample = osc.sinewave(freq + env.adsr(mod.sinewave(modFrequency), env.trigger) * modIndex);
    
    output[0] = sample;
    output[1] = sample;
}
