#include <iostream>

	

	int userCurrency;
	int convertingCurrency;
	float moneyAmount;
	float currenciesV[] = { 1, 0.88, 4.1 };
	std::string currenciesN[] = {"USD", "Euro", "PLN"};
	
	//Converts input value into USD(used as the"King" value, then converts usd to wanted value
	float Convert(int i1, int i2, float amount)
	{
		

		float conUSD = 1 / currenciesV[i1 - 1] * amount;
		return conUSD * currenciesV[i2 - 1];


	}

	//Creates the display response text
	void Response(std::string name, float rValue)
	{
		std::cout << "You have: " << rValue << name;
	}

int main()
{

	//displaying text and getting variable values 
	std::cout << "Please choose the number corresponding to the currecy you are converting and press enter" << "\n" << "1 = USD\n" << "2 = Euro\n" << "3 = PLN\n";
	std::cin >> userCurrency;
	std::cout << "Please insert the amount and press enter\n";
	std::cin >> moneyAmount;
	std::cout << "Please pick the number corresponding to the currecy you will be converting into and press enter\n";
	std::cin >> convertingCurrency;
	
	//Final response, integrates convert f to show the converted amount
	Response(currenciesN[convertingCurrency - 1], Convert(userCurrency, convertingCurrency, moneyAmount));

	return 0;
}
