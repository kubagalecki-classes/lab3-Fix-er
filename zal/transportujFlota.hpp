#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
  int towar_p =0;
  int l_zaglowcow=0;
  if(towar!=0){
 while(towar>=towar_p){
  Stocznia stocznia{};
  Statek* s1 = stocznia();
  int a=s1->transportuj(); 
  towar_p+=a;  
  //if(dynamic_cast<Zaglowiec*>(s1)){    
  l_zaglowcow++;
  return l_zaglowcow;
  delete s1;}
}}