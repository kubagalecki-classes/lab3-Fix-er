#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
  int* towar_p =0;
  int l_zaglowcow=0;
  if(towar!=0){
 //while(towar>=towar_p)
 for(int i=0;i<5;i++){
  Stocznia stocznia{};
  Statek* s1 = stocznia();
  towar_p=+s1->transportuj();   
  if(dynamic_cast<Zaglowiec*>(s1)){
  l_zaglowcow ++;}
  delete s1;}
  std::cout<<"Towar przewieziony. "<<towar_p<< "Użyto "<<l_zaglowcow<<" żaglowców" ;
}}