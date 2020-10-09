#include <iostream>
#include <cmath>
#include<algorithm>
#include "complex.h"

int main(){
    unsigned N;
    Complex temp;
    std::cin>>N;
    double* arr=new double[N];
    for(unsigned i=0;i<N;++i){
        std::cin>>temp.real>>temp.image;
        arr[i]=abs(temp);
}
double tempi;
    for(unsigned j=1;j<N;++j){
        for(unsigned i=N-1;i>=j;--i){
            if(arr[i-1]>arr[i]){
                 tempi=arr[i-1];
                arr[i-1]=arr[i];
                arr[i]=tempi;
            }
        }
    }
    for(unsigned i=0;i<N;++i){
    	std::cout<<arr[i]<<std::endl;
    }
	
delete arr;
}