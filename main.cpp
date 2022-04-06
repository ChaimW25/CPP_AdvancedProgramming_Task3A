#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <vector>

using namespace std;
#include "Matrix.cpp"

using namespace zich;

int main() {

    std::vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    std::vector<double> arr = {3, 0, 0, 0, 3, 0, 0, 0, 3};
    Matrix a(identity, 3, 3);  // constructor taking a vector and a matrix size
    cout << a << endl;


//    ariel::Notebook no;
//    no.write(1, 1, 1, ariel::Direction::Horizontal, "hello u");
//    string str = no.read(2, 1, 1, ariel::Direction::Horizontal, 4);
//    cout << str << endl;
    return 0;
}
