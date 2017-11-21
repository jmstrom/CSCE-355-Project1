#include dfa.h

/*******************************************************************************
 * 45678901234567890123456789012345678901234567890123456789012345678901234567890
 * DFA class that defines a DFA
 *
 * Author/copyright:  Jacob Strom. All rights reserved.  
 * Used with permission and modified by: Jacob Strom
 * Date: 20 November 2017
**/


/*******************************************************************************
 * Constructor
 **/

DFA::DFA() {
}

/*******************************************************************************
 * Constructor with data supplied
 **/

DFA::DFA(Scanner& scanner) {
  Initialize(scanner);
}

/*******************************************************************************
 * Destructor
 **/

DFA::~DFA() {
}

/*******************************************************************************
 * Function Initialize
 * This function initializes the DFA
 **/

DFA::Initialize(Scanner& scanner) {
  set<State> Q;
  State q_knot;
  string sigma;
  
}
  
}
