#include <iostream>

using namespace std;

int main()
{
    string nombres[] = {"Luis", "Maria", "Jose", "Ana"};
    int promedios[] = {19, 15, 16, 17};


    for (int i=0; i<4; i++){
        cout <<nombres [i]<<" tiene una calificacion de: "<< promedios[i] <<endl;
    }

    return 0;
}
