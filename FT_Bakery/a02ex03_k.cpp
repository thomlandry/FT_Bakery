//IMPLEMENTAÇÃO CONSTRUTOR E DESCRIÇAO DA CERVEJA PILSEN

#include <string>
#include "a02ex03_j.hpp"
#include "a02ex03_k.hpp"

using namespace std;

Pilsen::Pilsen(string tipo, string marca, int unidades, double valor) : Beer(tipo, unidades, valor)
   {
   this->marca = marca;
   };
   
string Pilsen::getDescricao()
   { 
   return ("Cerveja Pilsen" + marca + " - " + Beer::getDescricao()); 
   };
