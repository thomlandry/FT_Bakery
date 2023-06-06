//IMPLEMENTAÇÃO CONSTRUTOR E DESCRIÇAO DA CERVEJA Weissbier

#include <string>
#include "a02ex03_j.hpp" //arquivo da classe Beer
#include "a02ex03_n.hpp"

using namespace std;

Weissbier::Weissbier(string tipo, string marca, int unidades, double valor) : Beer(tipo, unidades, valor)
   {
   this->marca = marca;
   };
   
string Weissbier::getDescricao()
   { 
   return ("Cerveja Weissbier" + marca + " - " + Beer::getDescricao()); 
   };
