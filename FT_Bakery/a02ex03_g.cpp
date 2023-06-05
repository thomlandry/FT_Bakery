/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "a02ex03_f.hpp"
#include "a02ex03_g.hpp"

using namespace std;

CottageCheese::CottageCheese(string tipo, string recheio, int unidades, double valor) : Cheese(tipo, unidades, valor)
   {
   this->recheio = recheio;
   };
   
string CottageCheese::getDescricao()
   { 
   return ("Bolacha Recheada com " + recheio + " - " + Cheese::getDescricao()); 
   };
   
/* fim de arquivo */