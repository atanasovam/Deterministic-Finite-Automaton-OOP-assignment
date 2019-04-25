#ifndef _DETERMINATE_FINITE_AUTOMATION_INT_H
#define _DETERMINATE_FINITE_AUTOMATION_INT_H

#include <iostream>
#include "determinate_finite_automaton.h"

class DeterminateFiniteAutomatonInt { //  : public DeterminateFiniteAutomaton
public:
	DeterminateFiniteAutomatonInt();
	DeterminateFiniteAutomatonInt& operator+(DeterminateFiniteAutomatonInt&);
	DeterminateFiniteAutomatonInt& operator+(int);
};

#endif
