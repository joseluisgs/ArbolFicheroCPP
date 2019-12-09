/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Arbol.h
 * Author: link
 *
 * Created on 13 de junio de 2018, 18:00
 */

#ifndef ARBOL_H
#define ARBOL_H
#include <cstdlib>
#include <stdio.h>
#include "Nodo.h"

using namespace std;

class Arbol {
public:
    Arbol();
    Arbol(const Arbol& orig);
    virtual ~Arbol();
    bool insertar(int valor);
    void salidaPreOrden();
    void salidaInOrden();
    void salidaPostOrden();
    void salidaFichero(const char* nombre);
    void leerFichero(const char* nombre);
    
private:
    Nodo* raiz;
    
    void preOrden(Nodo *n);
    void inOrden(Nodo *n);
    void postOrden(Nodo *n);
    bool insertarNodo(int valor, Nodo *nodo);
    void preOrdenFichero(FILE *fichero, Nodo *n);

};

#endif /* ARBOL_H */

