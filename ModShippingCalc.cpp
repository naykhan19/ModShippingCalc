// ModShippingCalc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <string>

#include <algorithm>

using namespace std;

int main() {

	//store total cost of shipping

	double totalCost = 0;

	//store item name

	string itemName;

	cout << "Please enter the item name (no spaces)........:";

	cin >> itemName;

	//check if is fragile

	char isFragile;

	cout << "Is the item fragile ( y =yes/n=no)............:";

	cin >> isFragile;

	//if yes add two

	if (isFragile == 'y' || isFragile == 'Y') {

		totalCost += 2;

	}
	else if (isFragile != 'n' || isFragile != 'N') { //else show error

		cout << "Invalid entry, exiting" << endl;

		return 0;

	}

	//get order total

	double orderTotal;

	cout << "Please enter your order total.................:";

	cin >> orderTotal;

	string destination;

	cout << "Please enter destination. (usa/can/aus/moon).......:";

	cin >> destination;

	//change to upper case all

	transform(destination.begin(), destination.end(), destination.begin(), ::toupper);

	transform(itemName.begin(), itemName.end(), itemName.begin(), ::toupper);

	if (destination.compare("USA") == 0) {

		if (orderTotal <= 50.00) {

			totalCost += 6;

		}
		else if (orderTotal <= 100) {

			totalCost += 9;

		}
		else if (orderTotal <= 150) {

			totalCost += 12;

		}

	}
	else if (destination.compare("CAN") == 0) {

		if (orderTotal <= 50.00) {

			totalCost += 8;

		}
		else if (orderTotal <= 100) {

			totalCost += 12;

		}
		else if (orderTotal <= 150) {

			totalCost += 15;

		}

	}
	else if (destination.compare("AUS") == 0) {

		if (orderTotal <= 50.00) {

			totalCost += 10;

		}
		else if (orderTotal <= 100) {

			totalCost += 14;

		}
		else if (orderTotal <= 150) {

			totalCost += 17;

		}
	}
	
	else if (destination.compare("MOON") == 0) {

			if (orderTotal <= 50.00) {

				totalCost += 40;

			}
			else if (orderTotal <= 100) {

				totalCost += 60;

			}
			else if (orderTotal <= 150) {

				totalCost += 80;

			}

	}

	else {

		cout << "Invalid entry, exiting" << endl;

		return 0;

	}

	cout << "Your item is ................................" << itemName << endl;

	cout << "Your shipping cost is .......................$" << totalCost << endl;

	cout << "You are shipping to.........................." << destination << endl;

	cout << "Your total shipping costs are................$" << totalCost + orderTotal << endl;

	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
