#include <iostream>
using namespace std;

class pc
{
  public:
  pc()
  {
    cout<<"PC CONSTRUCTOR ::PC()"<<endl;
  }

  void turn_on()
  {
    cout<<"turned_on PC "<<endl;
  }
  void turn_off()
  {
    cout<<"turned_off PC"<<endl;
  }

  ~pc()
  {
    cout<<"PC DESTRUCTOR :: ~PC()"<<endl;
  }
};