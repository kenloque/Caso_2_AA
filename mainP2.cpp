#include <iostream>

#include "boton.h"
#include "televisor.h"
#include "radio.h"
#include "spotify.h"
#include "youtubeMusic.h"

using namespace std;

void mostrarMenu(){
/* Uso: Esta funcion despliega el menu principal del programa demostrando las diferentes opciones que se pueden escoger.
 * Datos de entrada: No recibe ninguno.
 * Datos de salida/resultado de la operacion: Despliega el menu principal.
*/
	printf("\n\nMenú:\n=====\n\n");
	printf("1.- Television\n");
	printf("2.- Radio\n");
	printf("3.- Spotify\n");
	printf("4.- Youtube Music\n");
	printf("5.- Salir\n\n");
	printf("Elija una opción por favor: ");
	fflush(stdout);
}

int main(){
/* Uso: Es la funcion main().
 * Datos de entrada: Ninguno.
 * Datos de salida/resultado de la operacion: Es la funcion main().
*/	
	int opcion;
	ptrBoton cliente = new Boton(new Televisor());
	do {
		mostrarMenu();
		cin >> opcion;
		switch ( opcion ) {
			case 1:
				ptrTele strategyTele;
				strategyTele = new Televisor();
				strategyTele->registrar(cliente);
				cliente->cambiar(strategyTele);
				break;
			case 2:
				ptrRadio strategyRadio;
				strategyRadio = new Radio();
				strategyRadio->registrar(cliente);
				cliente->cambiar(strategyRadio);
				break;
			case 3:
				ptrSpotify strategySpotify;
				strategySpotify = new Spotify();
				strategySpotify->registrar(cliente);
				cliente->cambiar(strategySpotify);
				break;
			case 4:
				ptrYoutubeMusic strategyYM;
				strategyYM = new YoutubeMusic();
				strategyYM->registrar(cliente);
				cliente->cambiar(strategyYM);
				break;
			case 5:
				delete cliente; 
				exit( 1 );
			default:
				printf( "Opción no válida\n" );
				break;

		}

	} while (opcion!=5);
}
