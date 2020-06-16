#include <stdio.h>
main()
{
  int arr1[3][3],s,p;
  
       printf("Input elements in the matrix :\n");
  for(s=0;s<3;s++)
  {
      for(p=0;p<3;p++)
      {
	      printf("element - [%d],[%d] : ",s,p);
	      scanf("%d",&arr1[s][p]);
      }
  }  
 
 printf("\nThe matrix is : \n");
  for(s=0;s<3;s++)
  {
      printf("\n");
      for(p=0;p<3;p++)
           printf("%d\t",arr1[s][p]);
  }
 printf("\n\n");
}

