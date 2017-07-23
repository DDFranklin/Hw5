#ifndef MATRIX_H
#define MATRIX_H

#include <iostream> 
#include <string> 

template <class T>
class CompMatrix {
T** m_elements;

public : 

	CompMatrix();

	~CompMatrix();

	/*CompMatrix(const CompMatrix<T> &rhs);

	CompMatrix& operator =(CompMatrix const &rhs);

	void zero();

	void identity();

	CompMatrix operator *(CompMatrix const &m);

	CompMatrix operator +(CompMatrix const &m);

	CompMatrix operator -(CompMatrix const &m);

	void set(unsigned int row, unsigned int column, T value);

	T at (unsigned int row, unsigned int column) const;*/

	void print(std::string msg);

};

#endif
