/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string infile, outfile;
    int shifr;
    ifstream fin;
    ofstream fout;
    char ch;
    
    cout << "Имя файла, который нужно обработать: ";
    cin >> infile;
    fin.open(infile);
    if(!fin.is_open())
    {
        cout << "Ошибка открытия файла, который нужно обработать";
        return 1;
    }
    
    cout << "Имя файла результата: ";
    cin >> outfile;
    fout.open(outfile);
    if(!fout.is_open())
    {
        cout << "Ошибка открытия файла результата";
        return 2;
    }
    
    while(true)
    {
        fin.get(ch);
        if(fin.eof()) break;
        fout.put(ch);
    }
    
    fin.close();
    fout.close();
    return 0;
}

