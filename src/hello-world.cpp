#include <iostream>

using namespace std;

int main(int argc, char const* argv[]) {
    cout << "This is a type test writen by jon" << endl
        << "sizeof(char)" << sizeof(char) << endl
        << "sizeof(bool)" << sizeof(bool) << endl
        << "sizeof(short)" << sizeof(short) << endl
        << "sizeof(int)" << sizeof(int) << endl
        << "sizeof(long)" << sizeof(long) << endl
        << "sizeof(float)" << sizeof(float) << endl
        << "sizeof(double)" << sizeof(double) << endl << endl
        // << "sizeof(void)" << sizeof(void) << endl << endl    // c++ doesn't support sizeof(void)
        << "sizeof(char*)" << sizeof(char*) << endl
        << "sizeof(bool*)" << sizeof(bool*) << endl
        << "sizeof(short*)" << sizeof(short*) << endl
        << "sizeof(int*)" << sizeof(int*) << endl
        << "sizeof(long*)" << sizeof(long*) << endl
        << "sizeof(float*)" << sizeof(float*) << endl
        << "sizeof(double*)" << sizeof(double*) << endl
        << "sizeof(voud*)" << sizeof(void*) << endl;
}