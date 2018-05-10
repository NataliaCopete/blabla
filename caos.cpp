#include <iostream>

using std::cout;
using std::endl;


double f(double y){

return -y;

}
int main(){

float h;
float N;
float x;
float k1;
float k2;
float k3;
float k4;
float y;



h=0.1;
x=0;
y=1;
N=3/h;



for(int i=0;i<N;i++){

k1= f(y);
k2= f(y+k1*h/2);
k3=f(y+k2*h/2);
k4=f(y+k3*h);

y=y+h*1/6*(k1+2*k2+2*k3+k4);
x=x+h;
cout<<x<<" "<<y<<endl;

}

return 0;
}
