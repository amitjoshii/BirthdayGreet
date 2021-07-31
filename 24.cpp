class Employee 
{ 
 	int eid; 
 	char name[20], city[20]; 
 	float sal;  
 	 
 	public : getData() 
 	 	 	 { 
 	 	 	  	cout<<"\nEnter Employee ID : "; 
 	 	 	   	cin>>eid; 
 	 	 	   	cout<<"\nEnter Employee Name : "; 
 	 	 	   	cin>>name; 
 	 	 	 	cout<<"\nEnter Employee Salary : ";  	 	 	   	cin>>sal; 
 	 	 	 	cout<<"\nEnter Employee City : "; 
 	 	   	cin>>city; 
 	 	   	 
 	 	 } 
 	 	  
 	 	 display() 
 	 	 	 {  	 	 	  	 
 	 	 	 	cout<<"\nEmployee ID : "<<eid;  	 	 	 
            	cout<<"\nEmployee Name : "<<name;  	 	
         	 	cout<<"\nEmployee Salary : "<<sal;  	 	 	
             	cout<<"\nEmployee City : "<<city; 
 	 	 	   	 
 	 	 	 } 
}; 
 
 
int main() 
{ 
 	Employee e[5];  	int i;  
 	 
 	cout<<"\nEnter Details of 5 Employees : \n"; 
 	 
 	for(i = 0; i < 5; i++) 
 	 	e[i].getData(); 
 	 	 
 	cout<<"\n\nEmployee Details are : \n"; 
 	 
 	for(i = 0; i < 5; i++) 
 	{ 
 	 	e[i].display(); 
 	 	cout<<endl; 
 	} 
 	 	 
 	 	 
 	return 0; 
} 


Employee Id : 101
Employee Name : Amit Joshi
Employee Salary : 100000
Employee City : Dewas