#include <string>
#include <vector>
#include <iostream>
#include <iomanip>
#include <cstdlib>

#include "FT_bakery.hpp"
#include "a02ex00.hpp"
#include "a02ex01_a.hpp"
#include "a02ex03.hpp"
#include "a02ex03_a.hpp"
#include "a02ex03_b.hpp"
#include "a02ex03_c.hpp"
#include "a02ex03_d.hpp"
#include "a02ex03_e.hpp"
#include "a02ex03_f.hpp"
#include "a02ex03_g.hpp"
#include "a02ex03_h.hpp"
#include "a02ex03_i.hpp"

void MyProgram::verifyArguments(int argc, char* argv[])
{
   if(verboseMode)                     { delete verboseMode;         };
   if(shortMessageMode)                { delete shortMessageMode;    };

   verboseMode      = NULL;
   shortMessageMode = NULL;

   for(int count = 1; count < argc; count++)
      {
      if(string(argv[count]) == "-v") { verboseMode      = new MyBooleanClass(true); };
      if(string(argv[count]) == "-s") { shortMessageMode = new MyBooleanClass(true); };
      };

   if(!verboseMode)                    { verboseMode      = new MyBooleanClass();     };  // default is false
   if(!shortMessageMode)               { shortMessageMode = new MyBooleanClass();     };  // default is false
}

int main(int argc, char* argv[])
{
    MyProgram *p;
    p = new MyProgram();
    p->verifyArguments(argc, argv);
    bool setVerboseMode(bool verboseMode);
    bool setshortMessageMode(bool shortMessageMode);
    p->start(argc, argv);

return 0;
}
