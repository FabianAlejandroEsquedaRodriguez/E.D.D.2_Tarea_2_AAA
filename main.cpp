/*Esqueda Rodríguez, Fabián Alejandro

Sección: D05
Calendario: 2021-A
*/ 

#include <iostream>
#include <fstream>
#include "cliente.h"

using namespace std;

int main(){
    system("color F1");
    
    //Creando el archivo lógico
    ofstream archivoCreditoSalida("credito.dat", ios::binary);//El constructor abre el archivo

    if(!archivoCreditoSalida){//Si no se pudo crear/abrir el archivo
        cerr<<"No se pudo abiri el archivo"<<endl;
        exit(1);
    }

    Cliente clienteEnBlanco;

    //Escribir 100 registros en blanco en el archivo
    for(size_t i=0; i<100; i++){ 
        archivoCreditoSalida.write(reinterpret_cast<const char *> (&clienteEnBlanco), sizeof(Cliente));
    }

    cout<<endl<<endl<<"SE HAN GUARDADO CON EXITO, 100 REGISTROS EN BLANCO"<<endl<<endl<<endl;
    system("pause");

    archivoCreditoSalida.close();

    return 0;
}//fin del main