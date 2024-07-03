/*Q1.  write a menu driven program in c to Create a structure name as Employee to hold empid, empname , empemail , empcontact and empsalry.
			The menu options should be: 
		
		1. Add Employee Details.
		2. Display All Employee Details.
		3. Search Employee By Id then employee is found or not.
		4. Update Employee Details By Name.
		5. Delete Employee Details By Email.
		6. Display list count of the Employee in Company.
		7. Display list the employee in the ascending order of employee salary.
		8. Display the employee details in highest salary.
		9. Display the employee details in minimum salary is 10000 to maximum salary is 60000.
		10. Exit.
		*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int size,count=0;
	struct emp{
		int id;
		char name[10];
		char email[30];
		char contact[15];
		int sal;
	};
void AddRecord(struct emp*);
void DisplayRecord(struct emp*);
void SearchRecord(struct emp*);
void UpdateRecord(struct emp*);
void DeleteRecord(struct emp*);
void CountEmployee(struct emp*);
void SortRecord(struct emp*);
void Highsalary(struct emp*);
void SalaryRange(struct emp*);
void ExitRecord(struct emp*);
int main()
{
	int i,ch,x;
	struct emp *e;
	printf("\nEnter Number of Employees:");
	scanf("%d",&size);
	e=(struct emp*)malloc(sizeof(struct emp)*size);
	
    do{
        printf("\n1. Add Employee Details.");
		printf("\n2. Display All Employee Details.");		
		printf("\n3. Search Employee By Id then employee is found or not.");
		printf("\n4. Update Employee Details By Name.");
		printf("\n5.Delete Employee Details By Email.");
		printf("\n6.Display list count of the Employee in Company.");
		printf("\n7. Display list the employee in the ascending order of employee salary.");
		printf("\n8.Display the employee details in highest salary.");
		printf("\n9. Display the employee details in minimum salary is 10000 to maximum salary is 60000.");
		printf("\n10. Exit.");
        printf("\nEnter The choice:");
        scanf("%d",&ch);
        switch(ch)
          {
     	    case 1:AddRecord(e);
	               break;
	        case 2:DisplayRecord(e);
                   break;
            case 3:SearchRecord(e);
                   break;
            case 4:UpdateRecord(e);
                   break;
            case 5:DeleteRecord(e);
                   break;
            case 6:CountEmployee(e);
                   break;
            case 7:SortRecord(e);
                   break;
            case 8:Highsalary(e);
                   break;
            case 9:SalaryRange(e);
                   break;
            case 10:exit(0);
                    break;
                    
            default:printf("\nWrong Input");
                    break;
	       }
           printf("\nDo you want to continue(y-1/n-0)");
           scanf("%d",&x);
       }while(x==1);
	      
	return 0;
}
void AddRecord(struct emp *e)
{
	if(count==size)
	 {
	   printf("\n Full....Can't add Record");
 	 }
	else
	 {
		printf("\nEnter Id,Name,Email,contact & Salary of Employee%d:\n",count+1);
		_flushall();
	    scanf("%d%s%s%s%d",&e[count].id,e[count].name,e[count].email,e[count].contact,&e[count].sal);
	    count++;    
	 }
}
	 
void DisplayRecord(struct emp *e)
{
	int i;
	if(count==0)
	 {
		printf("\n Empty.........No Record");
	 }
	else
	 {
		printf("\n*********Employee Data**********\n\n");
	    printf("\nId\tName\tEmail\tContact\tSalary\n");
	    for(i=0;i<count;i++)
	       {
	          printf("\n%d\t%s\t%s\t%s\t%d",e[i].id,e[i].name,e[i].email,e[i].contact,e[i].sal);
           } 
	}
	
}
void SearchRecord(struct emp *e)
{
	int ch,sid,i,flag=0;
	char sname[10];
	printf("\n1.By Id\n2.By Name");
	printf("\nEnter Your Choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:printf("\nEnter Id to be Searched:");
		       scanf("%d",&sid);
		       for(i=0;i<count;i++)
		          {
		          	if(e[i].id==sid)
		          	  {
		          	  	printf("\n%d\t%s\t%s\t%s\t%d",e[i].id,e[i].name,e[i].email,e[i].contact,e[i].sal);
		          	  	flag=1;
					  }
				  }
				if(flag==0)
				{
				  printf("\nRecord with id %d Not Found",sid);
				}
				break;
		case 2:printf("\nEnter Name to be Searched:");
		       scanf("%s",sname);
		       for(i=0;i<count;i++)
		       {
		       	 if(strcmp(e[i].name,sname)==0)
		       	 {
		       	   printf("\n%d\t%s\t%s\t%s\t%d",e[i].id,e[i].name,e[i].email,e[i].contact,e[i].sal);
		           flag=1;	
				 }
			   }
			   if(flag==0)
				{
				  printf("\nRecord with Name %s Not Fount",sname);
				}
				break;
	}
	
}

void UpdateRecord(struct emp *e)
{
	int i,sid,flag=0;
	char uname[10];
	printf("\nEnter Id to be Searched:");
    scanf("%d",&sid);
    printf("\nEnter Name to be updated:");
    scanf("%s",uname);
	for(i=0;i<count;i++)
		{
		  if(e[i].id==sid)
		    {
		      strcpy(e[i].name,uname);
		      flag=1;
		    }
		}
	if(flag==0)
	  {
		printf("\nRecord with id %d Not Found",sid);
	 }
	else
	  {
		printf("\n*********Employee Data**********\n\n");
	    printf("\nId\tName\tEmail\tContact\tSalary\n");
		for(i=0;i<count;i++)
	     {
		   printf("\n%d\t%s\t%s\t%s\t%d",e[i].id,e[i].name,e[i].email,e[i].contact,e[i].sal);
		 }
	 }
	
}
void DeleteRecord(struct emp *e)
{
  int i,j,counter=0;
  char demail[20];
  printf("\nEnter Deleted Email:");
  scanf("%s",demail);
  for(i=0;i<count;i++)
  {
    if(strcmp(demail,e[i].email)==0)
      {
  	    counter++;
  	    for(j=i;j<count;j++)
    	  {
    	    e[j]=e[j+1];
    	  }
      }
  }
  if(counter==0)
	{
	  printf("\nEmployee Not Present");
	}
  else
	  {
		printf("\n*********Employee Data**********\n\n");
	    printf("\nId\tName\tEmail\tContact\tSalary\n");
		for(i=0;i<count-counter;i++)
	     {
		   printf("\n%d\t%s\t%s\t%s\t%d",e[i].id,e[i].name,e[i].email,e[i].contact,e[i].sal);
		 }
	 }
	 count=count-counter;
  	
}
void CountEmployee(struct emp *e)
{
	printf("\nTotal Number of Employees:%d",count);
}
void SortRecord(struct emp *e)
{
	int i,j;
	struct emp temp;
	for(i=0;i<count;i++)
      {
     	for(j=i+1;j<count;j++)
     	  {
     		if(e[i].sal>e[j].sal)
     		  {
     		    temp=e[i];
			    e[i]=e[j];
			    e[j]=temp;	
			  }
	      }
	  } 
	  printf("\n*********Employee Data**********\n\n");
	  printf("\nId\tName\tEmail\tContact\tSalary\n");
	  for(i=0;i<count;i++)
	     {
		   printf("\n%d\t%s\t%s\t%s\t%d",e[i].id,e[i].name,e[i].email,e[i].contact,e[i].sal);
		 }
}
void Highsalary(struct emp *e)
{
   int maxsal=e[0].sal;
   int i,index=0;
   for(i=0;i<count;i++)
   {
   	if(maxsal<e[i].sal)
   	  {
   		maxsal=e[i].sal;
   		index=i;
	  }
   }
   printf("\nHaving Higher Salary Record is:\n");
   printf("\n%d\t%s\t%s\t%s\t%d",e[index].id,e[index].name,e[index].email,e[index].contact,e[index].sal);
}
void SalaryRange(struct emp *e)
{
	int i;
	printf("\nSalary Range");
	for(i=0;i<count;i++)
	{
		if(e[i].sal>=10000 && e[i].sal<=60000)
		{
			printf("\n%d\t%s\t%s\t%s\t%d",e[i].id,e[i].name,e[i].email,e[i].contact,e[i].sal);
		}
	}
}
