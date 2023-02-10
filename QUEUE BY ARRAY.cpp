#include<iostream>
using namespace std;
class queue
{
	private:
		int rear;
		int front;
		int arr[5];
		
		public:
			queue()
			{   front =-1;
			     rear =-1;
			  for(int i=0;i<5;i++)
			  {
			  	arr[i]=0;
			  	
			  }
			}
		
	bool isempty()
	{
		if(front==-1&&rear==-1)
		{
			return true;
		}
		else return false;
		
	}
	
	bool isfull()
	{
		if(rear==4)
		{
			return true;
		}
		else return false;
		
	}
	void Enqueue(int val )
	{ 
	
		if(isfull())
		{
			cout<<"queue is full";
		}
		else if(isempty())
		{
			rear=0;
			front=0;
			arr[rear]=val;
		}
		else
		{
			rear++;
			arr[rear]=val;
		}
	}
	
	
	int dequeue()
	{
		int x;
		if(isempty())
		{
			cout<<"queue is empty";
			return 0;
		}
		else
		{
			x=arr[front];
			rear=-1;
			front=-1;
			arr[front]=0;
			return x;
			
			
		}	
     	}
	    
	    int count()
	    {
	    return	(rear-front+1);
	    	
		}
	
	void disply()
	{
		cout<<"all value in the queue ";
		for(int i=0;i<5;i++)
		{
		cout<<arr[i]<<endl;
		}
	}
	
};
int main()
{
	int value,option;
queue q1;



do{
	cout<<"what opration you want to perform .select option number ,enter 0 to exit "<<endl;
	cout<<"1.enqueue()"<<endl;
	cout<<"2.dequeue()"<<endl;
	cout<<"3. isempty()"<<endl;
	cout<<"4.isfull"<<endl;
	cout<<"5.count()"<<endl; 
	cout<<"6.disply()"<<endl;
	cout<<"7.clear screen	()"<<endl<<endl;
	cin>>option;
     switch(option)
     {
     case 0:
     	
     	
     	
	        break;
	   case 1:
	          cout<<"enter the alement of que";
	            cin>>value;
	             q1.Enqueue(value);
	 break	;
     	
     	case 2:
     		cout<<"delete funtion is call"<<endl;
     		q1.dequeue();
     		
     		break;
     		
     	case 3:
     		if(q1.isempty())
     		
     			cout<<"queue is empty"<<endl ;
			 
     		else 
     		
     			cout<<"queue is not empty"<<endl;
			 
     		
     		break;
     		
     		case 4:
     			if(q1.isfull())
     			
     				cout<<"queue is full"<<endl;
				 
     			else
     			
     				cout<<"queue is not full"<<endl;
     				
				 
     			break;
     		case 5:
			 
			 	cout<<"item inn the queue"<<q1.count();
				 	
     		
     			case 6:
     				{
					 
     				cout<<" disply funtion called  -- "<<endl;
     				q1.disply();
     			      }
     				break;
     				
     				
     				case 7:
     					system("cls");
     					break;
     					
     				   default:
	    

     					cout<<"plese enter proper number"<<endl;
     			}
     					
    } while(option!=0);
    return 0;

}






