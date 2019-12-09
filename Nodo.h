/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nodo.h
 * Author: link
 *
 * Created on 13 de junio de 2018, 17:47
 */

#ifndef NODO_H
#define NODO_H

class Nodo {
public:
    Nodo(int dato);
    Nodo(const Nodo& orig);
    virtual ~Nodo();
    int getDato();
    void setDato(int dato);
    Nodo* getIzq();
    void setIzq(Nodo* nodo);
    Nodo* getDer();
    void setDer(Nodo* nodo);
private:
    int dato;
    Nodo* izq;
    Nodo* der;

};

#endif /* NODO_H */

