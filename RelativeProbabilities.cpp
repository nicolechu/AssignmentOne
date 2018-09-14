/* Nicole Chu
 * 2290152
 * nichu@chapman.edu
 * 350-01
 * Assignment #1
 */

/*
 * This class contains functions to be used to calculate the relative probabilities
   of the nucleotides and bigrams
 */

#include <iostream>
#include <cmath>
#include "RelativeProbabilities.h"

using namespace std;

/*
 * Class constructor
 * Initializes private variable biCount to the value of
   an int argument variable bCount that is equal to the total amount of bigrams
   in the text file
 */
RelativeProbabilities::RelativeProbabilities(int bCount)
{
  biCount = bCount;
}

/*
 * getRelProbA function
 * Uses a countA variable to keep track of the number of times "a" appears in
   the text file
 * For loops iterate through each DNA string & use the substr function to find
   "a" in each string
 * Assigns the quotient of countA (the number of a's in the text file) and the parameter
   charCount (the total number of characters in the text file) to the class variable
   relProbA
 * Returns relProbA
 */
double RelativeProbabilities::getRelProbA(string d1, string d2, string d3, string d4, string d5, int charCount)
{
  int countA = 0;

  for(int i = 0; i < d1.length(); i++)
  {
    if(d1.substr(i,1) == "a")
      countA += 1;
  }
  for(int i = 0; i < d2.length(); i++)
  {
    if(d2.substr(i,1) == "a")
      countA += 1;
  }
  for(int i = 0; i < d3.length(); i++)
  {
    if(d3.substr(i,1) == "a")
      countA += 1;
  }
  for(int i = 0; i < d4.length(); i++)
  {
    if(d4.substr(i,1) == "a")
      countA += 1;
  }
  for(int i = 0; i < d5.length(); i++)
  {
    if(d5.substr(i,1) == "a")
      countA += 1;
  }

  relProbA = (double)countA/charCount;
  return relProbA;
}

/*
 * getRelProbC function
 * Uses a countC variable to keep track of the number of times "c" appears in
   the text file
 * For loops iterate through each DNA string & use the substr function to find
   "c" in each string
 * Assigns the quotient of countC (the number of c's in the text file) and the parameter
   charCount (the total number of characters in the text file) to the class variable
   relProbC
 * Returns relProbC
 */
double RelativeProbabilities::getRelProbC(string d1, string d2, string d3, string d4, string d5, int charCount)
{
  int countC = 0;

  for(int i = 0; i < d1.length(); i++)
  {
    if(d1.substr(i,1) == "c")
      countC += 1;
  }
  for(int i = 0; i < d2.length(); i++)
  {
    if(d2.substr(i,1) == "c")
      countC += 1;
  }
  for(int i = 0; i < d3.length(); i++)
  {
    if(d3.substr(i,1) == "c")
      countC += 1;
  }
  for(int i = 0; i < d4.length(); i++)
  {
    if(d4.substr(i,1) == "c")
      countC += 1;
  }
  for(int i = 0; i < d5.length(); i++)
  {
    if(d5.substr(i,1) == "c")
      countC += 1;
  }

  relProbC = (double)countC/charCount;
  return relProbC;
}

/*
 * getRelProbT function
 * Uses a countT variable to keep track of the number of times "t" appears in
   the text file
 * For loops iterate through each DNA string & use the substr function to find
   "t" in each string
 * Assigns the quotient of countT (the number of t's in the text file) and the parameter
   charCount (the total number of characters in the text file) to the class variable
   relProbT
 * Returns relProbT
 */
