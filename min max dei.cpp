#include <iostream>

using namespace std;

int min(int bal,int jobb,int v[]){
if(bal==jobb){return v[bal];}
int m=(bal+jobb)/2;
int min1=min(bal,m,v);
int min2=min(m+1,jobb,v);
if(min1<min2){return min1;}
return min2;
}
int main()
{
int v[8]={1,5,2,0,3,6,9,8};
cout<<min(0 , 7, v);
    return 0;
}
