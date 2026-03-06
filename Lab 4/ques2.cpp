#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int observed[3] = {680, 289, 31};
    double expected[3] = {720, 270, 10};
    double chi_square = 0;
    double chi_critical = 5.99;

    cout << "POKER TEST USING CHI-SQUARE\n\n";

    cout << "Category\tObserved\tExpected\t(O-E)^2/E\n";

    for(int i=0;i<3;i++)
    {
        double value = pow(observed[i] - expected[i],2) / expected[i];
        chi_square += value;

        cout << i+1 << "\t\t"
             << observed[i] << "\t\t"
             << expected[i] << "\t\t"
             << value << endl;
    }

    cout << "\nChi-Square Statistic = " << chi_square << endl;
    cout << "Critical Value = " << chi_critical << endl;

    if(chi_square > chi_critical)
        cout << "\nReject H0 (Numbers are NOT independent)\n";
    else
        cout << "\nDo not Reject H0 (Numbers are independent)\n";

    return 0;
}