double RelativeProbabilities::getRelProbT(string d1, string d2, string d3, string d4, string d5, int charCount)
{
  int countT = 0;

  for(int i = 0; i < d1.length(); i++)
  {
    if(d1.substr(i,1) == "t")
      countT += 1;
  }
  for(int i = 0; i < d2.length(); i++)
  {
    if(d2.substr(i,1) == "t")
      countT += 1;
  }
  for(int i = 0; i < d3.length(); i++)
  {
    if(d3.substr(i,1) == "t")
      countT += 1;
  }
  for(int i = 0; i < d4.length(); i++)
  {
    if(d4.substr(i,1) == "t")
      countT += 1;
  }
  for(int i = 0; i < d5.length(); i++)
  {
    if(d5.substr(i,1) == "t")
      countT += 1;
  }

  relProbT = (double)countT/charCount;
  return relProbT;
}

/*
 * getRelProbG function
 * Uses a countG variable to keep track of the number of times "g" appears in
   the text file
 * For loops iterate through each DNA string & use the substr function to find
   "g" in each string
 * Assigns the quotient of countG (the number of g's in the text file) and the parameter
   charCount (the total number of characters in the text file) to the class variable
   relProbG
 * Returns relProbG
 */
double RelativeProbabilities::getRelProbG(string d1, string d2, string d3, string d4, string d5, int charCount)
{
  int countG = 0;

  for(int i = 0; i < d1.length(); i++)
  {
    if(d1.substr(i,1) == "g")
      countG += 1;
  }
  for(int i = 0; i < d2.length(); i++)
  {
    if(d2.substr(i,1) == "g")
      countG += 1;
  }
  for(int i = 0; i < d3.length(); i++)
  {
    if(d3.substr(i,1) == "g")
      countG += 1;
  }
  for(int i = 0; i < d4.length(); i++)
  {
    if(d4.substr(i,1) == "g")
      countG += 1;
  }
  for(int i = 0; i < d5.length(); i++)
  {
    if(d5.substr(i,1) == "g")
      countG += 1;
  }

  relProbG = (double)countG/charCount;
  return relProbG;
}


/*
 * getRelProbAA function
 * Uses a countAA variable to keep track of the number of times "aa" appears in
   the text file
 * For loops iterate through each DNA string & use the substr function to find
   "aa" in each string
 * Deducts from private variable biCount if bigram AA is present more than once
   in the text file so that the bigram is counted more than once in the total number
   of bigrams in the text file
 * Assigns the quotient of countAA (the number of AA's in the text file) and
   biCount (the total number of bigrams in the text file) to the class variable
   relProbAA
 * Returns relProbAA
 */
double RelativeProbabilities::getRelProbBiAA(string d1, string d2, string d3, string d4, string d5)
{
  int countAA = 0;

  for(int i = 0; i < d1.length() - 1; i+=2)
  {
    if(d1.substr(i,2) == "aa")
      countAA += 1;
  }
  for(int i = 0; i < d2.length(); i+=2)
  {
    if(d2.substr(i,2) == "aa")
      countAA += 1;
  }
  for(int i = 0; i < d3.length(); i+=2)
  {
    if(d3.substr(i,2) == "aa")
      countAA += 1;
  }
  for(int i = 0; i < d4.length(); i+=2)
  {
    if(d4.substr(i,2) == "aa")
      countAA += 1;
  }
  for(int i = 0; i < d5.length(); i+=2)
  {
    if(d5.substr(i,2) == "aa")
      countAA += 1;
  }

  if(countAA > 1)
  {
    for(int i = countAA; i > 1; i--)
    {
      biCount -= 1;
    }
  }

  relProbAA = (double)countAA/biCount;
  return relProbAA;
}

/*
 * getRelProbAC function
 * Uses a countAC variable to keep track of the number of times "ac" appears in
   the text file
 * For loops iterate through each DNA string & use the substr function to find
   "ac" in each string
 * Deducts from private variable biCount if bigram AC is present more than once
   in the text file so that the bigram is counted more than once in the total number
   of bigrams in the text file
 * Assigns the quotient of countAA (the number of AC's in the text file) and
   biCount (the total number of bigrams in the text file) to the class variable
   relProbAC
 * Returns relProbAC
 */
