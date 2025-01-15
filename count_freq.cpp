#include<iostream>
#include<cmath>
using namespace std;

void count(int arr[],int n)
{  
    int i = 0;
    while(i < n)
    {
        if(arr[i] <= 0)
         {  i+=1;
            continue;
         }
        
        int eI=arr[i]-1;
        if(arr[eI]>0)
        {
            arr[i]=arr[eI];
            arr[eI]=-1;
        }
        else { arr[eI]-=1;
          arr[i]=0;
          i+=1;
        }
    }
}
int main()
{   int arr[]={2,3,3,2,5,6};
    count(arr,5);
    for(int i=0;i<5;i++)
       cout<<"Count of "<<i+1<<" is "<<abs(arr[i])<<"\n";
    return 0;
}