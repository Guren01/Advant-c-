#include <iostream>
#include <fstream>
#include <cctype>//this is for isdigit
using namespace std ;
#include <array>//under using or will not work
const int MAX = 1000 ;
using tableau = array<string, MAX >;

int main()
{
    tableau tb ;
    string line ;
    int somme =0 ;
    int number =0 ;
    int lastnumber = 0 ;
    ifstream data("input.txt") ;
    for(int i=0 ; i<1000 ; i++)
    {
        string  batata ;      
        data >> line ;
        for(int j=0 ; j< line.length() ; j++)
        {
            if(isdigit(line[j])) //if number == true
            {
                batata += line[j] ;
            }
        }
        if(batata.length()==1)
        {
            batata += batata ;
            tb[i] = batata ;
        }
        else if(batata.length()>2)
        {
            string maticha = { batata.front(), batata.back() }; // take the firste craracter and the last
            tb[i] = maticha ;
        }
        else if(batata.length()==2)
        {
            tb[i] = batata ;
        }
    }
    for(int i=0 ; i<MAX ; i++)
    {
        cout << tb[i];
        cout << endl ;
        somme +=  stoi(tb[i]) ; // change string to int
    }
    cout <<"La somme est: " << somme ;
}


