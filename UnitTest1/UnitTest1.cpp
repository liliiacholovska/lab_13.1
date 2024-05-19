#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab13.1/var.h"
#include "../Lab13.1/dod.h"
#include "../Lab13.1/sum.h"
#include <sstream> 
#include "../Lab13.1/Lab_13_1.cpp"

namespace nsVar {
    double dx = 0.0;
    double e = 0.0;
    double s = 0.0;
    double x = 0.0;
    double x_k = 0.0;
    double x_p = 0.0;
    int n = 0;
}

namespace nsSum {
    void sum() {
    }
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(CalculateSum)
        {
            std::istringstream input("0.0\n1.0\n0.1\n0.001\n");
            std::cin.rdbuf(input.rdbuf()); 

            main(); 

            std::cin.rdbuf(nullptr);

            Assert::AreEqual(0, nsVar::s, 0.001); 
            Assert::AreEqual(0, nsVar::n); 

            nsVar::x = 1.0;
            main(); 
            Assert::AreEqual(0, nsVar::s, 0.001); 
            Assert::AreEqual(0, nsVar::n); 
        }
    };
}