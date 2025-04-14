#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

char tipos[6][10] ={"inteñ ","AMD","Celeron","Athion","core","Pentium"};

struct Compu
{
    int velocidad;
    int anio;
    int cantidad_nucleos;
    char *tipo_cpu;
}typedef Compu;
 
void cargarCaracteristicasCompu(Compu *computadoras,int cantidad_pc){
    int index_tipo = 0;
    for(int i =0; i < cantidad_pc; i++){
        computadoras[i].velocidad = 1 + rand() %3;
        computadoras[i].anio = 2015 + rand()% (2024 -2015 +1);
        computadoras[i].cantidad_nucleos = 1 + rand()%8;
        index_tipo = rand()% 6;
        computadoras[i].tipo_cpu = tipos[index_tipo];
    }
 }


void listarPcs(Compu pcs[],int cantidad){
    printf("*****Listado de computadoras******\n");
    for (int i = 0; i < cantidad; i++)
    {
        printf("-PC nro: %d\n",i +1);
        mostrarCaracteristicasPc(pcs[i]);
    }
    
}

void mostrarCaracteristicasPc(Compu pc){
    printf("\tVelocidad:%d\n",pc.velocidad);
    printf("\tAnio:%d\n",pc.anio);
    printf("\tCantidad de nucleos:%d\n",pc.cantidad_nucleos);
    printf("\tTipo CPU:%d\n",pc.tipo_cpu);
    printf("\n");
}


int main (){
Compu computadoras[5];

}