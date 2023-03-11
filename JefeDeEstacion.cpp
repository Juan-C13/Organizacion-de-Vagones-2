/*
  Archivo: JefeDeEstacion.cpp
  Autor: Juan Esteban Clavijo García
  Email: juan.esteban.clavijo@correounivalle.edu.co
  Fecha creación: 2022-12-30
  Fecha última modificación: 2022-12-30
  Versión: 0.1
*/

#include "JefeDeEstacion.h"
using namespace std;

JefeDeEstacion::JefeDeEstacion(Via *via_Principal, Via *ramal_Izquierdo, Via *ramal_Derecho)
  : via_Principal(via_Principal), ramal_Izquierdo(ramal_Izquierdo), ramal_Derecho(ramal_Derecho)
{
  // No hay que hacer nada
}

JefeDeEstacion::~JefeDeEstacion()
{
  via_Principal = nullptr;
  ramal_Izquierdo = nullptr;
  ramal_Derecho = nullptr;
}

void JefeDeEstacion::organizarTren()
{
  int auxiliar_2 = via_Principal->dimeCuantosVagonesHay();
  
  for(int cuantas_veces=0; cuantas_veces < auxiliar_2; cuantas_veces++)
  {
    Vagon *auxiliar = (via_Principal->sacar_vagon());
    
    if(auxiliar->tiene_pasajeros_enfermos())
      ramal_Derecho->introducirVagon(auxiliar);
    else
      ramal_Izquierdo->introducirVagon(auxiliar);
  }

  auxiliar_2 = ramal_Izquierdo->dimeCuantosVagonesHay();
  
  for(int cuantas_veces=0; cuantas_veces < auxiliar_2; cuantas_veces++)
  {
    via_Principal->avanzarDesde(ramal_Izquierdo);
  }

  auxiliar_2 = ramal_Derecho->dimeCuantosVagonesHay();
  
  for(int cuantas_veces=0; cuantas_veces < auxiliar_2; cuantas_veces++ )
  {
    via_Principal->avanzarDesde(ramal_Derecho);
  }
}