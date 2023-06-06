/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef A02EX03_G_H
   #define A02EX03_G_H

#include <string>
#include "a02ex03_f.hpp"

using namespace std;

class CottageCheese : public Cheese
   {
   private:
      string recheio;
      
   public:
      CottageCheese(string, string, int, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */