// KARGVA.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Parsing.h"
using namespace std;

int main()
{
    std::cout << "give the number!\n";
    int k  ;
    cin >> k;
    std::cout << "give the file name\n";
    string file;
    cin >> file;
    std::cout << "do you want the report? [y/n]\n";
    char y;
    cin >> y;
    
    bool report = (y == 'y') ? true : false;

    Parsing* p = new Parsing(k);
    p->Aread("CARD_MEGARes_NDARO_protein_variants.fasta");
    p->Qread(file,report);
    



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
