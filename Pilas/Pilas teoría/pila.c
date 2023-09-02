#include"TDA.h"

int main() {
	Pila pila1=crearPila();
	
	insertar(&pila1, 29);
	insertar(&pila1, 10);
	
	printf("El ultimo elemento de la pila es: %i", ultimoElemento(pila1));
	
	printf("\n");
	
	eliminar(&pila1);
	
	printf("El último elemento de la pila es: %i", ultimoElemento(pila1));
	
	
	
	return 0;
}
