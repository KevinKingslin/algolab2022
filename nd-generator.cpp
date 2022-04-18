#include <iostream>
#include <random>
#include <fstream>
using namespace std;

int main(){
    default_random_engine generator;
    normal_distribution<double>  distribution(1, 500);
    int number;
    ofstream file;
    file.open("uniform-distribution.txt");
    for(int i=0; i<10000; ++i){
        number = distribution(generator);
        file << number << " ";
    }
    file.close();
}