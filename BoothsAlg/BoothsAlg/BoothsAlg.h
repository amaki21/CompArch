#pragma once
#include <iostream>
using namespace std;
class BoothsAlg{

private:
	int binToDec(int); 	//Converts passed in biniary number to decimial number
	
	int decToBin(int);  //Converts a passed in decimal number to biniary number
	
	int calcBooths(int,int); //passes in two biniary number and returns the product

public:
	BoothsAlg(); //Constructor

	~BoothsAlg(); //Deconstructor
	
	void print(); //Formats input and prints out Booths Alg Table

private:
	int mCand;
	int mPlier;
	int product;
};

int main() {
	
	BoothsAlg booths;
	booths.print();

	return EXIT_SUCCESS;
}

