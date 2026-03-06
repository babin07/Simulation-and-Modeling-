#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double rho = -0.1945;
    double sigma = 0.1280;
    double z_critical = 1.96;

    cout << "AUTOCORRELATION TEST\n\n";

    cout << "Given Values:\n";
    cout << "rho_im = " << rho << endl;
    cout << "sigma = " << sigma << endl;
    cout << "Z critical = " << z_critical << endl;

    double Z = rho / sigma;

    cout << "\nStep 1: Calculate Test Statistic\n";
    cout << "Z = rho_im / sigma\n";
    cout << "Z = " << rho << " / " << sigma << endl;
    cout << "Z = " << Z << endl;

    cout << "\nStep 2: Decision Rule\n";
    cout << "Reject H0 if |Z| > 1.96\n";

    cout << "\nStep 3: Compare\n";
    cout << "|Z| = " << fabs(Z) << endl;

    if (fabs(Z) > z_critical)
        cout << "Reject H0 (Numbers are NOT independent)\n";
    else
        cout << "Do not Reject H0 (Numbers are independent)\n";

    return 0;
}
