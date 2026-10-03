#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double S, k, n;
	S = 0;
	n = 1;
   
    while (n <= 18)
    {
        k = n; 
        while (k <= 20)
        {
            S += sqrt(abs(1.0 - 1.0 * k / n)) / (2 * n * n + k * k);
            k++; 
        }
        n++; 
    }
    cout << S << endl;
    
    S = 0;
    n = 1;

    do {
        k = n;
        do {
            S += sqrt(abs(1.0 - 1.0 * k / n)) / (2 * n * n + k * k);
            k++;
        } while (k <= 20);
        n++;
    } while (n <= 18);
    cout << S << endl;

    S = 0;
    for (n = 1; n <= 18; n++)
    {
        for (k = n; k <= 20; k++)
        {
            S += sqrt(abs(1.0 - 1.0 * k / n)) / (2 * n * n + k * k);
        }
    }
    cout << S << endl;

    S = 0;

    for (n = 18;n >= 1;n--)
    {
        for (k = 20;k >= n;k--) {
            S += sqrt(abs(1.0 - 1.0 * k / n)) / (2 * n * n + k * k);
        }
    }
    cout << S << endl;



    return 0;

}