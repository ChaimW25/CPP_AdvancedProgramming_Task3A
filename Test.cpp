#include "doctest.h"
#include "Matrix.hpp"

#include <string>
#include <algorithm>
using namespace std;

#include <string>
#include <vector>

using namespace std;

namespace zich {
//    Notebook n;
    std::vector<double> arr = {1, 1, 1, 1};
    std::vector<double> identity = {2, 0, 0, 2};
    Matrix a{arr, 2, 2};
    Matrix b{identity, 2, 2};

    TEST_CASE("Good input") {

        Matrix c = a + b;
        std::vector<double> vec2 = {3, 1, 1, 3};
                CHECK(c.vec == vec2);

        a += b;
        vec2 = {3, 1, 1, 3};
                CHECK(a.vec == vec2);

        c = +a;
        vec2 = {3, 1, 1, 3};
                CHECK(c.vec == vec2);


        Matrix d{arr, 2, 2};
        c = d - b;
        vec2 = {-1, 1, 1, -1};
                CHECK(c.vec == vec2);

        d += b;
        vec2 = {-1, 1, 1, -1};
                CHECK(d.vec == vec2);

        d = +a;
        vec2 = {-1, 1, 1, -1};
                CHECK(d.vec == vec2);


        Matrix e{arr, 2, 2};//{1,1,1,1}
        Matrix f{arr, 2, 2};//{2,0,0,2}

        bool g = e < f;
                CHECK(g == false);
        g = e <= f;
                CHECK(g == false);
        g = e > f;
                CHECK(g == false);
        g = e >= f;
                CHECK(g == false);
        g = e == f;
                CHECK(g == false);
        g = e != f;
                CHECK(g == true);

        c = ++e;
        vec2 = {2, 2, 2, 2};
                CHECK(c.vec == vec2);

        c = --e;
        vec2 = {0, 0, 0, 0};
                CHECK(c.vec == vec2);

        c = e * 3;
        vec2 = {3, 3, 3, 3};
                CHECK(c.vec == vec2);

        c = e * f;
        vec2 = {2, 2, 2, 2};
                CHECK(c.vec == vec2);

//        cout << e <<
        std::vector<double> temp = {3, 1, 1, 3, 3, 4, 4, 2, 2, 4, 1, 2, 2, 1};
        Matrix r{temp, 3, 4};//{1,1,1,1}

    }
    TEST_CASE("Bad input") {
        Matrix e{arr, 2, 2};//{1,1,1,1}

        std::vector<double> temp = {3, 1, 1, 3, 3, 4, 4, 2, 2, 4, 1, 2};
        Matrix r{temp, 3, 4};//{1,1,1,1
        bool t;
        CHECK_THROWS(e+r);
        CHECK_THROWS(e-r);
        CHECK_THROWS(e+=r);
        CHECK_THROWS(e-=r);
        CHECK_THROWS(t=e<r);
        CHECK_THROWS(t=e<=r);
        CHECK_THROWS(t=e==r);
        CHECK_THROWS(t=e!=r);
        CHECK_THROWS(e*r);










//        n.write(9, 7, 9,Direction::Horizontal, "s");
//                CHECK("s" == n.read(9,7,9,Direction::Horizontal,1) );
//        n.write(0, 7, 9,Direction::Horizontal, "s")
//                CHECK("s" == n.read(0,7,9,Direction::Horizontal,1) );
//        n.write(0, 0, 0,Direction::Horizontal, "s")
//                CHECK( "s" == n.read(0,0,0,Direction::Horizontal,1) );
//                CHECK(n.write(105, 7, 9,Direction::Horizontal, "s") == n.read(9,7,9,Direction::Horizontal,1) );
//                CHECK(n.write(9, 706, 9,Direction::Horizontal, "s") == n.read(9,7,9,Direction::Horizontal,1) );
//                CHECK(n.write(105, 0, 9,Direction::Horizontal, "s") == n.read(9,7,9,Direction::Horizontal,1) );
//                CHECK(n.write(9, 9, 9,Direction::Horizontal, "s") == n.read(9,7,9,Direction::Horizontal,1) );
//                CHECK(n.write(300, 300, 0,Direction::Horizontal, "s") == n.read(9,7,9,Direction::Horizontal,1) );
//                CHECK(n.write(97, 77, 97,Direction::Horizontal, "s") == n.read(9,7,9,Direction::Horizontal,1) );
//                CHECK(n.write(0, 0, 1,Direction::Horizontal, "s") == n.read(9,7,9,Direction::Horizontal,1) );


//    }

//    TEST_CASE("Bad input") {
//                CHECK_THROWS(n.write(-10, 5, 6, Direction::Horizontal, "s"));
//                CHECK_THROWS(n.write(-10, 5, 105, Direction::Horizontal, "s"));
//                CHECK_THROWS(n.write(10, 5, 209, Direction::Horizontal, "s"));
//                CHECK_THROWS(n.write(-10, -10, 6, Direction::Horizontal, "s"));
//                CHECK_THROWS(n.write(-10, 5, -6, Direction::Horizontal, "s"));
//                CHECK_THROWS(n.write(10, 5, -6, Direction::Horizontal, "s"));
//                CHECK_THROWS(n.write(-10, 0, 6, Direction::Horizontal, "s"));
//                CHECK_THROWS(n.write(10, -5, 6, Direction::Horizontal, "s"));
//                CHECK_THROWS(n.write(-10, 5, 0, Direction::Horizontal, "s"));
//                CHECK_THROWS(n.write(0, 0, 106, Direction::Horizontal, "s"));

    }
}