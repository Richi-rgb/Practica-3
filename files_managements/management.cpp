#include "management.h"

char* readFile(char fileName[])
{
    fstream file;
    char* pchar = new char[lengthFile(fileName)]; // Puntero que va a ser devuelto
    file.open(fileName, ios::in);
    if (file.is_open()) {
        // Lee datos en bloque
        file.read(pchar, lengthFile(fileName));

        file.close();
    }
    return pchar;
}

string readFileFromStart(string fileName)
{
    fstream file;
    string fileText;
    file.open(fileName, ios::in);
    if (file.is_open()) {
        char* pchar = new char[lengthFile(fileName)];
        // Lee datos en bloque
        file.read(pchar,lengthFile(fileName));

        file.close();

        fileText = pchar;
    }
    return fileText;
}

void writeFile(string fileName, char text[])
{
    fstream file;
    file.open(fileName, ios::out);
    if (file.is_open()) {
        file.write(text, lengthFile(fileName));
    }
}

void writeFileFromStart(string fileName, string text)
{
    fstream file;
    file.open(fileName, ios::out);
    if (file.is_open()) {

    }
}
