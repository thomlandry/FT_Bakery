//CLASSE WATER

#ifndef A02EX03_H_H
   #define A02EX03_H_H

#include <string>
#include "a02ex03_f.hpp" //Arquivo da classe Liquid

using namespace std;

class Water : public Liquid
   {
   private:
      string tipo;
      int    unidades;
      
   public:
      Water(string, int, double);
      virtual string getDescricao();
   };
   
#endif
