#ifndef RADIO_H_
#define RADIO_H_

#include "media.h"

class Radio : public Media{
    public:
    	~Radio(){
			notificar("Apagando la radio...");
		}
    
		void reproducir() override {
			notificar("Encendiendo la radio...");
		}
};

typedef Radio* ptrRadio;
#endif
