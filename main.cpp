#include "pch.h"
#include <iostream>
#include<string>
#include "Perforator.h"

void showPerforatorInfo(Perforator *perforator)
{
	std::cout << "///Perforator Info///" << std::endl;
	std::cout << "Color:" << perforator->getColor() << std::endl;
	std::cout << "Producer:" << perforator->getProducer() << std::endl;
	std::cout << "Number_of_revolutions:" << perforator->getNumber_of_revolutions() << std::endl;
	std::cout << "Frequency_of_strokes:" << perforator->getFrequency_of_strokes() << std::endl;
	std::cout << "Weight:" << perforator->getWeight() << std::endl;
	std::cout << "CabelCount:" << perforator->getCabelCount() << std::endl;
	std::cout << std::endl;
}


int main()
{
	Perforator perforator1("orange", "Daewoo", 1100, 5200, 3, 2);
	Perforator perforator2("black", "Dnipro-m", 900, 4850, 4, 3);
	Perforator perforator3("blue", "Makita", 1100, 4500, 3, 2);
	showPerforatorInfo(&perforator1);
	showPerforatorInfo(&perforator2);
	showPerforatorInfo(&perforator3);
}
