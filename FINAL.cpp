#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
	class cpe1b{ 
		public:
			long palindromic_prime(long num); 
			void exam(long num[1000],long size);
			void sorting_ascending(long num[1000],long size);
			long i,num,size; 
			long rev,rem,bin,base,key,pdtemp,pdnum,count,j,temp,s,pdnumber,count1; 
	};
	
int main() 
	{
		long i,inp[1000],size; 
		cpe1b derek; 
			cout<<"Input: ";  
						size=0; 
							for(i=0;;i++)
							{ 
								cin>>inp[i];
									if(inp[i]==0)
												{
													break; 
												}
								size++; 
							}
							cout<<"Number of array"<<" = "<<size<<endl;
							derek.exam(inp,size);
	}						
	
	
	long cpe1b::palindromic_prime(long num) 
	{	
			count=0; 
							for(j=2;j<num;j++)
							{			
								if(num%j==0)
								{
									count++;
								}
							}
							
		if(count==0)
		{ 	
				pdtemp=num;
				bin=0;
				base=1;
				
					       for(;pdtemp>0;)
						   {
								rem=pdtemp%2;
								bin=bin+(rem*base);
								base=base*10;
								pdtemp=pdtemp/2;
							}
				key=bin;
				temp=0;
				rev=0;
					      for(;key!=0;)
						   {
								temp=key%10;
								key=key/10;
								rev=temp+(rev*10);
							}
		
				if(rev==bin)
				{	
					return 1; 
				}
				else
				{
					return 0; 
				}
		}
				else
				{
					return 0;
				}
	}

	void cpe1b::exam(long num[1000],long size) 
{
		cpe1b derek;
		if(derek.palindromic_prime(size)==1)
		{
			cout<<"Ascending: ";
			derek.sorting_ascending(num,size);
		}
		else
		{
			for(i=0;i<size;i++)
				{
					cout<<" "<<num[i];
				}
		}
}

	void cpe1b::sorting_ascending(long num[1000],long size)
		{
			long temp1;
			for(i=0;i<size;i++)
				{
					for(j=i+1;j<size;j++)
						{
							if(num[i]>num[j])
								{
									temp1=num[i];
									num[i]=num[j];
									num[j]=temp1;
								}
						}		
					
				}
		for(i=0;i<size;i++)
			{
				cout<<" "<<num[i];
			}
		}
		
	
	
	
		

