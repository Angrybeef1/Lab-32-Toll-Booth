//COMSC 210 | LAb 32 | Robert Stonemetz

#include "Car-1.h"
#include <deque>
#include <random>
#include <ctime>

const int QUEUE_SIZE = 2;
const double PAY_TOLL = 0.55;

void Print Queue(const deque<car>& queue){
    cout << "Queue:\n";
    if (queue.empty()){
        cout << "\n";
        return;
    }
    for (const Car& car : queue){
        cout << "    ";
        car.print();
    }

}


int main (){
    srand(time(0));

    cout << "Initial queue:\n";
    printQueue();
    cout << endl;

    int time = 1;
    
    while(){

    }

    return 0;

}