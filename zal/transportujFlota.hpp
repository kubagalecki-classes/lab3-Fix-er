#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
  int towar_p =0;
  int l_zaglowcow=0;
  if(towar!=0){
 while(towar>=towar_p){
 //for(int i=0;i<5;i++){
  Stocznia stocznia{};
  Statek* s1 = stocznia();
  int a=s1->transportuj(); 
  towar_p+=a;  
  if(dynamic_cast<Zaglowiec*>(s1)){
  l_zaglowcow= l_zaglowcow+1;
   }  delete s1;}
  std::cout<<"Towar przewieziony. "<<towar_p<<" "<<towar<< "Użyto "<<l_zaglowcow<<" żaglowców" ;
}}