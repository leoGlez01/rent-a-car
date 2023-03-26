#ifndef TAXI_H
#define TAXI_H
#include "Servicio.h"
#include <iostream>
using namespace std;

class Taxi: public Servicio
{
    public:
        Taxi();
        Taxi(char* pas, float km1, float tarifa, char* name);
        Taxi(const Taxi &T);
        virtual ~Taxi();
        virtual float CalcularIngreso();
        virtual Servicio* Clone()const;
        friend ostream& operator<<(ostream &out, Taxi &t);
        void operator=(const Taxi &other);
    protected:
    float tarifa;        //POR km
    float km;
    char *choferName;
};

#endif // TAXI_H
