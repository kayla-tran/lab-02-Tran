#include "header/c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest, ThisIsASentence) {
    char* test_val[5]; test_val[0] = "./c-echo"; test_val[1] = "This"; test_val[2] = "is"; test_val[3] = "a"; test_val[4] = "sentence";
    EXPECT_EQ("This is a sentence", echo(5,test_val));
}

TEST(EchoTest, ABCDEF) {
    char* test_val[7]; test_val[0] = "./c-echo"; test_val[1] = "A"; test_val[2] = "B"; test_val[3] = "C"; test_val[4] = "D"; test_val[5] = "E"; test_val[6] = "F";


    EXPECT_EQ("A B C D E F", echo(7,test_val));
}

TEST(EchoTest, TestTest) {
    char* test_val[4]; test_val[0] = "./c-echo"; test_val[1] = "Test"; test_val[2] = " "; test_val[3] = "Test";
    EXPECT_EQ("Test   Test", echo(4,test_val));
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
