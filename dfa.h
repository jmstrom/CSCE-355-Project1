#include <iostream>

using namespace std;

#include "../Utilities/scanner.h"
#include "../Utilities/scanline.h"

class DFA {
 public:
  DFA();
  DFA(Scanner& scanner);
  virtual ~DFA();

  set<State> getStates();
  State GetInitialState();
  string GetAlphabet();
  void SetAlphabet(string newSigma);
  State DeltaHat(string input);
  State DeltaHat(string input, State start);
  string ToString() const;

  set<State> Q;
  string sigma;
  State q_knot;
  
};
#endif
