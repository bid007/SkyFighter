#ifndef AUDIOENGINE_H
#define AUDIOENGINE_H
#include "header.h"
#define NUM_BUFFERS 4
#define NUM_SOURCES 4
#define NUM_ENVIRONMENTS 1
class AudioEngine
{
    private:
        ALfloat ListenerPos[];
        ALfloat ListenerVel[];
        ALfloat ListenerOri[];
        ALfloat Source0Pos[];
        ALfloat Source0Vel[];
        ALuint  Buffer[NUM_BUFFERS];
        ALuint  Source[NUM_SOURCES];
        ALuint  Environment[NUM_ENVIRONMENTS];
        ALsizei Size,Freq;
        ALenum  Format;
        ALvoid  *Data;
        ALboolean Loop;
    public:
        AudioEngine();
        ~AudioEngine();
        void Initializer();
        void ShutDown();
        void flightSound();
        void stopFlightSound();
        void collision();
        void stopColliSound();
         void fired();
         void bulletColliSound();
};

#endif