double RelativeProbabilities::getRelProbBiAC(string d1, string d2, string d3, string d4, string d5)
{
  int countAC = 0;

  for(int i = 0; i < d1.length() - 1; i+=2)
  {
    if(d1.substr(i,2) == "ac")
      countAC += 1;
  }
  for(int i = 0; i < d2.length(); i+=2)
  {
    if(d2.substr(i,2) == "ac")
      countAC += 1;
  }
  for(int i = 0; i < d3.length(); i+=2)
  {
    if(d3.substr(i,2) == "ac")
      countAC += 1;
  }
  for(int i = 0; i < d4.length(); i+=2)
  {
    if(d4.substr(i,2) == "ac")
      countAC += 1;
  }
  for(int i = 0; i < d5.length(); i+=2)
  {
    if(d5.substr(i,2) == "ac")
      countAC += 1;
  }

  if(countAC > 1)
  {
    for(int i = countAC; i > 1; i--)
    {
      biCount -= 1;
    }
  }

  relProbAC = (double)countAC/biCount;
  return relProbAC;
}

/*
 * getRelProbAT function
 * Uses a countAT variable to keep track of the number of times "at" appears in
   the text file
 * For loops iterate through each DNA string & use the substr function to find
   "at" in each string
 * Deducts from private variable biCount if bigram AT is present more than once
   in the text file so that the bigram is counted more than once in the total number
   of bigrams in the text file
 * Assigns the quotient of countAT (the number of AT's in the text file) and
   biCount (the total number of bigrams in the text file) to the class variable
   relProbAT
 * Returns relProbAT
 */
double RelativeProbabilities::getRelProbBiAT(string d1, string d2, string d3, string d4, string d5)
{
  int countAT = 0;

  for(int i = 0; i < d1.length() - 1; i+=2)
  {
    if(d1.substr(i,2) == "at")
      countAT += 1;
  }
  for(int i = 0; i < d2.length(); i+=2)
  {
    if(d2.substr(i,2) == "at")
      countAT += 1;
  }
  for(int i = 0; i < d3.length(); i+=2)
  {
    if(d3.substr(i,2) == "at")
      countAT += 1;
  }
  for(int i = 0; i < d4.length(); i+=2)
  {
    if(d4.substr(i,2) == "at")
      countAT += 1;
  }
  for(int i = 0; i < d5.length(); i+=2)
  {
    if(d5.substr(i,2) == "at")
      countAT += 1;
  }

  if(countAT > 1)
  {
    for(int i = countAT; i > 1; i--)
    {
      biCount -= 1;
    }
  }

  relProbAT = (double)countAT/biCount;
  return relProbAT;
}

/*
 * getRelProbAG function
 * Uses a countAG variable to keep track of the number of times "ag" appears in
   the text file
 * For loops iterate through each DNA string & use the substr function to find
   "ag" in each string
 * Deducts from private variable biCount if bigram AG is present more than once
   in the text file so that the bigram is counted more than once in the total number
   of bigrams in the text file
 * Assigns the quotient of countAA (the number of AG's in the text file) and
   biCount (the total number of bigrams in the text file) to the class variable
   relProbAG
 * Returns relProbAG
 */
double RelativeProbabilities::getRelProbBiAG(string d1, string d2, string d3, string d4, string d5)
{
  int countAG = 0;

  for(int i = 0; i < d1.length() - 1; i+=2)
  {
    if(d1.substr(i,2) == "ag")
      countAG += 1;
  }
  for(int i = 0; i < d2.length(); i+=2)
  {
    if(d2.substr(i,2) == "ag")
      countAG += 1;
  }
  for(int i = 0; i < d3.length(); i+=2)
  {
    if(d3.substr(i,2) == "ag")
      countAG += 1;
  }
  for(int i = 0; i < d4.length(); i+=2)
  {
    if(d4.substr(i,2) == "ag")
      countAG += 1;
  }
  for(int i = 0; i < d5.length(); i+=2)
  {
    if(d5.substr(i,2) == "ag")
      countAG += 1;
  }

  if(countAG > 1)
  {
    for(int i = countAG; i > 1; i--)
    {
      biCount -= 1;
    }
  }

  relProbAG = (double)countAG/biCount;
  return relProbAG;
}

