#include <iostream>
using namespace std;
#include "employee.h"
#include "pc.h"

class boss : public employee
{
  public:
  
    pc b_pc;
     boss (office *o):employee(o)
    {
      b_pc.turn_on();
      cout<<"BOSS :: BOSS()"<<endl;
    }
    ~boss()
    {
      cout<<"BOSS::~BOSS()"<<endl;
    }
  
};