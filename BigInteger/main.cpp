#include <iostream>
#include <mathematic.h>

using namespace std;

int main()
{
    mathematic math;
    int a = 2;
    int b = 4;
    //int res = math.Sum <int, int> (a, b);
    int r = math.Sum2 (a, b);
    double x = 0.4;
    double z = 1.3;
    double res2 = math.Sum2(x,z);
    cout << endl << "res= " << r << endl << "res= " << res2;

    return 0;
}
