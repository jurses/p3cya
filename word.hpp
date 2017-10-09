#ifndef	WORD_H
#define	WORD_H

#include <string>
#include <cmath>
#include <ostream>
#include "alphabet.hpp"

namespace CYA{
	class Word{
	private:
		Alphabet alphabet_;
		std::string word_;
		bool empty_;	// indica si es la cadena vacía
		bool badWord(void);
	public:
		Word();
		Word(const Alphabet&);
		Word(const Word&);
		Word(const std::string&);
		Word(char);
		Word& operator=(const char*);
		Word& operator=(const Word&);
		bool operator==(const Word&)const;
		const char* obtWord(void)const;
		bool operator<(const Word&)const;
		void concatenate(Word);
		void invert(void);
		bool isEmpty(void);
		int operator>>(const char*);
		const char operator[](int);


		std::ostream& write(std::ostream&);
		operator std::string();
	};
}


#endif	// WORD_H	