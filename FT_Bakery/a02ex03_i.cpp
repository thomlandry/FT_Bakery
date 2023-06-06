
/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "a02ex03_b.hpp"
#include <string>
#include "a02ex03_f.hpp"
#include "a02ex03_i.hpp"

using namespace std;

Soda::Soda(string tipo, int unidades, double valor) : Liquid(valor)
   {
   this->tipo     = tipo;
   this->unidades = unidades;
   };
   
string Soda::getDescricao()
   { 
   return ("Refrigerante " + tipo + " - " + to_string(unidades) + " un/pacote."); 
   };

Mortadella::Mortadella(string tipo, float peso, double valor) : Food(valor)
   {
   this->tipo = tipo;
   this->peso = peso;
   };
   
string Mortadella::getDescricao()
   { 
   return ("Mortadella " + tipo + " - " + to_string(peso) + " Kg."); 
   };
   
/* fim de arquivo */

