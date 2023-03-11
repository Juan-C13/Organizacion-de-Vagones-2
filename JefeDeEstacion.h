/*
  Archivo: JefeDeEstacion.h
  Autor: Juan Esteban Clavijo García
  Email: juan.esteban.clavijo@correounivalle.edu.co
  Fecha creación: 2022-12-30
  Fecha última modificación: 2022-12-30
  Versión: 0.1
*/

/**
  CLASE: JefeDeEstacion
  INTENCIÓN: Estoy modelando un jefe de estación, el cual conoce las vías con las que trabaja. Se le puede pedir que organice el tren, colocando los vagones que transportan pasajeros enfermos de últimos, y de primeros los que no tienen enfermos.
  RELACIONES: Conoce vías
*/

#include <string>
#include "Via.h"

using namespace std;

#ifndef HH_JEFEDEESTACION
#define HH_JEFEDEESTACION

class JefeDeEstacion
{
  private:
  Via *via_Principal = nullptr;
  Via *ramal_Izquierdo = nullptr;
  Via *ramal_Derecho = nullptr;

  public:
  /**
  Constructor: Construye un jefe de estación, el cual conoce las 3 vías a usar, como está recién creado, aún no conoce las vías.
  */
  JefeDeEstacion(Via *via_Principal, Via *ramal_Izquierdo, Via *ramal_Derecho);
  /**
  Destructor: No hace nada.
  */
  virtual ~JefeDeEstacion();
  /**
  Organiza los vagones, colocando de primeros los que no tienen pasajeros enfermos, y de últimos los que sí tienen.
  */
  virtual void organizarTren();
};

#else
class JefeDeEstacion;
#endif
