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
 	ra= ra+k*(result-(1.0/(1.0+pow(10,(rb-ra)/400.0))));
 	rb= rb+k*((1-result)-(1.0/(1.0+pow(10,(A-rb)/400.0))));
 }
 
double hoho::geta(){
	return ra;
}

double hoho::getb(){
	return rb;
}
