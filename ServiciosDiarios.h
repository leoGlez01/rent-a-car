#ifndef SERVICIOSDIARIOS_H
#define SERVICIOSDIARIOS_H
#include "Servicio.h"
using namespace std;
class ServiciosDiarios
{
    public:
        ServiciosDiarios();
        ServiciosDiarios (const ServiciosDiarios&);
        virtual ~ServiciosDiarios();
        bool push( Servicio *s);
        Servicio& at(int i)const;
        void operator=(const ServiciosDiarios &S);
    protected:
        int cant;
        int cap;
        Servicio **data;
};

#endif // SERVICIOSDIARIOS_H
