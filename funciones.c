#include "funciones.h"

int obtenerMaximo(int x, int y, int z){

    int i=0;

    if(x >= y && x >= z){
        i=x;
    }else if( y >= x && y >= z){
        i=y;

    }else{
        i=z;
    }

    return i;

}
