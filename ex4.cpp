#include <iostream>
using namespace std;
double temperature(double celsius)
{
   return 1.8 * celsius + 32;
}
int main()
{
   double fahrenheit;
   double celsius;
   cout << "enter temperature in Celsius\n";
   cin >> celsius;
   fahrenheit = temperature(celsius);
   cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
}
