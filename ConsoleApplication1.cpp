#include <iostream>
using namespace std;

//Prototype
float find_sum(float p, float q, float r);

//calculate average
float find_avg(float s){
    return (s / 3);
}

//find the result
void find_result(string n, float a){
    //normal data and validation for boundaries
    if (a >= 80 && a <= 100) {
        cout << "\n Hi " << n << "! Congratulations, You have passed in distinction";
    }
    else if (a < 50 && a >= 0) {
        cout << "\n Hi " << n << "! Sorry, You have failed in the examination";
    } else
        cout << "\n Hi " << n << "! congratulations, You have passed.";
}


int main()
{
    string name;
    float x, y, z, sum, avg;

    cout << "Please enter your name and 3 grades (in the range of 0 to 100) : ";
    cin >> name >> x >> y >> z;
    
    cout << name << "\t" << x << "\t" << y << "\t" << z;
    sum = find_sum(x, y, z);
    cout << " \nThe sum = " << sum;
    //calculate average
    avg = find_avg(sum);
    cout << " \nThe average = " << avg;

    //find result
    find_result(name,avg);
}

//needs protoype
float find_sum(float p, float q, float r) {
    return (p + q + r);
}

// Algorithm
//1. Input name and 3 grades (x,y,z)
//2. call find_sum(x,y,z) and store it in sum
//3. call find_avg(sum) and store it in avg
//4. call find_result(avg) and output the result
