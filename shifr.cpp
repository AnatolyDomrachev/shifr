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
    int type;
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
    
    cout << "Тип операции: \n 1 - кодировать \n 2 - раскодировать \n ";
    cin >> type;

    if(type != 1 && type != 2)
    {
	    cout << "Неверный тип операции";
	    return 3;
    }

    cout << "Шифр: ";
    cin >> shifr;

    while(true)
    {
        fin.get(ch);
        if(fin.eof()) break;
	if(type == 1) ch += shifr;
	if(type == 2) ch -= shifr;
        fout.put(ch);
    }
    
    fin.close();
    fout.close();
    return 0;
}

