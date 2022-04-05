#include "string"
#include <iostream>
#include <vector>

using namespace std;

namespace zich {

    class Matrix {
    private:
        int row;
        int col;
        vector<double> vec;
//        std::vector<std::vector<double>> matrix<row,std::vector<double>(col));


    public:

//        vector<vector<double>> a;
//        (row,vector<double>(col));

        Matrix(vector<double> v, int ro, int co){

//            std::vector<std::vector<double>> matrix<ro,std::vector<double>(co));

}

        // '+' operators
        Matrix operator + (Matrix const &obj) ;
        Matrix operator + () ;
        Matrix operator += (Matrix const &obj) ;
        //the '-' operators
        Matrix operator - (Matrix const &obj) ;
        Matrix operator - () ;
        Matrix operator -= (Matrix const &obj) ;
        //the equals operators
        bool operator == (Matrix const &obj) ;
        bool operator > (Matrix const &obj) ;
        bool operator >= (Matrix const &obj);
        bool operator != (Matrix const &obj) ;
        bool operator <= (Matrix const &obj) ;
        bool operator < (Matrix const &obj) ;
        //the increment/decrement functions
        Matrix operator ++ () ;
        Matrix operator -- () ;
        //multiplying with scalar
        Matrix operator * (int scalar);
        Matrix operator *= (double scalar);

        // matrix muliplying
        Matrix operator * (Matrix const &obj) ;

        friend std::ostream& operator<< (std::ostream& output, const Matrix& c);

        friend std::istream& operator>> (std::istream& input , Matrix& c);

        };


    };

#ifndef TASKC_MATRIX_HPP
#define TASKC_MATRIX_HPP

#endif //TASKC_MATRIX_HPP
