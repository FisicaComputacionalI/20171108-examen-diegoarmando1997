//Diego Armando Medel Luna, calcular la velocidad.
#include <iostream>
using namespace std;

int main(){
  double D;
  double T;
  double V;
  cout<<"¿Distancia(m)?"<<endl;
  cin>>D;
  cout<<"¿Tiemo(s)?"<<endl;
  cin>>T;
  V=D/T;
  cout<<"La velocidad es (m/s) "<< V <<endl;
  return 0;
}
