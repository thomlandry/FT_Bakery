/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "a02ex03_b.hpp"
#include "a02ex03_f.hpp"

using namespace std;

Cheese::Cheese(string tipo, float peso, double valor) : Food(valor)
   {
   this->tipo = tipo;
   this->peso = peso;
   };
   
string Cheese::getDescricao()
   { 
   return ("Queijo " + tipo + " - " + to_string(peso) + " Kg."); 
   };
   
/* fim de arquivo */