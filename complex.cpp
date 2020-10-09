#include <iostream>
#include <cmath>
#include<algorithm>
#include "complex.h"

	Complex operator+(const Complex& left,const Complex& right){
		
			return Complex(left.real+right.real, left.image+right.image);
			
		}
		Complex operator-(const Complex& left,const Complex& right){
			return Complex(left.real-right.real,  left.image-right.image);
		}

		double abs(const Complex& k){
			unsigned a=k.real*k.real;
			unsigned b=k.image*k.image;
			double x=sqrt(a+b);
		    return x;
		}
		
	
		Complex operator*(const Complex& l,const int r){
			return Complex(l.real*r,l.image*r);
		}
		Complex operator*(const int l,const Complex& r){
			return Complex(l*r.real,l*r.image);
		}