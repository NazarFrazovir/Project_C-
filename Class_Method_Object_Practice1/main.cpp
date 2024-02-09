#include <iostream>
#include <string>
using namespace std;
class car{
private:
    int speed;
    string mark;
    string owner;
    int number;
public:
    void Show(){
        cout<<"\t Mark: "<<mark<<endl;
        cout<<endl;

        cout<<"\t Owner: "<<owner<<endl;
        cout<<endl;

        cout<<"\t Speed: "<<speed<<"(km.ps)"<<endl;
        cout<<endl;

        cout<<"\t Number: "<<number<<endl;
        cout<<endl;
    }
    void SetMark(){
        cout<<"Enter mark: "<<endl;
        cin>>mark;
    }
    void SetSpeed(){
            cout<<"Enter speed: "<<endl;
            cin>>speed;
    }
    void SetOwner(){
        cout<<"Enter owner name: "<<endl;
        cin>>owner;
    }
    void SetNumber(){
            cout<<"Enter number: "<<endl;
            cin>>number;
        }
        void Hello(){
        cout<<"Hello";
    }
    };
int main() {
    const size_t COUNT = 4;
    car arr[COUNT];
    for (size_t i = 0; i < COUNT; ++i) {
        cout<<"Car #"<<i + 1<<": \n";
        arr[i].SetMark();
        arr[i].SetOwner();
        arr[i].SetSpeed();
        arr[i].SetNumber();
    }
    for (int i = 0; i < COUNT; ++i) {
        arr[i].Show();
    }
    return 0;
}
