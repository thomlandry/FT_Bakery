/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "a02ex03_b.hpp"
#include "a02ex03_h.hpp"

using namespace std;

Ham::Ham(string tipo, float peso, double valor) : Food(valor)
   {
   this->tipo = tipo;
   this->peso = peso;
   };
   
string Ham::getDescricao()
   { 
   return ("Ham " + tipo + " - " + to_string(peso) + " Kg."); 
   };
   
/* fim de arquivo */