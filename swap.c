void swap_max(int A[], int n, int m)
{  int largenum,pos,temp;
    largenum=A[m];
   for(int i=m; i<n;i++)
    {  
        if(A[i+1]>largenum)
          { largenum = A[i+1];
             post = i+1;
          }
   
     }  
    temp=A[m];
    A[m]=A[pos];
    A[pos]=temp;
}

    
    
      
