#include <iostream>
int V[100];
using namespace std;
int main()
{
   int n;
   cout<<"n=";
   cin>>n;
   cout<<"Introduceti numerele:"<<endl;
   int i;
   for(i=0;i<n;i++){cout<<"["<<i<<"]=";cin>>V[i];
   cout<<"{"<<i<<"}";}
}
