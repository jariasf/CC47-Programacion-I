#include <iostream>
using namespace std;

int main() {

    int num_neumaticos;
    cout << "Ingrese el numero de neumaticos: ";
    cin >> num_neumaticos;

    bool menor3 = (num_neumaticos < 3);
    bool entre3y5 = (3 <= num_neumaticos && num_neumaticos <= 5);
    bool mayor5 = (num_neumaticos > 5);

    int res_menor3 = 145 * num_neumaticos;
    int res_entre3y5 = 138 * num_neumaticos;
    int res_mayor5 = 135 * num_neumaticos;

    int monto_total = menor3 * res_menor3 + entre3y5 * res_entre3y5 + mayor5 * res_mayor5;

    cout << "El monto total es: " << monto_total << endl;

    return 0;
}