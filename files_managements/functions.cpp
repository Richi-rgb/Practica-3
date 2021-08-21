#include "functions.h"

int lengthFile(string fileName)
{
    int length; // Variable que contendra el tamaño del archivo
    fstream file;
    file.open(fileName, ios::in);
    if (file.is_open()) {
        // Obtiene el numero de caracteres que contiene el archivo
        file.seekg(0, file.end);
        length = file.tellg();
        file.seekg(0, file.beg);
        //
    } else { length = 0; }
    file.close();

    return length;
}

int length(char text[])
{
    int length = 0; // Variable que contendra el tamaño de la cadena de caracteres
    for (int index = 0; text[index] != NULL; index++) {
        length++;
    }
    return length;
}
