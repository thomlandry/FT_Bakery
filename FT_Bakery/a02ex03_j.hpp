//CLASSE BEER

#ifndef A02EX03_J_H
   #define A02EX03_J_H

#include <string>
#include "a02ex03_f.hpp" //Arquivo da classe Liquid

using namespace std;

class Beer : public Liquid
   {
   private:
      string tipo;
      int    unidades;
      
   public:
      Beer(string, int, double);
      virtual string getDescricao();
   };
   
#endif
