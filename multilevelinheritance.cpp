#include<iostream>
using namespace std;
class base1
{
  protected:
  int a;
  public:
  void seta()
  {
    cout <<"enter a:";
    cin>>a;
  }
};
class base2 : public base1
{
  protected:
  int b;
  public:
  void setb()
  {
    cout <<"enter b:";
    cin>>b;
  }
};
class derived:public base2
{
  public:
  void getproduct()
  {
    cout<<"product of a and b is "<<a*b<<endl;
  }
};
int main()
{
    derived d;
    d.seta();
    d.setb();
    d.getproduct();
}