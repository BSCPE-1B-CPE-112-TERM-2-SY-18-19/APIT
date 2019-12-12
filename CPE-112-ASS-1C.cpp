#include <iostream> // UNSAY SULOD ANI?
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// global
class cpe1b
	{
	public:
		void palindromic_prime(long x); // PASABOT ANI KAY MAGHIMO KAG FUNCTION NGA PALINDROMIC PRIME
		void wasteful_number(long x);// GI HIMOAN UG FUNCTION PARA SA WASTEFUL NUMBER
		long prime(long num); // KANI CLASS GAHIMOG FUNCTION NGA GINGANLAN UG PRIME NGA longEGER KAY longEGER MAN ANG PRIME DILI STRING DILI POD FLOAT
		long binary(long num1);// FUNCTION NI CYA SA BINARY
		long reverse(long num2);//FUNCTION SAD NI SA REVERSE
		long digit(long num3);//FUNCTION PARA SA DIGIT
		long primefactorization(long num4);//FUNCTION PARA SA PRIME FACTORIZATION
		long j,count,x;//KANI PAUBOS MAO NI MGA VARIABLE DECLERATIONS
		long pdtemp, bin, base, rem;
		long rev, temp, key;
		long dolor, digits;
		long factors,t,i;
		long rem1[100];
		long derek;// HANTOD ANI
	};
	
int main() 
	{
	cpe1b guwapo;
	long num,i;
	string str;
	cin>>str;
	cout << "The size of str is " << str.length()<<endl;
// EXAM
	if(str.length()%2==0)
	{
		for(i=1;i<=str.length();i++)
			{
				guwapo.wasteful_number(i);
			}
		//cout<<endl<<str.length()<<" is Even";
	}

	if(str.length()%2!=0)
	{
		for(i=1;i<=str.length();i++)
			{
				guwapo.palindromic_prime(i);
				
			}
		//cout<<endl<<str.length()<<" is Odd";
	}

	
return 0;
	}
	
	
void cpe1b::palindromic_prime(long x)
	{
		//cout<<endl<<"PALINDROMIC PRIME BA NI SIYA?"<<endl;
		prime(x);
	}
	
void cpe1b::wasteful_number(long x)//MAO NI CODE PARA PAG TAN.AW IF WASTEFUL NUMBER BA OR DILE
	{
		//cout<<endl<<"WASTEFUL NUMBER NI SIYA??WEHH??"<<endl;
		digit(x);
		if (digits>=factors)//GI BALI ANG CODE KAY NON-WASTEFUL NUMBER MAN ANG IPA DISPLAY
			{				//SUPPOSE TO BE ING.ANI ANG CODE UNTA IF WASTEFULL # PA (digits<=factor)
			//cout<<"Not WASTERFUL ko"<<endl;
			cout<<x<<endl;
			}
	}
	
long cpe1b::prime(long num)//KANI NGA CODE PARA PAG TAN.AW IF PRIME BA OR COMPOSITE 
	{
	/* PRIME */
		count = 0;
		for (j=2;j<num;j++)
		{
			if (num%j==0)
			{
				count++;
			}
		}
		if (count==0)
		{
			//cout<<"PRIME"<<endl;
			binary(num);
		}	
		else
		{
		//cout<<"Composite"<<endl;
		//cout<<"DIKO WELCOME :(";
		
		}
	}
		
long cpe1b::binary(long num1)//KANI NGA LINE KAY PARA PAG KUHA SA BINARY
{
	/* BINARY */
	/*	prlongf("PRIME: %ld \n",pdnum[i]); */
	pdtemp = num1;
	bin=0;
	base = 1;
	for (;pdtemp>0;)
		{
			rem=pdtemp%2;
			bin=bin+rem*base;
			base = base*10;
			pdtemp=pdtemp/2;
		}
	//cout<<"BINARY: "<<bin<<endl;
	reverse(bin);
}


long cpe1b::reverse(long num2)//MAO NI PAG REVERSE SA BINARY UNYA TAN.AWON IF PALIONDROMIC PRIME BA OR DLE 
{							  
	/*REVERSE*/
	key=num2;
	temp=0;
	rev=0;
	for (;key!=0;)
	{
		temp=key%10;
		key=key/10;
		rev=temp+(rev*10);
	}
	//cout<<"REVERSE: ";
	//cout<<rev<<endl;
	if (rev==num2)
	{
		//cout<<"PALINDROMIC PRIME KO YEHEY"<<endl;
	}
	else//SA ELSE RA GA COUT KAY ANG CODE KAY NON-PALINDROMIC PRIME ANG I PA DISPLAY
	{
		cout<<num2<<endl;
	}
		
	
}

long cpe1b::digit(long num3)//MAO NI FUNCTION PARA SA PAG KUHA UG PILA KA DIGITS
{							//KANI ANG CODE PARA SA PAG KUHA UG PILA KA DIGITS
	dolor=num3;
	derek=num3;
	digits = 0;
	for (;dolor!=0;)
	{
		dolor=dolor/10;
		digits++;
	}
	//cout<<digits;
	primefactorization(derek);
}

long cpe1b::primefactorization(long num4)//MAO NI FUNCTUON PARA SA PRIME FACTORITATION
{										 //KANI NA CODE KAY PARA PAG KUHA SA PRIME FACTORS
	x=num4;
	factors=0;
	i=2;
	t=0;
	for (;x!=0;) 
	{
		if (x%i==0)
		{
			x=x/i;
			rem1[t]=i;
			t++;
			factors++;
			if (x==1)
			{
			break;
			}
		}
		else
		{
			i++;
		}
	}
	
	for (i=0;i<factors;i++)
	{
		//printf(" %ld ",rem1[i]);
	}
	//cout<<endl<<"factors:="<<factors;
}
