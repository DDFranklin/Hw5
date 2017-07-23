#include "matrix.h"

int main(){

	CompMatrix<float> matrix1;
	//matrix1.print("----4x4 matrix1 created----");

	/*matrix1.identity();
	matrix1.print("----4x4 matrix1 identity----");

	CompMatrix<float> matrix2 = matrix1;
	matrix2.print("----4x4 matrix2 initialized from copy constructor of matrix1----");

	matrix1 = matrix1 * matrix2;
	matrix1.print("----matrix1 = matrix1 * matrix 2 and then assignment function(operator=) called----");

	matrix2.set(0 ,0 ,0); matrix2.set(0 ,1 1); matrix2.set(0 ,2 ,2); matrix2.set(0 ,3 ,3);
	matrix2.set(1 ,0 ,4); matrix2.set(1 ,1 5); matrix2.set(1 ,2 ,6); matrix2.set(1 ,3 ,7);
	matrix2.set(2 ,0 ,8); matrix2.set(2 ,1 9); matrix2.set(2 ,2 ,10); matrix2.set(2 ,3 ,11);
	matrix2.set(3 ,0 ,12); matrix2.set(3 ,1 13); matrix2.set(3 ,2 ,14); matrix2.set(3 ,3 ,15)
		;
			matrix2.print("----matrix2's new values----");

	CompMatrix<float> matrix3 = matrix1	* matrix2;
	matrix3.print("----4x4 matrix3 = matrix1 * matrix2----");

	CompMatrix<float> matrix4 = matrix3*matrix3;
	matrix4.print("----matrix4 = matrix3 * matrix3----");

	for(int i =0; i < 100; i++){
		matrix4 = matrix4 + matrix1;
	}
	matrix4.print("----matrix 4's diagonal increased by 100----");

	for(int i=0; i < 1000; i++){
		matrix4 = matrix4 - matrix1;
	}
	matrix4.print("----matrix 4's diagno decreased by 1000----");
*/
	return 0;
}