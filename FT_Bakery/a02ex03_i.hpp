
/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

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
=======
#include "a02ex03_b.hpp"

using namespace std;

class Mortadella : public Food
   {
   private:
      string tipo;
      float peso;
      
   public:
      Mortadella(string, float, double);

      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */

