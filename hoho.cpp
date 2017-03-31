#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <iomanip>
#include "hoho.h"

 using namespace std;
 hoho::hoho(int K,double RA,double RB){
     	k=K;
     	ra=RA;
     	rb=RB;
 }
 
void hoho::set(double result){
	double A=ra;
       	double B=rb;
 	ra= ra+k*(result-(1/(1+pow(10,(B-A)/400))));
 	rb= rb+k*((1-result)-(1/(1+pow(10,(A-B)/400))));
	ra=round(ra);
	rb=round(rb);
 }
 
double hoho::geta(){
	return ra;
}

double hoho::getb(){
	return rb;
}
