#include "pch.h"
#include"Perforator.h"
#include <string>
Perforator::Perforator() : pNumber_of_revolutions(1100), pFrequency_of_strokes(5200), pColor("Orange"), pProducer("Daewoo"), pWeight(3), pCabelCount(2)
{

}
Perforator::Perforator(std::string color, std::string producer, int frequency_of_strokes, int number_of_revolutions, int weight, int length_of_cabel)
	: pNumber_of_revolutions(number_of_revolutions), pFrequency_of_strokes(frequency_of_strokes), pColor(color), pProducer(producer), pWeight(weight), pCabelCount(length_of_cabel)
{

}
Perforator::~Perforator()
{

}
std::string Perforator::getColor()const
{
	return pColor;
}
std::string Perforator::getProducer()const
{
	return pProducer;
}
int Perforator::getFrequency_of_strokes()const
{
	return pFrequency_of_strokes;
}
int Perforator::getNumber_of_revolutions()const
{
	return pNumber_of_revolutions;
}
int Perforator::getWeight()const
{
	return pWeight;
}
int Perforator::getCabelCount()const
{
	return pCabelCount;
}
