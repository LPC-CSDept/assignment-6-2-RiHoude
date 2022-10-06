//

#include <iomanip>
#include <iostream>
using namespace std;

// complete two functions
double nthpowerp(int n)
{
        int nthpower = 1;
        int i;
        for (i = 0; i < n; i++) {
                nthpower *= 2;
    }
    return nthpower;
}
double nthpowern(int n)
{
        int nthpower = 1;
        int i;
        float invertnthpower;
        n *= -1;
        for (i = 0; i < n; i++) {
                nthpower *= 2;
    }
        invertnthpower = 1.0/nthpower;
        return invertnthpower;
}
void printout(double result)
{
        cout << "The result is " << setw(10) << fixed << setprecision(5) << result << endl;
}
