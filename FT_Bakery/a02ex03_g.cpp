//IMPLEMENTAÇÃO CONSTRUTOR E DESCRIÇAO DE MILK

#include <string>
#include "a02ex03_g.hpp"
#include "a02ex03_f.hpp"

using namespace std;

Milk::Milk(string tipo, int unidades, double valor) : Liquid(valor)
   {
   this->tipo     = tipo;
   this->unidades = unidades;
   };
   
string Milk::getDescricao()
   { 
   return ("Leite " + tipo + " - " + to_string(unidades) + " un/pacote."); 
   };
   
