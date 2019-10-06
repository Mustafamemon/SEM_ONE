

#include <stdio.h>
//#include <iostream>
//#include <string>
#include <math.h>

//using namespace std;

int main()
{
string s;
cin>>s;
int len=s.length();
int width,height,i,j,k;

width=floor(sqrt(len)); //rows
height=ceil(sqrt(len)); //columns

for(i=0;i<height;i++)
{
for(j=0;j<height;j++)
{
k=(j*height)+i;
cout<<s[k];
}
cout<<"\t";
}
return 0;
}