/*
 * getRelProbCA function
 * Uses a countAA variable to keep track of the number of times "ca" appears in
   the text file
 * For loops iterate through each DNA string & use the substr function to find
   "ca" in each string
 * Deducts from private variable biCount if bigram CA is present more than once
   in the text file so that the bigram is counted more than once in the total number
   of bigrams in the text file
 * Assigns the quotient of countCA (the number of CA's in the text file) and
   biCount (the total number of bigrams in the text file) to the class variable
   relProbCA
 * Returns relProbCA
 */
double RelativeProbabilities::getRelProbBiCA(string d1, string d2, string d3, string d4, string d5)
{
  int countCA = 0;

  for(int i = 0; i < d1.length() - 1; i+=2)
  {
    if(d1.substr(i,2) == "ca")
      countCA += 1;
  }
  for(int i = 0; i < d2.length(); i+=2)
  {
    if(d2.substr(i,2) == "ca")
      countCA += 1;
  }
  for(int i = 0; i < d3.length(); i+=2)
  {
    if(d3.substr(i,2) == "ca")
      countCA += 1;
  }
  for(int i = 0; i < d4.length(); i+=2)
  {
    if(d4.substr(i,2) == "ca")
      countCA += 1;
  }
  for(int i = 0; i < d5.length(); i+=2)
  {
    if(d5.substr(i,2) == "ca")
      countCA += 1;
  }

  if(countCA > 1)
  {
    for(int i = countCA; i > 1; i--)
    {
      biCount -= 1;
    }
  }

  relProbCA = (double)countCA/biCount;
  return relProbCA;
}

/*
 * getRelProbCC function
 * Uses a countCC variable to keep track of the number of times "cc" appears in
   the text file
 * For loops iterate through each DNA string & use the substr function to find
   "cc" in each string
 * Deducts from private variable biCount if bigram CC is present more than once
   in the text file so that the bigram is counted more than once in the total number
   of bigrams in the text file
 * Assigns the quotient of countCC (the number of CC's in the text file) and
   biCount (the total number of bigrams in the text file) to the class variable
   relProbCC
 * Returns relProbCC
 */
double RelativeProbabilities::getRelProbBiCC(string d1, string d2, string d3, string d4, string d5)
{
  int countCC = 0;

  for(int i = 0; i < d1.length() - 1; i+=2)
  {
    if(d1.substr(i,2) == "cc")
      countCC += 1;
  }
  for(int i = 0; i < d2.length(); i+=2)
  {
    if(d2.substr(i,2) == "cc")
      countCC += 1;
  }
  for(int i = 0; i < d3.length(); i+=2)
  {
    if(d3.substr(i,2) == "cc")
      countCC += 1;
  }
  for(int i = 0; i < d4.length(); i+=2)
  {
    if(d4.substr(i,2) == "cc")
      countCC += 1;
  }
  for(int i = 0; i < d5.length(); i+=2)
  {
    if(d5.substr(i,2) == "cc")
      countCC += 1;
  }

  if(countCC > 1)
  {
    for(int i = countCC; i > 1; i--)
    {
      biCount -= 1;
    }
  }

  relProbCC = (double)countCC/biCount;
  return relProbCC;
}

/*
 * getRelProbCT function
 * Uses a countCT variable to keep track of the number of times "ct" appears in
   the text file
 * For loops iterate through each DNA string & use the substr function to find
   "ct" in each string
 * Deducts from private variable biCount if bigram CT is present more than once
   in the text file so that the bigram is counted more than once in the total number
   of bigrams in the text file
 * Assigns the quotient of countCT (the number of CT's in the text file) and
   biCount (the total number of bigrams in the text file) to the class variable
   relProbCT
 * Returns relProbCT
 */
