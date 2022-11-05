#include <iostream>

int main() 
{
  int n1, n2, n3, n4, n5, n6, n7;
  int operacion1;
  int operacion2;
  int operacion3;
  int operacion4;
  n1=3;
  n2=5;
  n3=7;
  n4=2;
  n5=4;
  n6=6;
  n7=1;
  operacion1=n1+n2/n3;
  operacion2=n1*n1+n1%n4;
  operacion3=n1+n4/n2+-n4*n5;
  operacion4=n4*(n7+-(n1/n5)/n4)*(n4-n6%n1);
  std::cout<<"La primera operacion es: "<<operacion1<< "\n";
  std::cout<<"La segunda operacion es: "<<operacion2<< "\n";
  std::cout<<"La tercera operacion es: "<<operacion3<< "\n";
  std::cout<<"La cuarta operacion es: "<<operacion4<< "\n";
  return 0;

}
