//CERVEJA BOCK

#ifndef A02EX03_M_H
   #define A02EX03_M_H

#include <string>
#include "a02ex03_j.hpp" //Arquivo da classe Beer

using namespace std;

class Bock : public Beer
   {
   private:
      string marca;
      
   public:
      Bock(string, string, int, double);
      virtual string getDescricao();
   };
   
#endif
