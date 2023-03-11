/*
  Archivo: Vagon.cpp
  Autor: Juan Esteban Clavijo García
  Email: juan.esteban.clavijo@correounivalle.edu.co
  Fecha creación: 2022-12-30
  Fecha última modificación: 2022-12-30
  Versión: 0.1
*/

#include "Vagon.h"

Vagon::Vagon(int numero, bool transporta_enfermos)
  : numero(numero), transporta_enfermos(transporta_enfermos)
{
  // No hay que hacer nada
}

Vagon::~Vagon()
{
  // No hay que hacer nada
}

string Vagon::cual_es_el_numero()
{
  string auxiliar = to_string(numero);
  return auxiliar;
}

bool Vagon::tiene_pasajeros_enfermos()
{
  return transporta_enfermos;
}