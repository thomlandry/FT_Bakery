//IMPLEMENTAÇÃO CONSTRUTOR E DESCRIÇAO DE SODA

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
