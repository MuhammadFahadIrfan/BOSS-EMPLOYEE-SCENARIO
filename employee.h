#include <iostream>
using namespace std;
#include "desk.h"
#include "office.h"

class employee
{
  public:
  desk e_desk;
  office *s_office;

  employee(office *o)
  {
    s_office =o;
    cout<<"EMPLOYEE()::EMPLOYEE"<<endl;
  }

virtual ~ employee()
{
  cout<<"EMPLOYEE() DESTRUCTOR ::virtual ~EMPLOYEE()"<<endl;

}

};