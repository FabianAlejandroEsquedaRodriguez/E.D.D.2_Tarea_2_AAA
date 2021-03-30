#include "cliente.h"

Cliente::Cliente(int valorNumeroCuenta, string valorApellido, 
                 string valorPrimernombre, double valorSaldo){
                     
    establecerNumeroCuenta(valorNumeroCuenta);
    establecerApellido(valorApellido);
    establecerPrimerNombre(valorPrimernombre);
    establecerSaldo(valorSaldo);
}

void Cliente::establecerNumeroCuenta(int valorNumeroCuenta){
    numeroCuenta = valorNumeroCuenta;
}
int Cliente::obtenerNumeroCuenta() const{
    return numeroCuenta;
}

void Cliente::establecerApellido(string valorApellido){
    const char * apellidoTemp = valorApellido.data();//Convierte el valor de esa string en un arreglo
    size_t tamanio = valorApellido.size();//Saber cual es el tamaño
    tamanio = (tamanio < 15)*tamanio + (tamanio >= 15)*14; //Si tengo caracteres de mas o de menos,
                                                            // solo contará los del tamaño del arreglo
    strncpy(apellido, apellidoTemp, tamanio);
    apellido[tamanio] = '\0';//En la ultima posicion asignamos el caracter nulo
}
string Cliente::obtenerApellido() const{
    return apellido;
}

void Cliente::establecerPrimerNombre(string valorPrimernombre){
    const char * nombreTemp = valorPrimernombre.data();//Convierte el valor de esa string en un arreglo
    size_t tamanio = valorPrimernombre.size();//Saber cual es el tamaño
    tamanio = (tamanio < 10)*tamanio + (tamanio >= 10)*9; //Si tengo caracteres de mas o de menos,
                                                            //solo contará los del tamaño del arreglo
    strncpy(apellido, nombreTemp, tamanio);
    primerNombre[tamanio] = '\0';//En la ultima posicion asignamos el caracter nulo
}
string Cliente::obtenerPrimerNombre() const{
    return primerNombre;
}

void Cliente::establecerSaldo(double valorSaldo){
    saldo = valorSaldo;
}
double Cliente::obtenerSaldo() const{
    return saldo;
}