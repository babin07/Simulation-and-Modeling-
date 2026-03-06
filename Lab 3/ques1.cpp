#include <iostream>
#include <cmath>
using namespace std;

int main() {

double R[25]={0.08,0.12,0.95,0.34,0.11,0.56,0.77,0.21,0.04,0.66,
0.43,0.19,0.82,0.55,0.27,0.03,0.99,0.41,0.15,0.60,0.88,0.32,0.14,0.71,0.22};

int i=0,m=5,M=4;
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
