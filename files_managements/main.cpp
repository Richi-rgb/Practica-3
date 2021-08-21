#include "management.h"

int main()
{
    string file_name = "natural.txt";
    char fileName[] = "natural.txt";
    string text = readFile(file_name);
    char* pchar = readFile(fileName);

    cout << pchar << endl;
    cout << text << endl;

    delete[] pchar;

    return 0;
}

// Resive el valor de la funcion read_file
/*
    string file_name = "natural.txt";
    char* pchar = read_file(file_name);
    cout << pchar << endl;
*/
