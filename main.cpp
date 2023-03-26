#include <iostream>
#include "Servicio.h"
#include "CarRent.h"
#include "Taxi.h"
#include "ServiciosDiarios.h"
using namespace std;

int main()
{
    CarRent c1;
    cout<<c1<<endl;
    Taxi t1;
    Servicio *S1,*S2;
    cout<<"Taxi 1:"<<t1<<endl;
    S1=&c1;
    S2=&t1;

    ServiciosDiarios Service;      //coleccion
    Service.push(S1);
    Service.push(S2);
    ServiciosDiarios serv2(Service);
  cout<<"COLECCION 1:"<<Service.at(0).CalcularIngreso()<<endl;
  cout<<"COLECCION 2:"<<Service.at(1).CalcularIngreso()<<endl;
   //serv2.at(1).set("newwwwwwwwww");
   cout<<"COLECCION 3:"<<serv2.at(1).CalcularIngreso()<<endl;
   ServiciosDiarios serv3=Service;
   cout<<"nueva colecc x asignacion"<<serv3.at(1).CalcularIngreso();
    return 0;
}
