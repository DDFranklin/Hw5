#include "matrix.h"

//constructor
template <class T>
CompMatrix<T>::CompMatrix(){
	 m_elements[4][4];
	for (int i = 0; i < 4; i++)
	{
	 	for (int j = 0; j < 4; j++)
	 	{
	 		m_elements[i][j] = 0;
	 	}
	}

}
//destrcutor
template <class T> 
CompMatrix<T>::~CompMatrix(){
	delete[] m_elements;
}
/*template <class T>
void CompMatrix<T>::print(std::string msg){
	std::cout<<msg;
	for (int i = 0; i < 4; i++)
	{
	 	for (int j = 0; i < 4; i++)
	 	{
	 		std::cout<< m_elements[i][j];
	 	}
	}
}*/
template class CompMatrix<float>;
