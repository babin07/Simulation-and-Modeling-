#include <iostream>
#include <cmath>
using namespace std;

int main(){

double R[20]={0.50,0.11,0.23,0.76,0.44,0.82,0.19,0.55,0.33,0.91,
0.02,0.67,0.48,0.12,0.59,0.31,0.88,0.05,0.74,0.26};

int i=3,m=2,M=8;
double sum=0;

for(int k=0;k<M;k++)
{
sum+=(R[i+k*m]-0.5)*(R[i+(k+1)*m]-0.5);
}

double rho=sum/M;
double sigma=1/sqrt(12*M);
double Z=rho/sigma;

cout<<"Autocorrelation = "<<rho<<endl;
cout<<"Standard Error = "<<sigma<<endl;
cout<<"Z value = "<<Z<<endl;

if(fabs(Z)<1.96)
cout<<"Numbers are Independent";
else
cout<<"Numbers are Not Independent";

}
