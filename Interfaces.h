#include <iostream>

using namespace std;

class IObserver{
    public:
        virtual void update() = 0;
};

class IObservable{
    public:
        virtual void registrar(IObserver * observador) = 0;
        virtual void borrar(IObserver * observador) = 0;
        virtual void notificar() = 0;
};