double RelativeProbabilities::getRelProbBiCT(string d1, string d2, string d3, string d4, string d5)
{
  int countCT = 0;

  for(int i = 0; i < d1.length() - 1; i+=2)
  {
    if(d1.substr(i,2) == "ct")
      countCT += 1;
  }
  for(int i = 0; i < d2.length(); i+=2)
  {
    if(d2.substr(i,2) == "ct")
      countCT += 1;
  }
  for(int i = 0; i < d3.length(); i+=2)
  {
    if(d3.substr(i,2) == "ct")
      countCT += 1;
  }
  for(int i = 0; i < d4.length(); i+=2)
  {
    if(d4.substr(i,2) == "ct")
      countCT += 1;
  }
  for(int i = 0; i < d5.length(); i+=2)
  {
    if(d5.substr(i,2) == "ct")
      countCT += 1;
  }

  if(countCT > 1)
  {
    for(int i = countCT; i > 1; i--)
    {
      biCount -= 1;
    }
  }

  relProbCT = (double)countCT/biCount;
  return relProbCT;
}

/*
 * getRelProbCG function
 * Uses a countCG variable to keep track of the number of times "cg" appears in
   the text file
 * For loops iterate through each DNA string & use the substr function to find
   "cg" in each string
 * Deducts from private variable biCount if bigram CG is present more than once
   in the text file so that the bigram is counted more than once in the total number
   of bigrams in the text file
 * Assigns the quotient of countCG (the number of CG's in the text file) and
   biCount (the total number of bigrams in the text file) to the class variable
   relProbCG
 * Returns relProbCG
 */
double RelativeProbabilities::getRelProbBiCG(string d1, string d2, string d3, string d4, string d5)
{
  int countCG = 0;

  for(int i = 0; i < d1.length() - 1; i+=2)
  {
    if(d1.substr(i,2) == "cg")
      countCG += 1;
  }
  for(int i = 0; i < d2.length(); i+=2)
  {
    if(d2.substr(i,2) == "cg")
      countCG += 1;
  }
  for(int i = 0; i < d3.length(); i+=2)
  {
    if(d3.substr(i,2) == "cg")
      countCG += 1;
  }
  for(int i = 0; i < d4.length(); i+=2)
  {
    if(d4.substr(i,2) == "cg")
      countCG += 1;
  }
  for(int i = 0; i < d5.length(); i+=2)
  {
    if(d5.substr(i,2) == "cg")
      countCG += 1;
  }

  if(countCG > 1)
  {
    for(int i = countCG; i > 1; i--)
    {
      biCount -= 1;
    }
  }

  relProbCG = (double)countCG/biCount;
  return relProbCG;
}

/*
 * getRelProbTA function
 * Uses a countTA variable to keep track of the number of times "ta" appears in
   the text file
 * For loops iterate through each DNA string & use the substr function to find
   "ta" in each string
 * Deducts from private variable biCount if bigram TA is present more than once
   in the text file so that the bigram is counted more than once in the total number
   of bigrams in the text file
 * Assigns the quotient of countTA (the number of TA's in the text file) and
   biCount (the total number of bigrams in the text file) to the class variable
   relProbTA
 * Returns relProbTA
 */
double RelativeProbabilities::getRelProbBiTA(string d1, string d2, string d3, string d4, string d5)
{
  int countTA = 0;

  for(int i = 0; i < d1.length() - 1; i+=2)
  {
    if(d1.substr(i,2) == "ta")
      countTA += 1;
  }
  for(int i = 0; i < d2.length(); i+=2)
  {
    if(d2.substr(i,2) == "ta")
      countTA += 1;
  }
  for(int i = 0; i < d3.length(); i+=2)
  {
    if(d3.substr(i,2) == "ta")
      countTA += 1;
  }
  for(int i = 0; i < d4.length(); i+=2)
  {
    if(d4.substr(i,2) == "ta")
      countTA += 1;
  }
  for(int i = 0; i < d5.length(); i+=2)
  {
    if(d5.substr(i,2) == "ta")
      countTA += 1;
  }

  if(countTA > 1)
  {
    for(int i = countTA; i > 1; i--)
    {
      biCount -= 1;
    }
  }

  relProbTA = (double)countTA/biCount;
  return relProbTA;
}

