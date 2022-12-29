#include <bits/stdc++.h>
using namespace std;
int _lowerbound_ (int inp[], int n, int target)
{
  int l = -1 , r = n;
  while (r - 1 > 1)
  {
    int mid = 1 + (r -1) / 2 ;
    if (target <=inp[mid])
      r = mid;
    else
      l = mid;
  }
  
  return r;

}

int main()
{
 
    int n, k; 
    scanf("%d,%d", &n ,&k);
  
    int inp[n];
    for( i = 0; i < n; i++)
    scanf("%d", &inp[n]);
  
    for( i = 0; i < k; i++)
      {
      int num;
      scanf("%d",num);
   
      printf("%d/n",_lowerbound_ (inp,n,num+1));
    }
  
  return 0;

}  

   

    
