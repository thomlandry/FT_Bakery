//CLASSE SODA

#ifndef A02EX03_I_H
   #define A02EX03_I_H

#include <string>
#include "a02ex03_f.hpp" //Arquivo da classe Liquid

using namespace std;

class Soda : public Liquid
   {
   private:
      string tipo;
      int    unidades;
      
   public:
      Soda(string, int, double);
      virtual string getDescricao();
   };
   
#endif
