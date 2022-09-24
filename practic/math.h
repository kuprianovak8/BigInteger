#ifndef MATH_H
#define MATH_H
#include <iostream>
#include <string>
using namespace std;

template <typename T, typename T2>
class mathh
{
private:
 T a;
 T2 b;

public:
 mathh (T a, T2 b)
 {
   this->a = a;
   this->b = b;
 }

     T Sum (T a, T2 b)
     {
         T res;
         res = a + b;
        // cout << "res = " << res << endl;
     }

// void Sum (T a,T b)
// {
//   T res;
//   cout << "r= " <<  res (a +b) << endl;
// }

};

int main()
{
  int a = 2;
  int b = 2;

    //cout << Sum (4,5) << endl;

    mathh <int, int> c(a, b);
    c.Sum <int>(a, b);

   cout << "c = " << (a,b) << endl;

    return 0;
}

#endif // MATH_H
