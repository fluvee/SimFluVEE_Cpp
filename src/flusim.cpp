#include "simulator.h"
#include <iostream>
#include <chrono>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[])
{
    string filename, postfix;
    chrono::time_point<chrono::high_resolution_clock> begin, end;
    begin = chrono::high_resolution_clock::now();
    if (argc > 3) {
        cout << "\nToo many input arguments! Exiting." <<endl;
        cin.get();
        exit(1);
    }
    else if (argc == 3) {
        postfix = argv[2];
        filename = argv[1];
    }
    else if (argc == 2) {
        filename = argv[1];
    }
    else if (argc ==1) {
        filename = "Simflu6_input.csv";
    }

    Simulator current(filename, postfix);
    current.Start();
    end = chrono::high_resolution_clock::now();
    double min = chrono::duration_cast<std::chrono::nanoseconds> (end-begin).count()/ 60000000000.;
    double sec = (min - (int)min)*60.0;
    cout << "\n\nSimulation completed in " << (int)min << " minutes and "<< (int) sec<<" seconds." << endl;
    cout<<"Over!"<<endl;
    //cin.get();
    return(0);
}