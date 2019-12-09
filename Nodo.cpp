/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nodo.cpp
 * Author: link
 * 
 * Created on 13 de junio de 2018, 17:47
 */

#include "Nodo.h"
#include <stdlib.h>

Nodo::Nodo(int dato) {
    this->dato= dato;
    this->izq= NULL;
    this->der= NULL;
}

Nodo::Nodo(const Nodo& orig) {
}

Nodo::~Nodo() {
    this->izq= NULL;
    this->der= NULL;
}
int Nodo::getDato(){
    return this->dato;
}
void Nodo::setDato(int dato){
    this->dato=dato;
}
Nodo* Nodo:: getIzq(){
    return this->izq;
}
void Nodo::setIzq(Nodo* nodo){
    this->izq= nodo;
}
Nodo* Nodo:: getDer(){
    return this->der;
}
void Nodo::setDer(Nodo* nodo){
    this->der=nodo;
}

