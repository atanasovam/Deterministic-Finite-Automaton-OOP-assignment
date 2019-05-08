#ifndef _DFA_EXCEPTION_H
#define _DFA_EXCEPTION_H

#include <exception>

class Exception : public std::exception {
public:
	Exception(char* errorMessage, const char* details);
	Exception(char* errorMessage, int detailsCount);

	~Exception() override;
/*
	const char* handleException() const noexcept override;
*/
private:
	char* errorMessage = new char[256];
	char* details = new char[128];
	int detailsCount = -1;
};

#endif