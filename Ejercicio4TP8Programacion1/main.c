/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: damian
 *
 * Created on 9 de octubre de 2020, 18:55
 */

#include <stdio.h>
#include <stdlib.h>
#include "leerArgumentosMain.h"

/*
 * 
 */

int main(int argc, char** argv) {

    char * claves[20] = {NULL};
    char * valores[20] = {NULL};
    char * parametros[20] = {NULL};
    
    char ** lecturas[3] = {claves, valores, parametros};
    
    leerArgumentosMain(argc, argv, lecturas);
    
    
   /*                               ARRAYS DEBUG
    int i = 0;   
    while (claves[i] != NULL){
        
        printf("%s\n", opciones[i]);
        i++;
    }
    
    i=0;
    
    while (valores[i] != NULL){
        
        printf("%s\n", claves[i]);
        i++;
    }
    
    i=0;
    
    while (parametros[i] != NULL){
        
        printf("%s\n", parametros[i]);
        i++;
    }
    */
    int i = 0;
    
    while (claves[i] != NULL){
        
        printf("Opcion %d: Clave: %s Valor: %s\n", i+1, claves[i], valores[i]);
        i++;
    }
    
    i = 0;
    
    while (parametros[i] != NULL){
        
        printf("Parametro %d: %s\n", i+1, parametros[i]);
        i++;
    }
    return (EXIT_SUCCESS);
}

