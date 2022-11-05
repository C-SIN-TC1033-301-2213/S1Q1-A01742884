#include <iostream>

int main() 
{
  int n1, n2, n3;
  float operacion1;
  float operacion2;
  float operacion3;
  
  n1=3;
  n2=5;
  n3=7;
  operacion1=(n1+n2)/n3;
  operacion2=(n1+n2)/(float)n3;
  operacion3=(float)((n1+n2)/n3);
  
  std::cout<<"La primera operacion es: "<<operacion1<< "\n";
  std::cout<<"La segunda operacion es: "<<operacion2<< "\n";
  std::cout<<"La tercera operacion es: "<<operacion3<< "\n";
  return 0;

}
