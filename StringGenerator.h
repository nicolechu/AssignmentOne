/* Nicole Chu
 * 2290152
 * nichu@chapman.edu
 * 350-01
 * Assignment #1
 */

/*
 * This is the header file for StringGenerator.cpp
 */

 #ifndef STRINGGENERATOR_H
 #define STRINGGENERATOR_H

 using namespace std;

 class StringGenerator
 {
 public:
  StringGenerator();
  double RandomGenerator();
  int StringLength(double stdev, int mean);
  string getNucleotide(double rpA, double rpC, double rpT, double rpG);
private:
 };

 #endif
