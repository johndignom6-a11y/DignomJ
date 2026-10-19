#include <iostream>
#include <string>
using std::cin;
using std ::cout;
using std::string;

struct People {
	string name;
	int Bal;
};
int main() {
	int d;
	int n;
	int C;
	int w;
	int W;
	int N;
	int L;
	int T;
	int t;
	int p;

	People  name[4] = { { "Jack",5000 },{"Roy",5000},{ "Jane",5000},{ "Vale",5000} };

	cout << "            = Welcome To D's Bank = " << "\n";
	cout << "\n";
	cout << "          Name       |     Balance  " << "\n";
	cout << "\n";
	cout << "          " << name[0].name << "       |      " << name[0].Bal << "\n";
	cout << "          " << name[1].name << "        |      " << name[1].Bal << "\n";
	cout << "          " << name[2].name << "       |      " << name[2].Bal << "\n";
	cout << "          " << name[3].name << "       |      " << name[3].Bal << "\n";
	cout << "\n" << "\n";


	for (;;) {

		cout << "How may I help you (Pleas choose on the avalable Servicese)" << "\n";
		cout << "          Onliy type the number of your needed Service" << "\n" << "\n";
		cout << "1.Check Balance" << "\n" << "2.Deposite" << "\n" << "3.Withdraw" << "\n" << "4.Transfer" << "\n" << "5.Exit" << "\n";
		cout << "\n" << "\n" << "<<< ";
		cin >> C;


		if (C == 1) {

			cout << "What name::" << "\n";
			cout << "1.Jack" << "\n" << "2.Roy" << "\n" << "3.Jane" << "\n" << "4.Vale" << "\n" << "\n" << "\n";

			cin >> n;

			if (n == 1) {

				cout << "          " << name[0].name << "       |      " << name[0].Bal << "\n" << "\n" << "\n";
			}

			else if (n == 2)
			{
				cout << "          " << name[1].name << "        |      " << name[1].Bal << "\n" << "\n" << "\n";

			}
			else if (n == 3)
			{

				cout << "          " << name[2].name << "       |      " << name[2].Bal << "\n" << "\n" << "\n";

			}
			else if (n == 4)
			{
				cout << "          " << name[3].name << "       |      " << name[3].Bal << "\n" << "\n" << "\n" << "\n" << "\n" << "\n";
			}

			else if (n > 4 || n < 1) {
				cout << "You enter an invalid Number" << "\n" << "\n" << "\n";
			}

			else
				cout << "You input an invalid Caracter" << "\n" << "\n" << "\n";
		}

		else if (C == 2) {
			cout << "What name::" << "\n";
			cout << "1.Jack" << "\n" << "2.Roy" << "\n" << "3.Jane" << "\n" << "4.Vale" << "\n";
			cin >> N;
			if (N == 1) {

				cout << "How much would You want to deposite  <<";
				cin >> d;
				name[0].Bal += d;

				cout << "          " << name[0].name << "       |      " << name[0].Bal << "\n" << "\n" << "\n";
			}

			else if (N == 2)
			{
				cout << "How much would You want to deposite  <<";
				cin >> d;
				name[1].Bal += d;
				cout << "          " << name[1].name << "       |      " << name[1].Bal << "\n" << "\n" << "\n";
			}
			else if (N == 3)
			{

				cout << "How much would You want to deposite  <<";
				cin >> d;
				name[2].Bal += d;
				cout << "          " << name[2].name << "       |      " << name[2].Bal << "\n" << "\n" << "\n";
			}
			else if (N == 4)
			{
				cout << "How much would You want to deposite  <<";
				cin >> d;
				name[3].Bal += d;
				cout << "          " << name[3].name << "       |      " << name[3].Bal << "\n" << "\n" << "\n" << "\n" << "\n";
			}

			else if (N > 4 || N < 1) {
				cout << "You enter an invalid Number" << "\n" << "\n" << "\n";

			}
			else
				cout << "You input an invalid Caracter" << "\n" << "\n" << "\n";

		}

		else if (C == 3) {

			cout << "What name::" << "\n";
			cout << "1.Jack" << "\n" << "2.Roy" << "\n" << "3.Jane" << "\n" << "4.Vale" << "\n" << "\n";
			cin >> W;

			if (W == 1) {

				cout << "How much would You want to Withdraw  <<";
				cin >> w;
				if (w > name[0].Bal)
				{
					cout << "    This value Exceed your Balance  (NO Balance well be Deducted)" << "\n" << "\n" << "\n";
				}
				else if (w < name[0].Bal) {
					name[0].Bal -= w;

					cout << "          " << name[0].name << "       |      " << name[0].Bal << "\n" << "\n" << "\n";

				}
				else
					cout << "You input an invalid Caracter" << "\n" << "\n" << "\n";




			}

			else if (W == 2)
			{
				cout << "How much would You want to  Withdraw   <<";
				cin >> w;

				if (w > name[1].Bal)
				{
					cout << "    This value Exceed your Balance  (NO Balance well be Deducted)" << "\n" << "\n" << "\n";
				}
				else if (w < name[1].Bal) {

					name[1].Bal -= w;

					cout << "          " << name[1].name << "       |      " << name[1].Bal << "\n" << "\n" << "\n";

				}

				else
					cout << "You input an invalid Caracter" << "\n" << "\n" << "\n";


			}

			else if (W == 3)
			{

				cout << "How much would You want to  Withdraw   <<";
				cin >> w;
				if (w > name[2].Bal)
				{
					cout << "    This value Exceed your Balance  (NO Balance well be Deducted)" << "\n" << "\n" << "\n";
				}
				else if (w < name[2].Bal) {
					name[2].Bal -= w;
					cout << "          " << name[2].name << "       |      " << name[2].Bal << "\n" << "\n" << "\n";
				}
				else
					cout << "You input an invalid Caracter" << "\n" << "\n" << "\n";
			}


			else if (W == 4)
			{
				cout << "How much would You want to  Withdraw   <<";
				cin >> w;
				if (w > name[3].Bal)
				{
					cout << "    This value Exceed your Balance  (NO Balance well be Deducted)" << "\n" << "\n" << "\n";
				}
				else if (w < name[3].Bal)
				{
					name[3].Bal -= w;

					cout << "          " << name[3].name << "       |      " << name[3].Bal << "\n" << "\n" << "\n" << "\n" << "\n";
				}

				else if (w > 4 || w < 1)
				{
					cout << "You enter an invalid Number" << "\n" << "\n" << "\n";

				}
				else
					cout << "You input an invalid Caracter" << "\n" << "\n" << "\n";
			}
		}
		



		else if (C == 4) {
			cout << "What name is your accont::" << "\n";
			cout << "1.Jack" << "\n" << "2.Roy" << "\n" << "3.Jane" << "\n" << "4.Vale" << "\n" << "\n" << "\n";
			cin >> T;

			if (T == 1) {

				cout << "How much would You want to Transfer  <<";
				cin >> t;
				if (t > name[0].Bal)
				{
					cout << "    This value Exceed your Balance  (NO Balance well be Deducted)" << "\n" << "\n" << "\n";

				}
				else if (t < name[0].Bal) {

					name[0].Bal -= t;
					cout << "Your Balance is poydi na Kaninsa ni e Pasa " << "\n" << "\n" << "\n" << "1.Roy" << "\n" << "2.Jane" << "\n" << "3.Vale" << "\n" << "\n" << "\n";
					cin >> p;

					if (p == 1) {
						name[1].Bal += t;
						cout << "          " << name[0].name << "       |      " << name[0].Bal << "\n" << "\n" << "\n";
					}
					else if (p == 2) {
						name[2].Bal += t;
						cout << "          " << name[0].name << "       |      " << name[0].Bal << "\n" << "\n" << "\n";
					}
					else if (p == 3) {
						name[3].Bal += t;

						cout << "          " << name[0].name << "       |      " << name[0].Bal << "\n" << "\n" << "\n";
					}

					else
						cout << "You enter an invalid Number" << "\n" << "\n" << "\n";
				}
			}


			else if (T == 2) {

					cout << "How much would You want to Transfer  <<";
					cin >> t;
					if (t > name[1].Bal)
					{
						cout << "    This value Exceed your Balance  (NO Balance well be Deducted)" << "\n" << "\n" << "\n";
					}
					else if (t < name[1].Bal) {
						name[1].Bal -= t;
						cout << "Your Balance is poydi na Kaninsa ni e Pasa " << "\n" << "\n" << "\n" << "1.Jack" << "\n" << "2.Jane" << "\n" << "3.Vale" << "\n" << "\n" << "\n";
						cin >> p;

						if (p == 1) {
							name[0].Bal += t;
							cout << "          " << name[1].name << "       |      " << name[1].Bal << "\n" << "\n" << "\n";
						}
						else if (p == 2) {
							name[2].Bal += t;
							cout << "          " << name[1].name << "       |      " << name[1].Bal << "\n" << "\n" << "\n";
						}
						else if (p == 3) name[3].Bal += t;

						cout << "          " << name[1].name << "       |      " << name[1].Bal << "\n" << "\n" << "\n";
					}
					else
						cout << "You enter an invalid Number" << "\n" << "\n" << "\n";

			}




				else if (T == 3) {

					cout << "How much would You want to Transfer  <<";
					cin >> t;
					if (t > name[2].Bal)
					{
						cout << "    This value Exceed your Balance  (NO Balance well be Deducted)" << "\n" << "\n" << "\n";
					}
					else if (t < name[2].Bal) {
						name[2].Bal -= t;
						cout << "Your Balance is poydi na Kaninsa ni e Pasa " << "\n" << "\n" << "\n" << "1.Jack" << "\n" << "2.Roy" << "\n" << "\n" << "3.Vale" << "\n" << "\n";
						cin >> p;

						if (p == 1) {
							name[0].Bal += t;
							cout << "          " << name[2].name << "       |      " << name[2].Bal << "\n" << "\n" << "\n";
						}
						else if (p == 2) {
							name[1].Bal += t;
							cout << "          " << name[2].name << "       |      " << name[2].Bal << "\n" << "\n" << "\n";
						}
						else if (p == 3)
						{
							name[3].Bal += t;

							cout << "          " << name[2].name << "       |      " << name[2].Bal << "\n" << "\n" << "\n";
						}
						else
							cout << "You enter an invalid Number" << "\n" << "\n" << "\n";

					}
				}




					else if (T == 4) {

						cout << "How much would You want to Transfer  <<";
						cin >> t;
						if (t > name[3].Bal)
						{
							cout << "    This value Exceed your Balance  (NO Balance well be Deducted)" << "\n" << "\n" << "\n";
						}
						else if (t < name[3].Bal) {
							name[3].Bal -= t;
							cout << "Your Balance is poydi na Kaninsa ni e Pasa " << "\n" << "\n" << "\n" << "1.Jack" << "\n" << "2.Roy" << "\n" << "3.Jane" << "\n" << "\n" << "\n";
							cin >> p;

							if (p == 1) {
								name[0].Bal += t;
								cout << "          " << name[3].name << "       |      " << name[3].Bal << "\n" << "\n" << "\n";
							}
							else if (p == 2) {
								name[1].Bal += t;
								cout << "          " << name[3].name << "       |      " << name[3].Bal << "\n" << "\n" << "\n";
							}
							else if (p == 3) {
								name[2].Bal += t;
								cout << "          " << name[3].name << "       |      " << name[3].Bal << "\n" << "\n" << "\n";
							}

						}
						else
							cout << "You enter an invalid Number" << "\n" << "\n" << "\n";



					}
					else
						cout << "You input an invalid Caracter" << "\n" << "\n" << "\n";

				


		}
			
	
		else if (C == 5)
		{
			for (int z = 0;z <= 5;z++) {
				cout << "      Samalat Nahuman ra gyud 3 na sa BUNTAG   "<< "\n" <<"\n";
			

				
			}break;

			
		}
			
		if (cin.fail()) {
			cout << "You input an invalid Caracter" << "\n" << "\n" << "\n";
			break;
		}

		
		
	}
	


	return 0;

}



		
	
