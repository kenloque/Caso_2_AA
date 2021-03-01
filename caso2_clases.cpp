#include <iostream>

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

        bool getActivo(){
            return activo;
        }

};


class Televisor : public Media{
    void cambiar(){
        if(activo){
            cout << "Apagando el televisor..." << endl;
        }
        else{
            cout << "Encendiendo el televisor..." << endl;
            
        }
        activo = !activo;
    }

};

class Radio : public Media{
    void cambiar(){
        if(activo){
            cout << "Apagando la radio..." << endl;
        }
        else{
            cout << "Encendiendo la radio..." << endl;
            
        }
        activo = !activo;
    }
};

class ReproductorMusica : public Media{

};

class Spotify : public ReproductorMusica{
    void cambiar(){
        if(activo){
            cout << "Apagando Spotify..." << endl;
        }
        else{
            cout << "Encendiendo Spotify..." << endl;
            
        }
        activo = !activo;
    }
};

class YoutubeMusic : public ReproductorMusica{
    void cambiar(){
        if(activo){
            cout << "Apagando YouTube Music..." << endl;
        }
        else{
            cout << "Encendiendo YouTube Music..." << endl;
            
        }
        activo = !activo;
    }
};

