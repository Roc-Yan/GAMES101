#include<cmath>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>
#include<iostream>

using namespace std;

int main() {
    // Basic Example of cpp
    cout << "Example of cpp \n";
    float a = 1.0, b = 2.0;
    cout << a << endl;
    cout << a / b << endl;
    cout << sqrt(b) << endl;
    cout << acos(-1) << endl;
    cout << sin(30.0 / 180.0 * acos(-1)) << endl;

    // Example of vector
    cout << "Example of vector \n"; // vector definition
    Eigen::Vector3f v(1.0f, 2.0f, 3.0f);
    Eigen::Vector3f w(1.0f, 0.0f, 0.0f); // vector output
    cout << "Example of output \n";
    cout << v << endl;
    // vector add
    cout << "Example of add \n";
    cout << v + w << endl;
    // vector scalar multiply
    cout << "Example of scalar multiply \n";
    cout << v * 3.0f << endl;
    cout << 2.0f * v << endl;

    // Example of matrix
    cout << "Example of matrix \n";
    // matrix definition
    Eigen::Matrix3f i, j;
    i << 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0;
    j << 2.0, 3.0, 1.0, 4.0, 6.0, 5.0, 9.0, 7.0, 8.0; // matrix output
    cout << "Example of output i\n";
    cout << i << endl;
    cout << "Example of output j\n";
    cout << j << endl;
    // matrix add i + j
    cout << "Example of add \n";
    cout << i + j << endl;
    // matrix scalar multiply i * 2.0
    cout << "Example of scalar multiply \n";
    cout << i * 2.0f << endl;
    // matrix multiply i * j
    cout << "Example of matrix multiply \n";
    cout << i * j << endl;
    // matrix multiply vector i * v
    cout << "Example of matrix multiply vector \n";
    cout << i * v << endl;

    cout << "output Assignment0 \n";
    Eigen::Vector3f p(2.0f, 1.0f, 1.0f), pp;
    float alpha = 45.0 / 180.0 * acos(-1);
    Eigen::Matrix3f rotate, translation;
    rotate << cos(alpha), -sin(alpha), 0, sin(alpha), cos(alpha), 0, 0, 0, 1;
    translation << 1, 0, 1, 0, 1, 2, 0, 0, 1;
    pp = translation * rotate * p;
    printf("(%f, %f)", pp[0], pp[1]);
    return 0;
}
