#ifndef SERVICIO_H
#define SERVICIO_H


class Servicio
{
    public:
        Servicio();
        virtual ~Servicio();
        virtual float CalcularIngreso()=0;
        virtual Servicio* Clone()const =0;
        bool set(const char *mod);
    protected:
char pasaporte[8];
};

#endif // SERVICIO_H
