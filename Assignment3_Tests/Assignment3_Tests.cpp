#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "../Assignment3_RPS/Assignment3.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RpsTests
{
    TEST_CLASS(RpsTests)
    {
    public:

        TEST_METHOD(Test_Rock_vs_Scissors_Player1)
        {
            const char* result = playRockPaperScissors("Rock", "Scissors");
            Assert::AreEqual("Player1", result);
        }

        TEST_METHOD(Test_Paper_vs_Rock_Player1)
        {
            const char* result = playRockPaperScissors("Paper", "Rock");
            Assert::AreEqual("Player1", result);
        }

        TEST_METHOD(Test_Scissors_vs_Scissors_Draw)
        {
            const char* result = playRockPaperScissors("Scissors", "Scissors");
            Assert::AreEqual("Draw", result);
        }

        TEST_METHOD(Test_Rock_vs_Banana_Invalid)
        {
            const char* result = playRockPaperScissors("Rock", "Banana");
            Assert::AreEqual("Invalid", result);
        }

    };
}