#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
  if(towar!=0){
  int towar_p =0;
  int l_zaglowcow=0;  
 while(towar>=towar_p){
  Stocznia stocznia{};
  Statek* s1 = stocznia();
  int a=s1->transportuj(); 
  towar_p+=a;  
  if(dynamic_cast<Statek.Zaglowiec*>(s1));{
  
 // if(typeid(*s1) == typeid(Zaglowiec)){    
  l_zaglowcow++;}
  delete s1;}
  return l_zaglowcow;
}return 0;}