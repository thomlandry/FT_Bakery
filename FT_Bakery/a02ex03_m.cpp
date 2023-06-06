//IMPLEMENTAÇÃO CONSTRUTOR E DESCRIÇAO DA CERVEJA Bock

#include <string>
#include "a02ex03_j.hpp"
#include "a02ex03_m.hpp"

using namespace std;

Bock::Bock(string tipo, string marca, int unidades, double valor) : Beer(tipo, unidades, valor)
   {
   this->marca = marca;
   };
   
string Bock::getDescricao()
   { 
   return ("Cerveja Bock" + marca + " - " + Beer::getDescricao()); 
   };
