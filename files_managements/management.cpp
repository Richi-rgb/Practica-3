#include "management.h"

char* readFile(char fileName[])
{
    fstream file;
    char* pchar = new char[length(fileName)]; // Puntero que va a ser devuelto
    file.open(fileName, ios::in);
    if (file.is_open()) {
        // Lee datos en bloque
        file.read(pchar,length(fileName));

        file.close();
    }
    return pchar;
}

string readFile(string fileName)
{
    fstream file;
    string fileText;
    file.open(fileName, ios::in);
    if (file.is_open()) {
        char* pchar = new char[length(fileName)];
        // Lee datos en bloque
        file.read(pchar,length(fileName));

        file.close();

        fileText = pchar;
    }
    return fileText;
}

void writeFile(char fileName[], char text)
{
    fstream file;
    file.open(fileName, ios::out);
    if (file.is_open()) {

    }
}

void writeFile(string fileName, string text)
{
    fstream file;
    file.open(fileName, ios::out);
    if (file.is_open()) {

    }
}
