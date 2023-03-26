#include "ServiciosDiarios.h"
#include "Servicio.h"
ServiciosDiarios::ServiciosDiarios()
{
    cant=0;
    cap=1;
    data = new Servicio*[1];
}

ServiciosDiarios::ServiciosDiarios(const ServiciosDiarios &ser)
{
    cant=ser.cant;
    cap=ser.cap;
    data=new Servicio*[cap];
    for(int i=0;i<cant;i++)
    {
        data[i]=ser.data[i]->Clone();
    }
}
ServiciosDiarios::~ServiciosDiarios()
{
    for(int i=0;i<cant;i++)
    {
        delete data[i];
    }
    delete []data;
}

bool ServiciosDiarios::push( Servicio *s)
{
    if(cant==cap)
    {
        Servicio** ptr=new Servicio*[cap +1];
        cap+=1;
        for(int i=0;i<cant;i++)
        {
           ptr[i]=data[i];
        }
        delete [] data;
        data=ptr;
        cap+=1;
    }
    data[cant]=s;
    cant=cant+1;
    return true;
}
Servicio& ServiciosDiarios::at(int i)const
{
    return *data[i];
}
void ServiciosDiarios::operator=(const ServiciosDiarios &s)
{
    cant=s.cant;
    cap=s.cap;
    data=new Servicio*[cap];
    for(int i=0;i<cant;i++)
    {
        data[i]=s.data[i]->Clone();
    }
}
