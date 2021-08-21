#ifndef MANAGEMENT_H
#define MANAGEMENT_H

#include "functions.h"

char* readFile(char fileName[]); // Lee el archivo y devuelve una cadena de caracteres con el contenido del archivo

string readFile(string fileName); // Lee el archivo y devuelve un string con el contenido del archivo

void writeFile(char fileName[], char text[]); // Escribe en el archivo la cadena de caracteres ingresada

void writeFile(string fileName, string text); //Escribe en el archivo el string de caracteres ingresado

#endif // MANAGEMENT_H
