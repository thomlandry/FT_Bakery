//CERVEJA WEISSBIER

#ifndef A02EX03_N_H
   #define A02EX03_N_H

#include <string>
#include "a02ex03_j.hpp" //Arquivo da classe Beer

using namespace std;

class Weissbier : public Beer
   {
   private:
      string marca;
      
   public:
      Weissbier(string, string, int, double);
      virtual string getDescricao();
   };
   
#endif
