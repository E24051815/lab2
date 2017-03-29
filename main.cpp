#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <iomanip>
#include <iostream>
#include "hoho.h"
using namespace std;

int main()
{   double a0,b0,s;
    int rate;
    ifstream in("filein.txt",ios::in);
    in>>rate>>a0>>b0;
    hoho aha(rate,a0,b0);
    ofstream out("fileout.txt",ios::out);
    out<<a0<<' '<<b0<<endl;
    while(in>>s){
    aha.set(s);
    out<<fixed<<setprecision(0)<<aha.geta()<<' '<<aha.getb()<<endl;
    }	
    return 0;
} 
    
    
    
