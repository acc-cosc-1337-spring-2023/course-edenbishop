//add include statements
#include <iostream>
#include "func.h"
using namespace std;


//add function code here
double get_gc_content(const string& dna)
{
    int count = 0;
    double per_gc = 0.0;

    for(char e : dna)
    {
        if(e == 'G' || e == 'C')
        {
            count++;
        }
    }

    per_gc = (double) count / dna.length();
    return per_gc;

}
    

string get_reverse_string(string dna)
{
    string rev_dna = "";
    for(int e = dna.length() - 1; e >= 0; e--)
    {
      	rev_dna += dna[e];
    }
    return rev_dna;
}

string get_dna_complement(string dna)
{
    string rev = get_reverse_string(dna);
    string comp = "";


    for(char e : rev)
    {
        if(e == 'G')
        {
            e += 'C';
        }
        else if(e == 'C')
        {
            e += 'G';
        }
        else if(e == 'A')
        {
            e += 'T';
        }
        else if(e == 'T')
        {
            e += 'A';
        }
        
        comp += e;
    }
return comp;
}