/*
 * getRelProbTC function
 * Uses a countTC variable to keep track of the number of times "tc" appears in
   the text file
 * For loops iterate through each DNA string & use the substr function to find
   "tc" in each string
 * Deducts from private variable biCount if bigram TC is present more than once
   in the text file so that the bigram is counted more than once in the total number
   of bigrams in the text file
 * Assigns the quotient of countTC (the number of TC's in the text file) and
   biCount (the total number of bigrams in the text file) to the class variable
   relProbTC
 * Returns relProbTC
 */
double RelativeProbabilities::getRelProbBiTC(string d1, string d2, string d3, string d4, string d5)
{
  int countTC = 0;

  for(int i = 0; i < d1.length() - 1; i+=2)
  {
    if(d1.substr(i,2) == "tc")
      countTC += 1;
  }
  for(int i = 0; i < d2.length(); i+=2)
  {
    if(d2.substr(i,2) == "tc")
      countTC += 1;
  }
  for(int i = 0; i < d3.length(); i+=2)
  {
    if(d3.substr(i,2) == "tc")
      countTC += 1;
  }
  for(int i = 0; i < d4.length(); i+=2)
  {
    if(d4.substr(i,2) == "tc")
      countTC += 1;
  }
  for(int i = 0; i < d5.length(); i+=2)
  {
    if(d5.substr(i,2) == "tc")
      countTC += 1;
  }

  if(countTC > 1)
  {
    for(int i = countTC; i > 1; i--)
    {
      biCount -= 1;
    }
  }

  relProbTC = (double)countTC/biCount;
  return relProbTC;
}

/*
 * getRelProbTT function
 * Uses a countTT variable to keep track of the number of times "tt" appears in
   the text file
 * For loops iterate through each DNA string & use the substr function to find
   "tt" in each string
 * Deducts from private variable biCount if bigram TT is present more than once
   in the text file so that the bigram is counted more than once in the total number
   of bigrams in the text file
 * Assigns the quotient of countTT (the number of TT's in the text file) and
   biCount (the total number of bigrams in the text file) to the class variable
   relProbTT
 * Returns relProbTT
 */
double RelativeProbabilities::getRelProbBiTT(string d1, string d2, string d3, string d4, string d5)
{
  int countTT = 0;

  for(int i = 0; i < d1.length() - 1; i+=2)
  {
    if(d1.substr(i,2) == "tt")
      countTT += 1;
  }
  for(int i = 0; i < d2.length(); i+=2)
  {
    if(d2.substr(i,2) == "tt")
      countTT += 1;
  }
  for(int i = 0; i < d3.length(); i+=2)
  {
    if(d3.substr(i,2) == "tt")
      countTT += 1;
  }
  for(int i = 0; i < d4.length(); i+=2)
  {
    if(d4.substr(i,2) == "tt")
      countTT += 1;
  }
  for(int i = 0; i < d5.length(); i+=2)
  {
    if(d5.substr(i,2) == "tt")
      countTT += 1;
  }

  if(countTT > 1)
  {
    for(int i = countTT; i > 1; i--)
    {
      biCount -= 1;
    }
  }

  relProbTT = (double)countTT/biCount;
  return relProbTT;
}

