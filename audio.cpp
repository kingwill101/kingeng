#include "audio.h"

Audio::Audio()
{
    initPlayer();
}

Audio::~Audio(){

    if(isPlaying == true){
        this->stop();
    }

    libvlc_media_player_release(mp);
    libvlc_release(inst);
}

void Audio::initPlayer(){

    this->inst = libvlc_new(0, NULL);


}

void Audio::loadTrack(std::string path){

    m = libvlc_media_new_path(inst, path.c_str());
    mp = libvlc_media_player_new_from_media(m);
    libvlc_media_release(m);
}

void Audio::pause(){

    if(paused == false)
        {
            libvlc_media_player_set_pause(mp, 1);
            paused = true;

    }else if(paused == true){
            libvlc_media_player_set_pause(mp, 0);
            paused = false;
        }
  }


void Audio::play(){

    if (isPlaying == false){
    libvlc_media_player_play(mp);
    isPlaying = true;
    }
}

void Audio::stop(){

    if(isPlaying == true){
        libvlc_media_player_stop(mp);
        isPlaying = false;
    }

}
