//upside down
#include <iostream>
using namespace std;
int main()
{
    int a,ra;
    cin>>a;
    int d1=a%10;
    int d2=a/10%100;
    int d3=a/100;
    ra=(d1*100)+(d2*10)*(d3);
    cout<<ra;
    return 0;
}
