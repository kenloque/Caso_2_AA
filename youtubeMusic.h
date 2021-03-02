#ifndef YMUSIC_H_
#define YMUSIC_H_

#include "media.h"

class YoutubeMusic : public Media{
    public:
    	~YoutubeMusic(){
			notify("Apagando Youtube Music...");
		}
    
		void reproducir() override {
			notify("Encendiendo Youtube Music...");
		}
};

typedef YoutubeMusic* ptrYoutubeMusic;
#endif
