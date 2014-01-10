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
    libvlc_instance_t *inst;
    libvlc_media_player_t *mp;
    libvlc_media_t *m;
    bool isPlaying;
    bool paused;
};

#endif // AUDIO_H
