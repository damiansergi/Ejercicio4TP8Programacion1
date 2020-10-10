/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   leerArgumentosMain.c
 * Author: damian
 *
 * Created on 9 de octubre de 2020, 20:07
 */

#include <stdio.h>
#include <stdlib.h>
#include "leerArgumentosMain.h"

/*
 * 
 */

void leerArgumentosMain(int argc, char** argv, char ** lecturas[3]){
    
    int indOC = 0,indP = 0;
    
    for (int i = 1; i< argc; i++){
        
        if (argv[i][0] == '-'){             //si me encuentro con un guion
            
            lecturas[0][indOC] = argv[i];   //guardo la opcion en el arreglo de opciones
            i++;                            //y luego me muevo a la clave y guardo la misma en el arreglo de claves
            lecturas[1][indOC] = argv[i];
            indOC++;
        }
        
        else{                               //si no es un valor o una clave, entonces es un parametro
            
            lecturas[2][indP] = argv[i];
            indP++;
        }
    }
}

