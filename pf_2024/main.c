#include <stdio.h>
#include <stdio.h>
#define TAM 50

typedef struct{
    int idEquipo;
    char nombreEquipo[TAM];
    char provincia[TAM];
    char director[TAM];
}Equipo;

typedef struct{
    int idJuego;
    int idVisitante;
    int idLocal;
    int estado;
    int duracion;
    int carreras[2][TAM];
}Juego;

typedef struct{
    int idSerie;
    Equipo cantEquipos[20];
    Juego cantJuegos[100];
}Serie;

int main(){
    
    return 0;
}

