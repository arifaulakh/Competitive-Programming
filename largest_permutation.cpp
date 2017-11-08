#include <bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false); cin.tie(0); 
long long int n,k,flag=0;
cin>>n>>k;
long long int i,j=0,arr[n],brr[n],temp;
for(i=0;i<n;i++)
{
cin>>arr[i];

}

for(i=0;i<n;i++)
{
if(arr[i]!=n-i&&k!=0)
{
j=i+1;
while(arr[j]!=n-i)
j++;
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
k--;

}
}

for(i=0;i<n;i++)
cout<<arr[i]<<" ";
cout<<"\n";
return 0;
}