#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int test;
    cin>> test;
    int arr[test][2];
    int row1,row2,j=0;
    char a, b;
    do{
       cin >> a >> b;
       arr[j][0] =int(a)-32;
       arr[j][1] =int(b)-32;
        j++;
    }while(j<test);
    j=0;
    do{
        cout<<"Case "<<j+1<<":"<<endl;
       for(int i=1;i<=47;i++){
        row1=arr[j][0]%i;
        row2=arr[j][1]%i;
        if(row1==row2){
            double col = ceil(94.0/i);
            cout<<i<<" "<<col<<endl;
            }
        }
        cout<<endl;
        j++;
    }while(j<test);

	return 0;
}
