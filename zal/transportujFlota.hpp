#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
  if(towar!=0)
  int towar_p =0;
  int l_zaglowcow=0;
  while(towar_p>=towar){
  Stocznia stocznia{};
  Statek* s1 = stocznia();
   towar_p+ = s1->transportuj();
   delete s1;
   if( dynamic_cast<Zaglowiec>(s1) ){}
   l_zaglowcow ++;}
   std::cout<<"Towar przewieziony. Użyto "<<l_zaglowcow<<" żaglowców" ;
}