#ifndef RADIO_H_
#define RADIO_H_

#include "media.h"

class Radio : public Media{
    public:
    	~Radio(){
			notify("Apagando la radio...");
		}
    
		void reproducir() override {
			notify("Encendiendo la radio...");
		}
};

typedef Radio* ptrRadio;
#endif
