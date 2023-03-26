#include "Taxi.h"
#include <cstring>
#include <iostream>
using namespace std;

Taxi::Taxi()
{
    tarifa=20;
    km=120;
    choferName=new char[strlen("paco")+1];
    strcpy(choferName,"paco");
    strcpy(pasaporte,"passno1");
}
Taxi::Taxi(char*pas, float km1, float tarif, char *name)
{
    strcpy(pasaporte, pas);
    choferName=new char[strlen(name)+1];
    strcpy(choferName, name);
    km=km1;
    tarifa=tarif;
}
Taxi::Taxi(const Taxi &t)
{
    strcpy(pasaporte, t.pasaporte);
    choferName=new char[strlen(t.choferName)+1];
    strcpy(choferName,t.choferName);
    tarifa=t.tarifa;
    km=t.km;

}
void Taxi::operator=(const Taxi &other)
{
    strcpy(pasaporte, other.pasaporte);
    choferName=new char[strlen(other.choferName)+1];
    strcpy(choferName,other.choferName);
    tarifa=other.tarifa;
    km=other.km;

}
Taxi::~Taxi()
{
    delete []choferName;
    delete []pasaporte;
}
float Taxi::CalcularIngreso()
{
    return km*tarifa;
}
Servicio *Taxi::Clone()const
{
    return new Taxi(*this);
}
ostream& operator<<(ostream &out, Taxi &t)
{
    out<<"pasaporte:"<<t.pasaporte<<endl;
    out<<"matricula:"<<t.choferName<<endl;
    out<<"tarifa:"<<t.tarifa<<endl;
    out<<"km:"<<t.km<<endl;
    out<<"Ingreso:"<<t.CalcularIngreso()<<endl;
    return out;
}
