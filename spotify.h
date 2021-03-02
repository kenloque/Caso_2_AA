#ifndef SPOTIFY_H_
#define SPOTIFY_H_

#include "media.h"

class Spotify : public Media{
    public:
    	~Spotify(){
			notificar("Apagando spotify...");
		}
    
		void reproducir() override {
			notificar("Encendiendo spotify...");
		}
};

typedef Spotify* ptrSpotify;
#endif
