#include <iostream>
using namespace std;

class office
{

  public :
  office()
  {
    cout<<"OFFICE CONSTRUCTOR :: ~OFFICE()"<<endl;
  }

  ~office()
  {
    cout<<"OFFICE  DESTRUCTOR :: ~office()"<<endl;
  }
};