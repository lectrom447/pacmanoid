#ifndef FANTASMA_H
#define FANTASMA_H
#include "objetoui.h"
#include "graphito.h"

class Fantasma: public ObjetoUI {
    private:
        int x;
        int y;
        int dibujarX;
        int dibujarY;
        int izq;
        int der;
        int aba;
        int arr;
        int tamano;
        int visible = true;
        int mitadTamano;
        int direccionAnimacion = 1;
        int color;
        void dibujar();
        void animar();
        void calcularLimites();
    public:
        Fantasma(int x, int y, int tamano);
        void siguienteTiempo();
        int obtenerIzq();
        int obtenerDer();
        int obtenerArr();
        int obtenerAba();
        int obtenerColor();
        bool esVisible();
        void ocultar();

};

#endif