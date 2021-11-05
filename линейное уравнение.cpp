#include <iostream>
using namespace std;

void equation(double a, double b)
{
    if (a == 0, b == 0){
        cout << "bezlich" << endl;
    }
    else if (a == 0){
        cout << "nema" << endl;
    }
     else {
        double x = -b / a; 
        cout << "x = " << x << endl; 
     }
}

int main()
{
    double a, b; 
    a = 0;
    b = 0;
     
    
        cout << "Линейное уравнение: a * x + b = 0" << endl; 
        cout << "a * x = -b" << endl;
        cout << "x = -b/a" << endl;
      
    equation(a, b); 

}