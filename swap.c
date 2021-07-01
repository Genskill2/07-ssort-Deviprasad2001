void swap_max(int A[], int m, int n)
{  int largenum,pos,temp;
    largenum=A[m];
   for(int i=m; i<n;i++)
    {  
        if(A[i+1]>largenum)
          { largenum = A[i+1];
             pos = i+1;
          }
   
     }  
    temp=A[m];
    A[m]=A[pos];
    A[pos]=temp;
}
void ssort(int A[], int n)
{ 
  for(int i=0;i<n;i++)
  { swap_max(A,1,i);
  }
}    
    
    
      
