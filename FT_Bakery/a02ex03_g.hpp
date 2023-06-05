//CLASSE MILK

#ifndef A02EX03_G_H
   #define A02EX03_G_H

#include <string>
#include "a02ex03_f.hpp" //Arquivo da classe Liquid

using namespace std;

class Milk : public Liquid
   {
   private:
      string tipo;
      int    unidades;
      
   public:
      Milk(string, int, double);
      virtual string getDescricao();
   };
   
#endif
