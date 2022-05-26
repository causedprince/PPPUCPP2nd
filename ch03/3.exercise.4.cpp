#include <iostream>
#include <cmath>
#include <stdlib.h>



using namespace std;

int main()
{
  cout << "Enter two integer values: \n";
  int val1;
  int val2;
  cin >> val1 >> val2;
  cout << "sum of val1 and val2 = " << val1+val2;
  cout << "\ndifference of val1 and val2 and vice versa = " << val1-val2 << "," << val2-val1;
  cout << "\nproduct of val1 and val2 = " << val1*val2;
  cout << "\nratio of val1 and val2 and vice versa = " << val1/val2 << "," << val2/val1;
  cout << "\nlarger of both values = " << max(val1,val2);
  cout << "\nsmaller of both values = " << min(val1,val2);


return 0;
}
