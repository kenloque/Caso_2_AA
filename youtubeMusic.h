#ifndef YMUSIC_H_
#define YMUSIC_H_

#include "media.h"

class YoutubeMusic : public Media{
    public:
    	~YoutubeMusic(){
			notificar("Apagando Youtube Music...");
		}
    
		void reproducir() override {
			notificar("Encendiendo Youtube Music...");
		}
};

typedef YoutubeMusic* ptrYoutubeMusic;
#endif
