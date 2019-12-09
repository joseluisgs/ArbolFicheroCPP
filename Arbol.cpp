/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Arbol.cpp
 * Author: link
 * 
 * Created on 13 de junio de 2018, 18:00
 */
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include "Arbol.h"

using namespace std;

Arbol::Arbol() {
    this->raiz=NULL;
}

Arbol::Arbol(const Arbol& orig) {
}

Arbol::~Arbol() {
    this->raiz=NULL;
}

void Arbol:: salidaPreOrden(){
    if(this->raiz!=NULL){
        preOrden(this->raiz);
    }
}

void Arbol:: salidaInOrden(){
    if(this->raiz!=NULL){
        inOrden(this->raiz);
    }
}

void Arbol:: salidaPostOrden(){
    if(this->raiz!=NULL){
        postOrden(this->raiz);
    }
}

void Arbol::preOrden(Nodo *n){
    if(n!=NULL){
        cout<<n->getDato()<<endl;
        preOrden(n->getIzq());
        preOrden(n->getDer());
    }
}

void Arbol::inOrden(Nodo *n){
    if(n!=NULL){
        inOrden(n->getIzq());
        cout<<n->getDato()<<endl;
        inOrden(n->getDer());
    }
}

void Arbol::postOrden(Nodo *n){
    if(n!=NULL){
        postOrden(n->getIzq());
        postOrden(n->getDer());
        cout<<n->getDato()<<endl;
        
    }
}

bool Arbol::insertar(int valor){
    Nodo *nuevo = new Nodo(valor);
    if(this->raiz==NULL){
        this->raiz= nuevo;
        return true;
    }else{
        return insertarNodo(valor, this->raiz);
    }   
}

bool Arbol::insertarNodo(int valor, Nodo* nodo){
    if(valor < nodo->getDato()){
        if(nodo->getIzq()!=NULL){
            return insertarNodo(valor, nodo->getIzq());
        }else{
            Nodo *nuevo = new Nodo(valor);
            nodo->setIzq(nuevo);
            return true;
        }
    }else if(valor > nodo->getDato()){
        if(nodo->getDer()!=NULL){
            return insertarNodo(valor, nodo->getDer());
        }else{
            Nodo *nuevo = new Nodo(valor);
            nodo->setDer(nuevo);
            return true;
        }
    }
    return false;
}

void Arbol::salidaFichero(const char* nombre){
    FILE *fichero = fopen(nombre, "w");
    preOrdenFichero(fichero, this->raiz);
    fclose(fichero);
}

void Arbol::preOrdenFichero(FILE *fichero, Nodo* n){
    if(n!=NULL){
        fprintf(fichero, "%d\n", n->getDato());
        preOrdenFichero(fichero, n->getIzq());
        preOrdenFichero(fichero, n->getDer());
    }
}

void Arbol::leerFichero(const char* nombre){
    FILE *fichero = fopen(nombre, "r");
    int dato;
    do{
        fscanf(fichero,"%d", &dato);
        this->insertar(dato);
    }while(!feof(fichero));
    
    fclose(fichero);
}

