//Write a program to check even or odd

/*# include <iostream>
using namespace std;
int main(){
    int num;
    cout<< "enter the number "<<endl;
    cin>>num;
    if (num%2==0){
        cout<<"this is even number"<<endl;
    }
    else{
        cout<<"tnis is odd number"<<endl;
    }
return 0;
}*/

#include <iostream>
using namespace std;

int main() {
    int day ;
    cout << "enter the day"<<endl;
    cin>>day;
    switch(day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        default:
            cout << "Invalid day";
    }

    return 0;
}
