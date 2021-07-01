  void swap_max(int A[], int n, int m)
{  int largenum,pos,temp;
   int wide = n-m;
    largenum=A[m];
   for(int i=0; i<wide;i++)
    {  
        if(A[(m+i)]>largenum)
          { largenum = A[(m+i)];
             pos = m+i;
          }
   
     }  
  if(largenum>A[m])  
  {
    temp=A[m];
    A[m]=A[pos];
    A[pos]=temp;
  }
}
void ssort(int A[], int n)
{  
  for(int i=0;i<n;i++)
  { swap_max(A,n,i);
  }
}    
    
      
