#include <iostream>

using namespace std;

int tablero[64]; //Vector que guardará el tablero
int movs[63]; // Vector de movimientos, DEBE ESTAR DEFINIDO
int posInicial; //Indica la posición inicial del caballo; DEBE ESTAR DEFINIDO
int posActual; // Indica la posición actual del caballo

int movimiento(int);
void inicializarTablero(); //Inicializa el tablero
void mover(); // Hace que el caballo se mueva por el tablero


int main(){
	inicializarTablero();
	mover();
 	return 0;
}
int movimiento(int x){
    int y=0;
    switch (x){
    case 1:
        y=-15;
        break;
    case 2:
        y=-6;
        break;
    case 3:
        y=10;
        break;
    case 4:
        y=17;
        break;
    case 5:
        y=15;
        break;
    case 6:
        y=6;
        break;
    case 7:
        y=-10;
        break;
    case 8:
        y=-17;
        break;
    default:
        break;
    }
	return y;
}


//Llenamos el tablero de 0, lo que indica que el caballo no ha estado en ninguna posición del tablero.
void inicializarTablero(){
    for (int i=0;63;i++){
        tablero[i]=0;
    }
}


void mover(){
    posActual=posInicial; //La posición actual comienza con la posición inicial
    tablero[posActual]++; //marcamos que el caballo pasó por la posición inicial
    for (int i=0;62;i++){
        posActual=posActual + movimiento(movs[i]); //actualizamos la posición actual
        tablero[posActual]++; //marcamos que el caballo pasó por la posición actual
    }
}
