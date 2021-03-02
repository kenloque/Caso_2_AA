#ifndef TELEVISOR_H_
#define TELEVISOR_H_

#include "media.h"

using namespace std;

class Televisor : public Media{
	public:
		~Televisor(){
			notify("Apagando el televisor...");
		}
	
		void reproducir() override {
			notify("Encendiendo el televisor...");
		}
};

typedef Televisor* ptrTele;
#endif
