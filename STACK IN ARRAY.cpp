#include<iostream>
using namespace std;

class stack
{
	private:
		int top;
		int arr[5];
		
		public:
			
		stack()	
		{
			top=-1;
			for(int i=0;i<5;i++)
			{
				arr[i]=0;
			}
		}
	bool isempty()                   
	{
		if(top== -1)
			return true;
		else return false;
	}
	bool isfull()                   
	{
		if(top==4)
		     return true;
		else 
		     return false;
	}                                  
	void push(int val)                 
	{
		if(isfull())
		{
			cout<<"stack overflow<<endl";
		}
		else
		{
			top++;                      
			arr[top]=val;                
		}
	}
	int pop()                             
	{
		if(isempty())
		{
			cout<<"stack underflow<<endl";
			return 0;
		}
		else
		{
			int popvalue=arr[top];
			arr[top]=0;
			top--;
			return popvalue;
		}
	}
	
	int count()                          
	{
		return (top+1);
	}
	
	int peak(int pas)
	{
		if(isempty())
		{
			cout<<"stack underflow<<endl";
			return 0;
		}
	else
	{
		return arr[pas];
		}	
	}
	void change(int pas,int val)
	{
	arr[val]=val;
	cout<<"valve is changed"<<val<<endl;		
	}
	void diplay()
	{
		cout<<"all value of stack are:";
		for(int i=4;i>=0;i--)
		{
		cout<<arr[i]<<endl;	
		}
	}
};
int main()
{
	
stack s1;
int option ,position ,value;


do{
	cout<<"what opration you want to perform .select option number ,enter 0 to exit "<<endl;
	cout<<"1.push()"<<endl;
	cout<<"2.pop()"<<endl;
	cout<<"3. isempty()"<<endl;
	cout<<"4.isfull"<<endl;
	cout<<"5.peak()"<<endl;
	cout<<"6.count()"<<endl;
	cout<<"7.change()"<<endl;
	cout<<"8.disply()"<<endl;
	cout<<"9.clear screen	()"<<endl<<endl;
	cin>>option;
	switch(option)
	{
		case 1:
			cout<<"enter the item to pish in the stack";
			cin>>value;
			s1.push(value);
			break;
			
		case 2:
		cout<<"pop funtion called: pop value"<<s1.pop();
		break;
		
		case 3:
			if(s1.isempty())
			{
				cout<<"stack is empty"<<endl;
			}
			else
			{
				cout<<"stack is not empty"<<endl;
				
			}
			break;
		
		case 4 :
			if(s1.isfull())
			{
			
				cout<<"stack is full"<<endl;
				
			
		}
		 else 
		 {
		 	cout<<"stack is not empty"<<endl;
		 	
		 }
		
		break;
		
		case 5:
		cout<<"enter the position to find peek"	<<endl;
		cin>>position;
		cout<<"peek fution called -value at position"<<position<<"is"<<s1.peak(position)<<endl;
		break;
		case 6:
			cout<<"number of item in stack"<<s1.count()<<endl;
			break;
			
			case 7:
				cout<<"change funtion called"<<endl;
	        cout<<"enter position item want to be change"<<endl;
	        cin>>position;
	        cout<<endl;
	        cout<<"enter the item you waant to change";
	        s1.change(position,value);
	        break;
	        
	        case 8:
	        	cout<<"disply funyion called"<<endl;
	        	s1.diplay();
	        	break;
	        
			case 9:
				system("cls");
				break;
				default:
					cout<<"enter the proper input"<<endl;
					
					break;
				
	}
		
}	while(option!=0);
	return 0;
}



