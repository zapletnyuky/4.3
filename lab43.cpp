#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
     double x, F, xp, xk, dx, a, b, c;

    cout << "a = "; cin >> a; 
    cout<< "b = ";cin >>b; 
    cout<< "c = ";cin >>c;
    cout << "xp = "; cin >> xp; 
    cout << "xk = "; cin >> xk; 
    cout << "dx = "; cin >> dx;
    x = xp;
   while ( x <= xk)
    {
        if (x<5 && c!=0)
        F = -a*x-b;
    else 
        if (x>5 && c==0)
            F = (x-a)/x;
        else 
            F= -x/c;
    cout << "F = " << F << endl; 
    cin.get();
    return 0;
    }
}