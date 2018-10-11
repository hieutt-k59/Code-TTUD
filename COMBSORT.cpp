#include <iostream>
#include <cstdio>
using namespace std;
 
void heapify(float *a, int n)
{
    int gap=n;
    float shrink=1.3;
    bool sorted =false;
    while((gap>1)||(sorted==false)){
    gap=gap/shrink;
    if(gap<1)gap=1;
    int i=0;
    if(gap==1)sorted=true;
    while((i+gap)<n)
    {
        if(a[i]>a[i+gap]){
        float temp=a[i];
        a[i]=a[i+gap];
        a[i+gap]=temp;
        if(gap==1)sorted =false;
        }
        i++;
    }
    }
}
 
int main(){
    int n;
    cin>>n;
    float *p=new float[n];
    for(int i=0; i<n; i++)
    { 
    scanf("%f",&p[i]);}
    heapify(p,n);
    for(int i=0; i<n; i++)
    {printf("%.2f ",p[i]);}
    delete p;
    return 0;
}