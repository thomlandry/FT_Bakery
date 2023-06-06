//IMPLEMENTAÇÃO CONSTRUTOR E DESCRIÇAO DE BEER

#include <string>
#include "a02ex03_j.hpp"
#include "a02ex03_f.hpp"

using namespace std;

Beer::Beer(string tipo, int unidades, double valor) : Liquid(valor)
   {
   this->tipo     = tipo;
   this->unidades = unidades;
   };
   
string Beer::getDescricao()
   { 
   return ("Cerveja " + tipo + " - " + to_string(unidades) + " un/pacote."); 
   };
