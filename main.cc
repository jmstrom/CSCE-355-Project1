#include "main.h";
#include "fstream";
#include "iostream";

/*******************************************************************************
 * 45678901234567890123456789012345678901234567890123456789012345678901234567890
 * Main program for CSCE 355 Programming Assignment.
 *
 * Author/copyright:  Jacob Strom. All rights reserved.  
 * Used with permission and modified by: Jacob Strom
 * Date: 20 November 2017
**/


/*******************************************************************************
 **/
int main( int argc, char *argv ) {

  string function = "";
  string dfa_filename = "";
  string in_filename = "";

  Simulator simulator;
  Homomorphic homomorphic;
  
  Scanner dfa_scanner;
  Scanner input_scanner;
  
  Utils::CheckArgs(3, argc, *argv, "function dfa_filename in_filename");
  //args start counting at 1 in buells code?????
  function = static_cast<string>(argv[0]);
  dfa_filename = static_cast<string>(argv[1]);
  in_filename = static_cast<string>(argv[2]);

  dfa_scanner.
  input_scanner.OpenFile(in_filename);
  
  if ( function.compare("simulate") == 0 || function.compare("s") == 0 ) {
    simulator.run(dfa_scanner, input_scanner);
  }

  else if (  function.compare("homomorphic") == 0 || function.compare("h") == 0 ) {
    homomorphic.run(dfa_scanner, input_scanner);
  }
  
  return 0;
} // int main( )

