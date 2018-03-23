#include<iostream>

#include "Angler.h"
#include "FishSack.h"
#include "Rod.h"

using namespace std;

const char EXIT_COMMAND = 'x';

int main()
{
	Rod* myRod = new Rod(4, true, Material::Carbon, "Nimbus2000");
	FishSack* myFishSack = new FishSack();

	Angler* angler = new Angler(myRod, myFishSack);
	
	char input;

	while (true)
	{
		cin >> input;
		if (input == EXIT_COMMAND)
		{
			cout << "Bye, thanks for fishing!";
			break;
		}

		angler->fish();
	}


	delete angler;

	system("pause");
	return 0;
}