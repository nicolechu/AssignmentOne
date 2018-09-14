/* Nicole Chu
 * 2290152
 * nichu@chapman.edu
 * 350-01
 * Assignment #1
 */

/*
 * This class contains functions to be used to randomly generate 1000 DNA strings
  using Gaussian distribution
 */

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include "StringGenerator.h"

using namespace std;

//class constructor
StringGenerator::StringGenerator()
{
}

/*
 * RandomGenerator function
 * Generates and returns a random number between 0.01 to 1.00
 * Called from the StringLength and getNucleotide functions
 */
double StringGenerator::RandomGenerator()
{
  double r = (rand()%100 + 1)/100.0;
  return r;
}

/*
 * StringLength function
 * Creates 2 random doubles using the RandomGenerator function above
 * Implements the Gaussian distribution formula using cmath functions and calculates
   a normal random variable D using arguments stdev (standard deviation) and mean
 * Returns D as the length of the new random DNA string
 */
int StringGenerator::StringLength(double stdev, int mean)
{
  double a = RandomGenerator();
  double b = RandomGenerator();

  //Gaussian distribution
  double C = sqrt(-2 * log(a)) * cos(2 * M_PI * b);
  int D = (stdev * C) + mean;
  return D;
}

/*
 * getNucleotide function
 * Creates a random double num (generated using RandomGenerator function)
 * Takes relative probabilities of nucleotides A, C, T, and G as arguments
 * Uses those relative probabilities to weight the amount of times a nucleotide will appear
   in the new DNA string
 * string nucl is initialized to "invalid" for testing purposes
 * Assigns nucleotides to string nucl according to their relative probabilities in the initial
   text file & returns nucl
 */
string StringGenerator::getNucleotide(double rpA, double rpC, double rpT, double rpG)
{
  double num = RandomGenerator();
  string nucl = "invalid";

  if(num > 0 && num <= rpA)
    nucl = "A";
  if(num > rpA && num <= (rpA+rpC))
    nucl = "C";
  if(num > (rpA+rpC) && num <= (rpA+rpC+rpT))
    nucl = "T";
  if(num > (rpA+rpC+rpT) && num <= (rpA+rpC+rpT+rpG))
    nucl = "G";

  return nucl;
}
