//============================================================================
// Name        : BetArbitrage.cpp
// Author      : Can Ozel
// Version     :
// Copyright   : Your copyright notice
// Description :
//============================================================================

#include <iostream>
#include "Bulletin.h"
#include "Constants.h"
#include <boost/filesystem.hpp>


bool CalculateAndPrintAvailableCoupons(Bulletin&, const int);


int main() {
	Bulletin bulletin;
	bool ret(false);

	bulletin.fillBulletinFromFile();

	ret = CalculateAndPrintAvailableCoupons(bulletin, MaxGameCountToCheck);

	std::cout << "Available Coupons Exist = " << std::boolalpha << ret << std::endl;
	std::cout << "Coupons are written in file: " << boost::filesystem::current_path().string() << outCouponsFilePath.substr(1) << std::endl;

	return 0;
}

bool CalculateAndPrintAvailableCoupons(Bulletin& bulletin, const int MaxGameCountToCheck)
{


	return false;
}
