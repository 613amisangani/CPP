#include <iostream>
using namespace std;
int main()
{
  
  int i,j;
  cout << "enter value for:";
  cin >> i;
  for(i=1;i<=10;++i)
  {
   for(j=1;j<=5;++j)
   {
    if(i%2!=1)
   {
   cout <<i;
   }
   }
   cout << "\n";

  }
  
  return 0;
}