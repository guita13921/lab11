#include <iostream>
#include <iomanip>
#include<fstream>
#include<cmath>
using namespace std;

int main(){
    int N = 0;
    double mean, stddev, sum = 0, lol = 0;
    ifstream source;
    source.open("score.txt");
    string score;
    while(getline(source,score)){
        sum += atof(score.c_str());
        lol += pow(atof(score.c_str()),2);
        N++; 
    }
    mean = sum/N;
    stddev = sqrt((lol/N)-pow(mean,2));
    cout << "Number of data = "<< N << endl;
    cout << setprecision(3);
    cout << "Mean = "<< mean << endl;
    cout << "Standard deviation = "<< stddev;

return 0;
}