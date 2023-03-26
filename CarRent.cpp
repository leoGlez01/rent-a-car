#include "CarRent.h"
#include <cstring>
#include <iostream>
using namespace std;
CarRent::CarRent()
{
   tarifa=56;
   Diasrent=12;
   strcpy(pasaporte,"passno0");
   strcpy(matricula, "M1M1M1");
}

CarRent::CarRent(char *pas, int dias, float tarif, char *matric)
{
    tarifa=tarif;
    Diasrent=dias;
    strcpy(pasaporte,pas);
    strcpy(matricula, matric);
}
CarRent::CarRent(const CarRent &c)
{
    strcpy(pasaporte, c.pasaporte);
    strcpy(matricula, c.matricula);
    tarifa=c.tarifa;
    Diasrent=c.Diasrent;
}
CarRent::~CarRent()
{
    delete []pasaporte;
    delete []matricula;
}
float CarRent::CalcularIngreso()
{
    return tarifa*Diasrent;
}
ostream& operator<<(ostream &out, CarRent &c)
{
    out<<"pasaporte:"<<c.pasaporte<<endl;
    out<<"matricula:"<<c.matricula<<endl;
    out<<"tarifa:"<<c.tarifa<<endl;
    out<<"No. dias:"<<c.Diasrent<<endl;
    out<<"Ingreso:"<<c.CalcularIngreso()<<endl;
    return out;
}
void CarRent::operator=(const CarRent &other)
{
    strcpy(pasaporte, other.pasaporte);
    strcpy(matricula, other.matricula);
    tarifa=other.tarifa;
    Diasrent=other.Diasrent;
}
Servicio *CarRent::Clone()const
{
    return new CarRent(*this);
}
