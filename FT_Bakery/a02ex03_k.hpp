//CERVEJA PILSEN

#ifndef A02EX03_K_H
   #define A02EX03_K_H

#include <string>
#include "a02ex03_j.hpp" //Arquivo da classe Beer

using namespace std;

class Pilsen : public Beer
   {
   private:
      string marca;
      
   public:
      Pilsen(string, string, int, double);
      virtual string getDescricao();
   };
   
#endif
