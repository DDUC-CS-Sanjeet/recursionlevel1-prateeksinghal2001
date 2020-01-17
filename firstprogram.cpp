//final program for recursion and iteration
#include<iostream>
using namespace std;

int gcdr(int num1, int num2)
{
	if(num2!=0)
	{
		return gcdr(num2, num1 % num2);
	}
	else
	{
		return num1;
	}
}
int factr(int num)
{
	if(num > 1)
	{
		return num*factr(num-1);
	}
	else
	{
		return 1;
	}
}
int powerr(int base, int pow)
{
	if(pow!=0)
	{
		return (base*powerr(base,pow-1));
	}
	else
	{
		return 1;
	}
}
int fibonaccir( int x)
{
	if(x==0||x==1)
	{
		return (x);
	}
	else
	{
		return(fibonaccir(x-1)+fibonaccir(x-2));
	}
}
int main()
{
	int choice,num1,num2,x,i,result,base,pow,num,n1,n2,factor=1,a=0,b=1,c;
	char wish;
	do
	{
		cout<<"************MENU************";
		cout<<endl<<" 1. to calculate gcd of two numbers using recursion ";
		cout<<endl<<" 2. to calculate factorial of number using recursion ";
		cout<<endl<<" 3. to calculate m raised to power n using recursion ";
		cout<<endl<<" 4. to print number of terms of fibbonacci series using recursion ";
		cout<<endl<<" 5. to calculate gcd of two numbers by iteration ";
		cout<<endl<<" 6. to calculate factorial of number using iteration ";
		cout<<endl<<" 7. to calculate m raised to power n using iteration ";
		cout<<endl<<" 8. to print number of terms of fibbonacci series using iteration ";
		cout<<endl<<" enter your choice ";
		cin>>choice;
		switch(choice)
		{
			case 1: cout<<endl<<" enter first number ";
					cin>>num1;
					cout<<endl<<" enter second number ";
					cin>>num2;
					cout<<endl<<" gcd of "<<num1<<" & "<<num2<<" is "<<gcdr(num1,num2);
					break;
					
			case 2: cout<<endl<<" enter positive integer : ";
					cin>>num;
					cout<<endl<<" factorial of "<<num<<" is "<<factr(num);
					break;		
					
			case 3: cout<<endl<<" enter base ";
					cin>>base;
					cout<<endl<<" enter power ";
					cin>>pow;
					result= powerr(base,pow);
					cout<<endl<<base<<" raised to power "<<pow<<" = "<<result;
					break;
					
			case 4: cout<<endl<<" enter the number of terms ";
					cin>>x;
					cout<<endl<<" fibbonacci series : ";
					i=0;
					while(i<x)
					{
						cout<<" "<<fibonaccir(i);
						i++;
					}
					break;
					
			case 5: cout<<endl<<" enter first number ";
					cin>>n1;
					cout<<endl<<" enter second number ";
					cin>>n2;
					while(n1!=n2)
					{
						if(n1 > n2)
						{
							n1-=n2;
						}
						else
						{
							n2-=n1;
						}
					}
					cout<<endl<<" gcd is "<<n1;
					break;
					
			case 6: num=0;
					cout<<endl<<" enter any positive integer ";
					cin>>num;
					for(int j=num;j>0;j--)
					{
						factor=factor*j;
					}
					cout<<endl<<" factorial of "<<num<<" is "<<factor;
					break;
					
			case 7: base=0;
					pow=0;
					result=1;
					cout<<endl<<" enter base ";
					cin>>base;
					cout<<endl<<" enter power ";
					cin>>pow;
					for(i=1;i<=pow;i++)
					{
						result*=base;
					}
					cout<<endl<<base<<" raised to power "<<pow<<" is "<<result;
					break;
			
			case 8: x=0;
					i=2;
					cout<<endl<<" enter the number of terms of fibbonacci series ";
					cin>>x;
					cout<<endl<<a<<" "<<b<<" ";
					while(i<x)
					{
						c=a+b;
						cout<<c<<" ";
						a=b;
						b=c;
						i++;
					}	
					break;
					
			default: cout<<endl<<" wrong choice ";
		}
		
		cout<<endl<<" do you wish to continue (y/n) ";
		cin>>wish;
		
	}while(wish=='y'||wish=='Y');
	
	return 0;
}
