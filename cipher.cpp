#include <bits/stdc++.h>
#include<string.h>
#include <stdio.h>
using namespace std;

void encrypt(int k,char a[50]){
    int length=strlen(a);
    char b[length];
    for(int i=0;i<length;i++)
    
        if(isalpha(a[i]))
        {
            if(isupper(a[i]))
            b[i]=(char)((k+(int)a[i]-65)%26+65);
            else
             b[i]=(char)((k+(int)a[i]-97)%26+97);
        }
        else
        b[i]=a[i];
      cout<<b<<endl; 
}
void decrypt(int k,char a[50])
{
    int length=strlen(a);
    char b[length];
    for(int i=0;i<length;i++)
    
        if(isalpha(a[i]))
        {
            if(isupper(a[i]))
            b[i]=(char)((26-k+(int)a[i]-65)%26+65);
            else
             b[i]=(char)((26-k+(int)a[i]-97)%26+97);
        }
        else
        b[i]=a[i];
      cout<<b<<endl; 
}
int main()
{
    int n,k,i;
     char a[50];
    cin>>n>>k;
    for( i=0;i<n;i++)
    { 
       cin.getline(a,50,'/n');
        encrypt(k,a);
    }
     for( i=0;i<n;i++)
    { 
      cin.getline(a,50,'/n');
        decrypt(k,a);
    }
    
   
    
    return 0;
}
