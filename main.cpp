#include <iostream>

#include <cmath>

#include <iomanip>



using namespace std;

// m = periodicity of mortgage payment (periods per year)

// Prin = principal

// r = interest as decimal

// T = maturity of mortgage in years





int main()

{

	const int m = 12;

	double Prin = 120000;

	double r = 0.05;

	int T = 30;



	double payment = 0.0;



	double sqrb = (1 - (pow(1 + r/m,-m*T)))/(r/m);

	payment = Prin /sqrb ;



	cout << "Mortgage Payment : " << setiosflags(ios::fixed) <<

	     setprecision(3) << payment << endl;



	double CI = 0.0;

	double CP = 0.0;

	double Bal = 0.0;



	Bal = Prin;



	long CM = 1;



	while(CM <= m*T) {



		CI = Bal * r/m;

		CP = payment - CI;

		Bal = Bal - CP;



		cout << "CM: " << CM <<

		     " CI: " << CI <<

		     " CP: " << CP <<

		     " Bal: " << Bal <<

		     endl;



		CM++;

	}



	cout << "Maturity reached." << endl;



	return 0;

}