#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
  if(towar!=0)
  int towar_p =0;
  while(towar_p>=towar){
  Stocznia stocznia{};
  Statek* s1 = stocznia();
   towar_p+ = s1->transportuj();
   delete s1;
   if( dynamic_cast<Zaglowiec>(s1) )
   int l_zaglowcow ++;
   return l_zaglowcow;}
   return std::cout<<"Towar przewieziony";
}