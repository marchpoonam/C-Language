#include<stdio.h>
int main()
{
	int a[5],b[5],i,l,j,k,m,s,sum=0,rem,prm[5],temp,count=0,t,ch;
	printf("\n1.Sorting in ascending\n2.Decending\n3.Sum of Digits at Same index\n4.store evn no at first and odd at lst\n5.store only prime no at same index of digit\n Enter your choice");
    scanf("%d",&ch);
switch(ch)
{
	case 1: printf("\nEnter 5 Array Elements");
	         for(i=0;i<5;i++)
			 {
			   scanf("%d",&a[i]); 	
			}	
			for(i=0;i<5;i++)
			{ temp=a[i],k=0;
			   
			  while(temp!=0)
			  {
			  	rem=temp%10;
			  	b[k]=rem;
			   	temp=temp/10;
			   		k++;
			  }
			 	for(l=0;l<k;l++)
	                {
                		for(s=l+1;s<k;s++)
	                 	{
	             		   if(b[l]>b[s])
	             		  { 
						     temp=b[l];
	             		     b[l]=b[s];
	             		     b[s]=temp;
		                	}
		                }   
                 	}
                 	m=0;
					for(s=0;s<k;s++)
                	{
                     m=m*10+b[s];
                	}
                	a[i]=m;
	     	             	 
			} for(i=0;i<5;i++)
             	{
            		printf("\n%d ",a[i]);
            	}	break;
       
	case 2: 
    	printf("\n Enter  FiveElements of an Array");
      	for(i=0;i<5;i++)
      	{
      		scanf("%d",&a[i]);
	  	}
	  	for(i=0;i<5;i++)
	  	{
	  	  temp=a[i],k=0;
			while(temp!=0)
			{
			  rem=temp%10;
			  b[k]=rem;
			  temp=temp/10;
			  k++;	
			}	
			for(j=0;j<k;j++)
			{
				for(l=j+1;l<k;l++)
				{
					if(b[j]<b[l])
					{
						temp=b[j];
						b[j]=b[l];
						b[l]=temp;
					}
				}
			}
			m=0;
			for(s=0;s<k;s++)
			{
				m=m*10+b[s];
			}
			a[i]=m;
		}
		for(i=0;i<5;i++)
		{
			printf("%d\t",a[i]);
		}
		break;
		
	case 3: printf("\n Enter  FiveElements of an Array");
      	for(i=0;i<5;i++)
      	{
      		scanf("%d",&a[i]);
	  	}	
	  	for(i=0;i<5;i++)
	  	{sum=0,temp=a[i];
	  	  while(temp!=0)
			{rem=temp%10;
			 temp=temp/10;
			sum=sum+rem; 
			}
				a[i]=sum;
		}
		printf("\nDisplay after sum of digits\n");
		for(i=0;i<5;i++)
		{
		printf("\t%d",a[i]);
		}break;
		
	case 4:printf("\nEnter 5 Elements of array\n");
		for(i=0;i<5;i++)
		{
		scanf("\t%d",&a[i]);
		}
		for(i=0;i<5;i++)
		{temp=a[i],k=0,j=0;
		 int e[5],o[5];
		   while(temp!=0)
		   {
		   	rem=temp%10;
		   	temp=temp/10;
		   	if(rem%2==0)
		   	{
			   e[k]=rem;
			   k++;
			   }
			else{
				o[j]=rem;
				j++;
		    	}   
		   }
		   for(s=0;s<k;s++)
		   {
		   	temp=temp*10+e[s];
		   }
		    for(s=0;s<j;s++)
		   {
		   	temp=temp*10+o[s];
		   }
			a[i]=temp;
		}
		for(i=0;i<5;i++)
		{
			printf("%d\t",a[i]);
		}
		break;
		
	case 5: printf("\nEnter the 5 array Elements");
		    for(i=0;i<5;i++)
		    {
		    	scanf("%d",&a[i]);
			}
			for(i=0;i<5;i++)
			{
				temp=a[i];
				k=0;
				
				while(temp!=0)
				{
					rem=temp%10;
			         count=0; 
				   for(s=1;s<=rem;s++)
				   {
				  	if(rem%s==0)
				  	  { count++;
					  }
			       }
			         temp=temp/10;
				     if(count==2)
				     {
					    prm[k]=rem;
				     	k++;
			         }
				 }
				m=0;
				for(l=0;l<k;l++)
				{  
				  		m=m*10+prm[l];
				}
				a[i]=m;
			}
			for(i=0;i<5;i++)
			{
				printf("\n%d",a[i]);
			}break;
     default:printf("\n You have Enterred Invalid Choice!!!");	
    }
}

