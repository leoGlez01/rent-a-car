#include "Servicio.h"
#include <cstring>

Servicio::Servicio()
{
    strcpy(pasaporte, "pas00");
}

Servicio::~Servicio()
{
    delete []pasaporte;
}

bool Servicio::set(const char *mod)
{
   strcpy(pasaporte, mod);
}
