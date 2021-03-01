#include <iostream>
#include <list>
#include "Interfaces.h"

using namespace std;

class Media{
    //Servidor server;
    protected:
        bool activo;

    Media(){
        activo = false;
    }
    public:
        void cambiar();
        /*void cambiar(bool valor, string objeto){
            if(activo && !valor){
                cout << "Apagando " << objeto << "..." << endl;
                activo = valor;
            }
            else if (!activo && valor){
                cout << "Encendiendo " << objeto << "..." << endl;
                activo = valor;
            }
            else{
                printf("No se puede realizar esta accion ya que el dispositivo ya esta %d.", valor ? "apagado": "encendido");
            }
            
        }*/

        bool getActivo(){
            return activo;
        }

};


class Televisor : public Media, IObserver{
    void cambiar(){
        if(activo){
            cout << "Apagando el televisor..." << endl;
        }
        else{
            cout << "Encendiendo el televisor..." << endl;
            
        }
        activo = !activo;
    }

    void update(){

    }

};

class Radio : public Media, IObserver{
    void cambiar(){
        if(activo){
            cout << "Apagando la radio..." << endl;
        }
        else{
            cout << "Encendiendo la radio..." << endl;
            
        }
        activo = !activo;
    }
    void update(){
        
    }
};

/*class ReproductorMusica : public Media{

};*/

class Spotify : public Media, IObserver{
    void cambiar(){
        if(activo){
            cout << "Apagando Spotify..." << endl;
        }
        else{
            cout << "Encendiendo Spotify..." << endl;
            
        }
        activo = !activo;
    }
    void update(){
        
    }
};

class YoutubeMusic : public Media, IObserver{
    void cambiar(){
        if(activo){
            cout << "Apagando YouTube Music..." << endl;
        }
        else{
            cout << "Encendiendo YouTube Music..." << endl;
            
        }
        activo = !activo;
    }
    void update(){
        
    }
};

class Boton : IObservable{
    list <IObserver *> observers;
    void elegir(int num){

    }
    void registrar(IObserver * observador){
        observers.push_back(observador);
    }
    void borrar(IObserver * observador){
        observers.remove(observador);
    }
    void notificar(){
        for (list<IObserver *>::iterator observador = observers.begin(); observador != observers.end(); ++observador){
            (*observador)->update();
        }
        
    }
};

