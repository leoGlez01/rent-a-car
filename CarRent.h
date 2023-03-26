#ifndef CARRENT_H
#define CARRENT_H
#include "Servicio.h"
#include <iostream>
using namespace std;
class CarRent:public Servicio
{
    public:
        CarRent();
        CarRent(char *pas, int dias, float tarif, char *matric);
        CarRent(const CarRent &c);
        virtual ~CarRent();
        virtual float CalcularIngreso();
        virtual Servicio* Clone()const;
        void operator=(const CarRent &other);
        friend ostream& operator<<(ostream &out,CarRent &c);
    protected:
    int Diasrent;
    float tarifa;      //POR DIA
    char matricula[7];
};

#endif // CARRENT_H
