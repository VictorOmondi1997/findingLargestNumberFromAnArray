#include <iostream>

using namespace std;

class Numbers{
    int i;
    float num[];

public:
    void getNum(){
        for(i=0; i<10; i++){
            cout << "Enter Number "<< i+1<< " : ";
            cin >> num[i];
        }
        for(i=0; i<10; i++){
            if(num[0]<num[i]){
                num[0]=num[i];
            }
        }
        cout << "The largest Number is: "<< num[0];
    }
};

int main(){
    Numbers No;
    No.getNum();
    return 0;
}
