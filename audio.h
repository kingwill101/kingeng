#ifndef AUDIO_H
#define AUDIO_H
#include <string>

#include <vlc/vlc.h>

class Audio
{
public:
    Audio();
    ~Audio();
    void play();
    void pause();
    void stop();
    void loadTrack(std::string);

private:
    void initPlayer();
    libvlc_instance_t *inst; //holds our libvlc instance
    libvlc_media_player_t *mp; //media player
    libvlc_media_t *m; // stores data for each media object
    bool isPlaying; // is the media player playing anything
    bool paused; // is the media player currently paused
};

#endif // AUDIO_H
