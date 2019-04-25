#ifndef _DETERMINATE_FINITE_AUTOMATION_CHAR_H
#define _DETERMINATE_FINITE_AUTOMATION_CHAR_H

#include <iostream>
#include "determinate_finite_automaton.h"

class DeterminateFiniteAutomatonChar { //  : public DeterminateFiniteAutomaton
public:
	DeterminateFiniteAutomatonChar();
	DeterminateFiniteAutomatonChar& operator+(DeterminateFiniteAutomatonChar&);
	DeterminateFiniteAutomatonChar& operator+(int);
};

#endif
