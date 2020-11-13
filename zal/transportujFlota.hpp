#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
  int towar_p =0;
  int l_zaglowcow=0;
  if(towar!=0)
  while(towar_p>=towar){
  Stocznia stocznia{};
  Statek* s1 = stocznia();
  int p = s1->transportuj()
   towar_p+=p ;
   delete s1;
   if( dynamic_cast<Zaglowiec*>(s1) ){}
   l_zaglowcow ++;}
   std::cout<<"Towar przewieziony. Użyto "<<l_zaglowcow<<" żaglowców" ;
}