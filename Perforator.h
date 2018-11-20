#pragma once
#ifndef PERFORATOR_H
#define PERFORATOR_H

#include <string>

using namespace std;

class Perforator
{
private:
	string pColor;
	string pProducer;
	int pFrequency_of_strokes;
	int pNumber_of_revolutions;

protected:
	int pWeight;
	int pCabelCount;
public:
	Perforator();
	Perforator(string color, string producer, int frequency_of_strokes, int number_of_revolutions, int weight, int length_of_cabel);
	~Perforator();
	string getColor()const;
	string getProducer()const;
	int getFrequency_of_strokes()const;
	int getNumber_of_revolutions()const;

	int getWeight()const;
	int getCabelCount()const;

};
#endif
