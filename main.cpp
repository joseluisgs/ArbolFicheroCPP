/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: link
 *
 * Created on 13 de junio de 2018, 17:46
 */

#include <cstdlib>
#include <iostream>
#include "Nodo.h"
#include "Arbol.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
   // Nodo *n = new Nodo(4);
   // cout<<n->getDato();
    
    Arbol *a = new Arbol();
    a->insertar(5);
    a->insertar(4);
    a->insertar(1);
    a->insertar(6);
    a->insertar(2);
    a->insertar(8);
    
    a->salidaPreOrden();
    //a->salidaInOrden();
    //a->salidaPostOrden();
    
    cout<< "Escribimos en el fichero" << endl;
    a->salidaFichero("arbolCPP.txt");
    
    cout<<endl<< "Leemos Fichero" << endl;
    Arbol *a2 = new Arbol();
    a2->leerFichero("arbolCPP.txt");
    a2->salidaPreOrden();
    
    

    return 0;
}