/*
 * getRelProbTG function
 * Uses a countTG variable to keep track of the number of times "tg" appears in
   the text file
 * For loops iterate through each DNA string & use the substr function to find
   "tg" in each string
 * Deducts from private variable biCount if bigram TG is present more than once
   in the text file so that the bigram is counted more than once in the total number
   of bigrams in the text file
 * Assigns the quotient of countTG (the number of TG's in the text file) and
   biCount (the total number of bigrams in the text file) to the class variable
   relProbTG
 * Returns relProbTG
 */
double RelativeProbabilities::getRelProbBiTG(string d1, string d2, string d3, string d4, string d5)
{
  int countTG = 0;

  for(int i = 0; i < d1.length() - 1; i+=2)
  {
    if(d1.substr(i,2) == "tg")
      countTG += 1;
  }
  for(int i = 0; i < d2.length(); i+=2)
  {
    if(d2.substr(i,2) == "tg")
      countTG += 1;
  }
  for(int i = 0; i < d3.length(); i+=2)
  {
    if(d3.substr(i,2) == "tg")
      countTG += 1;
  }
  for(int i = 0; i < d4.length(); i+=2)
  {
    if(d4.substr(i,2) == "tg")
      countTG += 1;
  }
  for(int i = 0; i < d5.length(); i+=2)
  {
    if(d5.substr(i,2) == "tg")
      countTG += 1;
  }

  if(countTG > 1)
  {
    for(int i = countTG; i > 1; i--)
    {
      biCount -= 1;
    }
  }

  relProbTG = (double)countTG/biCount;
  return relProbTG;
}

/*
 * getRelProbGA function
 * Uses a countGA variable to keep track of the number of times "ga" appears in
   the text file
 * For loops iterate through each DNA string & use the substr function to find
   "ga" in each string
 * Deducts from private variable biCount if bigram GA is present more than once
   in the text file so that the bigram is counted more than once in the total number
   of bigrams in the text file
 * Assigns the quotient of countGA (the number of GA's in the text file) and
   biCount (the total number of bigrams in the text file) to the class variable
   relProbGA
 * Returns relProbGA
 */
double RelativeProbabilities::getRelProbBiGA(string d1, string d2, string d3, string d4, string d5)
{
  int countGA = 0;

  for(int i = 0; i < d1.length() - 1; i+=2)
  {
    if(d1.substr(i,2) == "ga")
      countGA += 1;
  }
  for(int i = 0; i < d2.length(); i+=2)
  {
    if(d2.substr(i,2) == "ga")
      countGA += 1;
  }
  for(int i = 0; i < d3.length(); i+=2)
  {
    if(d3.substr(i,2) == "ga")
      countGA += 1;
  }
  for(int i = 0; i < d4.length(); i+=2)
  {
    if(d4.substr(i,2) == "ga")
      countGA += 1;
  }
  for(int i = 0; i < d5.length(); i+=2)
  {
    if(d5.substr(i,2) == "ga")
      countGA += 1;
  }

  if(countGA > 1)
  {
    for(int i = countGA; i > 1; i--)
    {
      biCount -= 1;
    }
  }

  relProbGA = (double)countGA/biCount;
  return relProbGA;
}

/*
 * getRelProbGC function
 * Uses a countGC variable to keep track of the number of times "gc" appears in
   the text file
 * For loops iterate through each DNA string & use the substr function to find
   "gc" in each string
 * Deducts from private variable biCount if bigram GC is present more than once
   in the text file so that the bigram is counted more than once in the total number
   of bigrams in the text file
 * Assigns the quotient of countGC (the number of GC's in the text file) and
   biCount (the total number of bigrams in the text file) to the class variable
   relProbGC
 * Returns relProbGC
 */
