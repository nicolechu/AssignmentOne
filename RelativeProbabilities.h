/* Nicole Chu
 * 2290152
 * nichu@chapman.edu
 * 350-01
 * Assignment #1
 */

/*
 * This is the header file for RelativeProbabilities.cpp
 */

 #ifndef RELATIVEPROBABILITIES_H
 #define RELATIVEPROBABILITIES_H

 using namespace std;

 class RelativeProbabilities
 {
 public:
  RelativeProbabilities(int bCount);
  //functions to calculate nucleotide relative probability
  double getRelProbA(string d1, string d2, string d3, string d4, string d5, int charCount);
  double getRelProbC(string d1, string d2, string d3, string d4, string d5, int charCount);
  double getRelProbT(string d1, string d2, string d3, string d4, string d5, int charCount);
  double getRelProbG(string d1, string d2, string d3, string d4, string d5, int charCount);
  //functions to calculate bigram relative probability
  double getRelProbBiAA(string d1, string d2, string d3, string d4, string d5);
  double getRelProbBiAC(string d1, string d2, string d3, string d4, string d5);
  double getRelProbBiAT(string d1, string d2, string d3, string d4, string d5);
  double getRelProbBiAG(string d1, string d2, string d3, string d4, string d5);
  double getRelProbBiCA(string d1, string d2, string d3, string d4, string d5);
  double getRelProbBiCC(string d1, string d2, string d3, string d4, string d5);
  double getRelProbBiCT(string d1, string d2, string d3, string d4, string d5);
  double getRelProbBiCG(string d1, string d2, string d3, string d4, string d5);
  double getRelProbBiTA(string d1, string d2, string d3, string d4, string d5);
  double getRelProbBiTC(string d1, string d2, string d3, string d4, string d5);
  double getRelProbBiTT(string d1, string d2, string d3, string d4, string d5);
  double getRelProbBiTG(string d1, string d2, string d3, string d4, string d5);
  double getRelProbBiGA(string d1, string d2, string d3, string d4, string d5);
  double getRelProbBiGC(string d1, string d2, string d3, string d4, string d5);
  double getRelProbBiGT(string d1, string d2, string d3, string d4, string d5);
  double getRelProbBiGG(string d1, string d2, string d3, string d4, string d5);
private:
  int biCount;
  double relProbA;
  double relProbC;
  double relProbT;
  double relProbG;
  double relProbAA;
  double relProbAC;
  double relProbAT;
  double relProbAG;
  double relProbCA;
  double relProbCC;
  double relProbCT;
  double relProbCG;
  double relProbTA;
  double relProbTC;
  double relProbTT;
  double relProbTG;
  double relProbGA;
  double relProbGC;
  double relProbGT;
  double relProbGG;
 };

 #endif
