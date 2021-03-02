#ifndef SPOTIFY_H_
#define SPOTIFY_H_

#include "media.h"

class Spotify : public Media{
    public:
    	~Spotify(){
			notify("Apagando spotify...");
		}
    
		void reproducir() override {
			notify("Encendiendo spotify...");
		}
};

typedef Spotify* ptrSpotify;
#endif
