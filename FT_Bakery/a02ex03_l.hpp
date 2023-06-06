//CERVEJA LAGER

#ifndef A02EX03_L_H
   #define A02EX03_L_H

#include <string>
#include "a02ex03_j.hpp" //Arquivo da classe Beer

using namespace std;

class Lager : public Beer
   {
   private:
      string marca;
      
   public:
      Lager(string, string, int, double);
      virtual string getDescricao();
   };
   
#endif
