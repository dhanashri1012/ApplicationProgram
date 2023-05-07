    
#include<iostream>
using namespace std;

int Addition(int no1,int no2)
{
    int ans=0;
    ans=no1+no2;
    return ans;
}
int main()
{
    int A=10, B=20;     // allocate at stach sec
    int ret=0;
    ret=Addition(A,B);
    cout<<"Addition: "<<ret<<"\n";
    return 0;
}