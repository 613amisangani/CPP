#include <iostream>
using namespace std;
int main()
{
  
  int i,j,k=1;
  
  for(i=1;i<=5;i++)
  {
   for(j=1;j<=i;j++)
   {
   if(k%2==1)
   {
   cout << "1";
   }
   else
   {
     cout << "0";
   }
   k++;
   }
   cout << "\n";

  }
  
  return 0;
}

/*
1
01
010
1010
10101

*/