double RelativeProbabilities::getRelProbBiGC(string d1, string d2, string d3, string d4, string d5)
{
  int countGC = 0;

  for(int i = 0; i < d1.length() - 1; i+=2)
  {
    if(d1.substr(i,2) == "gc")
      countGC += 1;
  }
  for(int i = 0; i < d2.length(); i+=2)
  {
    if(d2.substr(i,2) == "gc")
      countGC += 1;
  }
  for(int i = 0; i < d3.length(); i+=2)
  {
    if(d3.substr(i,2) == "gc")
      countGC += 1;
  }
  for(int i = 0; i < d4.length(); i+=2)
  {
    if(d4.substr(i,2) == "gc")
      countGC += 1;
  }
  for(int i = 0; i < d5.length(); i+=2)
  {
    if(d5.substr(i,2) == "gc")
      countGC += 1;
  }

  if(countGC > 1)
  {
    for(int i = countGC; i > 1; i--)
    {
      biCount -= 1;
    }
  }

  relProbGC = (double)countGC/biCount;
  return relProbGC;
}

/*
 * getRelProbGT function
 * Uses a countGT variable to keep track of the number of times "gt" appears in
   the text file
 * For loops iterate through each DNA string & use the substr function to find
   "gt" in each string
 * Deducts from private variable biCount if bigram GT is present more than once
   in the text file so that the bigram is counted more than once in the total number
   of bigrams in the text file
 * Assigns the quotient of countGT (the number of GT's in the text file) and
   biCount (the total number of bigrams in the text file) to the class variable
   relProbGT
 * Returns relProbGT
 */
double RelativeProbabilities::getRelProbBiGT(string d1, string d2, string d3, string d4, string d5)
{
  int countGT = 0;

  for(int i = 0; i < d1.length() - 1; i+=2)
  {
    if(d1.substr(i,2) == "gt")
      countGT += 1;
  }
  for(int i = 0; i < d2.length(); i+=2)
  {
    if(d2.substr(i,2) == "gt")
      countGT += 1;
  }
  for(int i = 0; i < d3.length(); i+=2)
  {
    if(d3.substr(i,2) == "gt")
      countGT += 1;
  }
  for(int i = 0; i < d4.length(); i+=2)
  {
    if(d4.substr(i,2) == "gt")
      countGT += 1;
  }
  for(int i = 0; i < d5.length(); i+=2)
  {
    if(d5.substr(i,2) == "gt")
      countGT += 1;
  }

  if(countGT > 1)
  {
    for(int i = countGT; i > 1; i--)
    {
      biCount -= 1;
    }
  }

  relProbGT = (double)countGT/biCount;
  return relProbGT;
}

/*
 * getRelProbGG function
 * Uses a countAA variable to keep track of the number of times "gg" appears in
   the text file
 * For loops iterate through each DNA string & use the substr function to find
   "gg" in each string
 * Deducts from private variable biCount if bigram GG is present more than once
   in the text file so that the bigram is counted more than once in the total number
   of bigrams in the text file
 * Assigns the quotient of countGG (the number of GG's in the text file) and
   biCount (the total number of bigrams in the text file) to the class variable
   relProbGG
 * Returns relProbGG
 */
double RelativeProbabilities::getRelProbBiGG(string d1, string d2, string d3, string d4, string d5)
{
  int countGG = 0;

  for(int i = 0; i < d1.length() - 1; i+=2)
  {
    if(d1.substr(i,2) == "gg")
      countGG += 1;
  }
  for(int i = 0; i < d2.length(); i+=2)
  {
    if(d2.substr(i,2) == "gg")
      countGG += 1;
  }
  for(int i = 0; i < d3.length(); i+=2)
  {
    if(d3.substr(i,2) == "gg")
      countGG += 1;
  }
  for(int i = 0; i < d4.length(); i+=2)
  {
    if(d4.substr(i,2) == "gg")
      countGG += 1;
  }
  for(int i = 0; i < d5.length(); i+=2)
  {
    if(d5.substr(i,2) == "gg")
      countGG += 1;
  }

  if(countGG > 1)
  {
    for(int i = countGG; i > 1; i--)
    {
      biCount -= 1;
    }
  }

  relProbGG = (double)countGG/biCount;
  return relProbGG;
}
