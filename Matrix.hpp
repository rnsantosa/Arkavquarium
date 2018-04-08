#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <iostream>

using namespace std;

class Matrix{
    public:
        Matrix(int row, int column);
        ~Matrix();
        static int getRow();
        static int getColumn();
        void setVal(int m, int n, int val);

    private:
        const static int row;
        const static int column;
        int **data;
        //allocate the array
	    void allocArray()
	    {
		    data = new int*[row];
		    for(int i = 0; i < row; i++)
		    {
			    data[i] = new int[column];
		    }
	    }
};

#endif