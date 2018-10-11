#include <stdio.h>

double a[1000000];
 
double getDouble()
{
    bool neg = false;
    double num = 0.0;
    char c;
    while((c = getchar()) != '-' && (c < '0' || c > '9') && c != '.');
    if(c == '-') neg = true;
    else num = (double)(c - 48);
    while((c = getchar()) >= '0' && c <= '9') num = num*10.0 + (double)(c-48);
    if(c != '.') return num * (neg? -1 : 1);
    double x = 0.1;
    while((c = getchar()) >= '0' && c <= '9')
    {
        num+=x*(double)(c-48), x/=10;
    }
    return num*(neg? -1 : 1);
}

void swap(double a, double b)
{
    double temp = a;
    a = b;
    b = temp;
}

int partion(double *p, int L, int R, int indexPivot)
{
    int pivot = a[indexPivot];
    swap(a[indexPivot], a[R]);
    int storedIndex = L;
    for(int i = L; i < R; i++)
    {
        if(a[i] < pivot)
        {
            swap(a[storedIndex], a[i]);
            storedIndex++;
        }
    }
    swap(a[storedIndex], a[R]);
    return storedIndex;
}
void quickSort(double *p, int L, int R)
{
    int index = (L+R)/2;
    index = partion(a, L, R,index);
    if(L < index) quickSort(p, L, index-1);
    if(index < R) quickSort(p, index+1, R);
}

int main(){
    int n;
    //cin>>n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {a[i] = getDouble();}
    
    quickSort(a,0,n-1);
    
    for(int i=0; i<n; i++)
    {printf("%.2lf ",a[i]);
    }
    return 0;
}