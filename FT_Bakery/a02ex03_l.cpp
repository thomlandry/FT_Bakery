//IMPLEMENTAÇÃO CONSTRUTOR E DESCRIÇAO DA CERVEJA LAGER

#include <string>
#include "a02ex03_j.hpp"
#include "a02ex03_l.hpp"

using namespace std;

Lager::Lager(string tipo, string marca, int unidades, double valor) : Beer(tipo, unidades, valor)
   {
   this->marca = marca;
   };
   
string Lager::getDescricao()
   { 
   return ("Cerveja Lager" + marca + " - " + Beer::getDescricao()); 
   };
