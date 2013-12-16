#include "AudioEngine.h"
AudioEngine::AudioEngine()
{
    ListenerPos[0]=0.0;ListenerPos[1]=0.0;ListenerPos[2]=4.0;
    ListenerVel[3]=0.0;ListenerVel[3]=0.0;ListenerVel[3]=0.0;
    ListenerOri[0]=0.0;ListenerOri[1]=0.0;ListenerOri[2]=1.0;ListenerOri[3]= 0.0;ListenerOri[4]=1.0;ListenerOri[5]=0.0;
    Source0Pos[0]=-2.0;Source0Pos[1]= 0.0;Source0Pos[2]=0.0;
    Source0Vel[0]=0.0;Source0Vel[1]=0.0;Source0Vel[2]=0.0;
    //Initializer()
////
////int main (int argc, char **argv)
////{
////
////    return EXIT_SUCCESS;
////}
}
AudioEngine::~AudioEngine()
{

}
void AudioEngine::Initializer()
{

    alListenerfv(AL_POSITION,ListenerPos);
    alListenerfv(AL_VELOCITY,ListenerVel);
    alListenerfv(AL_ORIENTATION,ListenerOri);
    alGenBuffers(NUM_BUFFERS, Buffer);
    if(alGetError() != AL_NO_ERROR)
    	{
        	printf("- Error creating buffers !!\n");
        	exit(1);
    	}
    	else
    	{
        	printf("init() - No errors yet.");
    	}
    alutLoadWAVFile("Audio/fighter2.wav",&Format,&Data,&Size,&Freq,&Loop);
    alBufferData(Buffer[0],Format,Data,Size,Freq);
    alutUnloadWAV(Format,Data,Size,Freq);
    alutLoadWAVFile("Audio/collision1.wav",&Format,&Data,&Size,&Freq,&Loop);
    alBufferData(Buffer[1],Format,Data,Size,Freq);
   alutUnloadWAV(Format,Data,Size,Freq);
   alutLoadWAVFile("Audio/GUNSHOT.wav",&Format,&Data,&Size,&Freq,&Loop);
    alBufferData(Buffer[2],Format,Data,Size,Freq);
    alutUnloadWAV(Format,Data,Size,Freq);
    alutLoadWAVFile("Audio/collision3.wav",&Format,&Data,&Size,&Freq,&Loop);
    alBufferData(Buffer[3],Format,Data,Size,Freq);
    alutUnloadWAV(Format,Data,Size,Freq);

    alGenSources(NUM_SOURCES, Source);
    if(alGetError() != AL_NO_ERROR)
    	{
        	cout<<"- Error creating sources !!\n";
        	exit(2);
    	}
    	else
    	{
        	cout<<"init - no errors after alGenSources\n";
    	}
}
void AudioEngine::ShutDown()
{
    alutExit ();
}
void AudioEngine::flightSound()
{
//    ALuint helloBuffer, helloSource;
//    helloBuffer = alutCreateBufferHelloWorld ();
//    alGenSources (1, &helloSource);
//    alSourcei (helloSource, AL_BUFFER, helloBuffer);
//    alSourcePlay (helloSource);
    //alutSleep (1);
//     alGenSources(NUM_SOURCES, Source);

    alSourcef(Source[0], AL_PITCH, 1.0f);
    alSourcef(Source[0], AL_GAIN, 1.0f);
    alSourcefv(Source[0], AL_POSITION, Source0Pos);
    alSourcefv(Source[0], AL_VELOCITY, Source0Vel);
    alSourcei(Source[0], AL_BUFFER,Buffer[0]);
    alSourcei(Source[0], AL_LOOPING, AL_TRUE);
    alSourcePlay (Source[0]);
}

void AudioEngine::stopFlightSound()
{
    alSourceStop(Source[0]);

}
void AudioEngine::collision()
{
    alSourcef(Source[1], AL_PITCH, 1.0f);
    alSourcef(Source[1], AL_GAIN, 1.0f);
    alSourcefv(Source[1], AL_POSITION, Source0Pos);
    alSourcefv(Source[1], AL_VELOCITY, Source0Vel);
    alSourcei(Source[1], AL_BUFFER,Buffer[1]);
   //alSourcei(Source[1], AL_LOOPING, AL_FALSE);
    alSourcePlay (Source[1]);
}
void AudioEngine::stopColliSound()
{
    alSourcePause(Source[1]);
}
void AudioEngine::fired()
{
    //alSourceStop(Source[0]);
    //alSourceStop(Source[1]);
    alSourcef(Source[2], AL_PITCH, 1.0f);
    alSourcef(Source[2], AL_GAIN, 1.0f);
    alSourcefv(Source[2], AL_POSITION, Source0Pos);
    alSourcefv(Source[2], AL_VELOCITY, Source0Vel);
    alSourcei(Source[2], AL_BUFFER,Buffer[2]);
    //alSourcei(Source[2], AL_LOOPING, AL_FALSE);
    alSourcePlay (Source[2]);
}

void AudioEngine::bulletColliSound()
{
    //alSourceStop(Source[0]);
    //alSourceStop(Source[1]);
    alSourcef(Source[3], AL_PITCH, 1.0f);
    alSourcef(Source[3], AL_GAIN, 1.0f);
    alSourcefv(Source[3], AL_POSITION, Source0Pos);
    alSourcefv(Source[3], AL_VELOCITY, Source0Vel);
    alSourcei(Source[3], AL_BUFFER,Buffer[3]);
    alSourcei(Source[3], AL_LOOPING, AL_FALSE);
    alSourcePlay (Source[3]);
}
