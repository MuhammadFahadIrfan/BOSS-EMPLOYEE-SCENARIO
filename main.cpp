#include <iostream>
#include "boss.h"
using namespace std;

int main()
{
  office *poff=new office();
  boss *pboss=new boss(poff);
  cout<<"DESTRUCTORS ARE CALLED"<<endl<<endl;
  delete pboss;
  cout<<"POLYMORPHISM HERE"<<endl<<endl;
  employee *pemployee=new boss(poff);
  cout<<endl<<"DETRUCTOR CALLED"<<endl;
  delete pemployee;
  system("pause");


}