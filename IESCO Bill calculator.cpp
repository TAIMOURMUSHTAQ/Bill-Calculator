#include <iostream>
using namespace std;
int main(){
	float U=0,B=0,SU=0 ,AU=0,S=0,A=0,max=0,min=9999999999;   //U=units, B=bill, S=total bill, A=average of bill, SU=sum of units, AU=average of units 
	int T_T=500,f=50;  //T_Ttotal tax     f=late fine          
	cout<<"IESCO MONTHLY BILL CALCULATOR\n\n";
	cout<<"Enter number of houses you want to find the bill: ";
	int n=0;
	cin>>n;
  for(int i=1;i<=n;i++)
	{
	cout<<"Enter units of H#"<<i<<"\t";	
	cin>>U;
	if(U<=100)
{
	B=16.48*U+T_T;
	SU=SU+U;
	cout<< "Bill of H"<<i<<" = "<<B<<"\n";
	cout<< "Bill of H"<<i<<" after due date"<<" = "<<B+T_T<<"\n\n";
	S = S+B;
	}
else if(U>=101&&U<=200)
{
	B=(U-100)*22.95+(100*16.48)+T_T;
	cout<< "Bill of H"<<i<<" = "<<B<<"\n";
	cout<< "Bill of H"<<i<<" after due date"<<" = "<<B+T_T<<"\n\n";
	S=S+B;
	SU=SU+U;
}
else if(U>=201&&U<=300)
{
	B=(U-200)*34.26+(100*22.95)+(100*16.48)+T_T;
	cout<< "Bill of H"<<i<<" = "<<B<<"\n";
	cout<< "Bill of H"<<i<<" after due date"<<" = "<<B+T_T<<"\n\n";
	S=S+B;
	SU=SU+U;
}
else if(U>=301&&U<=400)
{
	B=(U-300)*39.15+(100*34.26)+(100*22.95)+(100*16.48)+200+T_T;
	cout<< "Bill of H"<<i<<" = "<<B<<"\n";
	cout<< "Bill of H"<<i<<" after due date"<<" = "<<B+T_T<<"\n\n";
	S=S+B;
	SU=SU+U;
}
else if(U>=401&&U<=500)
{
	B=(U-400)*41.36+(100*39.15)+(100*34.26)+(100*22.95)+(100*16.48)+400+T_T;
	cout<< "Bill of H"<<i<<" = "<<B<<"\n";
	cout<< "Bill of H"<<i<<" after due date"<<" = "<<B+T_T<<"\n\n";
	S=S+B;
	SU=SU+U;
}
else if(U>=501&&U<=600)
{
	B=(U-500)*42.78+(100*41.36)+(100*39.15)+(100*34.26)+(100*22.95)+(100*16.48)+600+T_T;
	cout<< "Bill of H"<<i<<" = "<<B<<"\n";
	cout<< "Bill of H"<<i<<" after due date"<<" = "<<B+T_T<<"\n\n";
	S=S+B;
	SU=SU+U;
}
else if(U>=601&&U<=700)
{
	B=(U-600)*43.92+(100*42.78)+(100*41.36)+(100*39.15)+(100*34.26)+(100*22.95)+(100*16.48)+800+T_T;
	cout<< "Bill of H"<<i<<" = "<<B<<"\n";
	cout<< "Bill of H"<<i<<" after due date"<<" = "<<B+T_T<<"\n\n";
	S=S+B;
	SU=SU+U;
}
else if(U>=700)
{
	B=(U-700)*48.84+(100*43.92)+(100*42.78)+(100*41.36)+(100*39.15)+(100*34.26)+(100*22.95)+(100*16.48)+1000+T_T;
	cout<< "Bill of H"<<i<<" = "<<B<<"\n";
	cout<< "Bill of H"<<i<<" after due date"<<" = "<<B+T_T<<"\n\n";
	S=S+B;
	SU=SU+U;
}
A=S/n;
if(max<B)
{
max=B;}

if(min>B)
{
min=B;
}}
cout<<"\n\n"<<"Total units consumed by "<<n<<" houses = "<<SU;
cout<<"\n\nTotal bill of "<<n<<" houses = "<<S;
AU=SU/n;
cout<<"\n\nAverage units consumed by each house = "<<AU;
cout<<"\n\n"<<"Average bill of each house = "<<A;
cout<<"\n\n"<<"Max bill = "<<max;
cout<<"\n\nMin bill= "<<min;}

