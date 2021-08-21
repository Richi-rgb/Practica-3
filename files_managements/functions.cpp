#include "functions.h"

int length(string fileName)
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
