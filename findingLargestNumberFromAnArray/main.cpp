#include <iostream>

using namespace std;

int main()
{
    float num[10];
    int i;

    //Storing Numbers entered by user into the array
    for(i=0; i<10; i++){
        cout << "Enter Numbers " << i+1<< " : ";
        cin>> num[i];
    }
    //Loop to store larges number to arr[0]
    for(i=1; i<10; i++){
        if(num[0] < num[i]){
            num[0]=num[i];
        }
    }
    cout << "Largest element = "<< num[0];
    return 0;
}
