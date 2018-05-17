#include <bits/stdc++.h>
using namespace std;
int Bsearch(int a[],int l,int h,int n)
{
    
        int mid = (l+h)/2;
 
          if (a[mid] == n)  
            return mid;
 
           if (a[mid] > n) 
             Bsearch(a, l, mid-1, n);
 else
             Bsearch(a, mid+1, h, n);
   
}

int main() {
    
    int n,i=0;
    int a[150];
    cin>>n;
    
    while(cin>>a[i])
          i++;
    
    a[i]=n;
    i++;
    sort(a,a+i);
    
    int x=Bsearch(a,0,i-1,n);
     int y=i;
    for(i=x;i<y;i++)
    
    cout<<a[i]<<" ";
    
    for(i=x-1;i>=0;i--)
    cout<<a[i]<<" ";
       
     int  distance=(a[y-1]-a[x])*2+a[x]-a[0];
    
        cout<<endl<<"total distance: "<<distance;
    return 0;
}
