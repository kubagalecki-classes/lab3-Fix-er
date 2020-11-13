#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
  int towar_p =0;
  int l_zaglowcow=0;
  if(towar!=0){
  while(towar<=towar_p){
  Stocznia stocznia{};
  Statek* s1 = stocznia();
  int p= s1->transportuj(); 
  delete s1;
  if(dynamic_cast<Zaglowiec*>(s1)){}
  l_zaglowcow ++;}
  std::cout<<"Towar przewieziony. "<<p<< "Użyto "<<l_zaglowcow<<" żaglowców" ;
} else{std::cout<<"Brak towaru";}}