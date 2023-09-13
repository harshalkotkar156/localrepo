#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Data{
	int roll_no;
	string name;
	float sgpa;
}record;

void print(Data record[],int n){
	cout<<"Roll no |	Name	|	SGPA	|"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<" "<<record[i].roll_no<<"  	      "<<record[i].name<<"	   	  "<<record[i].sgpa<<endl;
	}
	
}
void bubbleSort(Data record[],int n)
{
    for(int i=0;i<n-1;i++){
        
        for(int j=1;j<(n-i);j++)
        {
            if(record[j-1].roll_no > record[j].roll_no) 
            {
                swap(record[j-1],record[j]);
            }
            
        }
    }
}
void insertionSort(Data record[],int n)
{
	for(int i=1;i<n;i++)
	{
		Data flag = record[i];
		string temp = record[i].name;
		int j=i-1;
		while(j>=0 and record[j].name > temp){
			record[j+1] = record[j];
			j--;
		}
		record[j+1] = flag;
		record[j+1].name = temp;		
	}
}
void markSort(Data record[],int n)
{
	//soring the marks by using the bubble sort
	for(int i=0;i<n-1;i++)
	{
		for(int j=1;j<n-i;j++)
		{
			if(record[j].sgpa > record[j-1].sgpa)
			{
				swap(record[j],record[j-1]);
			}
		}
	}
}
void search(Data record[],int n ,int x)
{
	cout<<"Roll no |	Name	|	SGPA	|"<<endl;
	for(int i=0;i<n;i++)
	{
		if(record[i].roll_no == x){
			cout<<" "<<record[i].roll_no<<"  	      "<<record[i].name<<"	   	  "<<record[i].sgpa<<endl;
		}
	}
}
int main()
{
	int n=3;
	struct Data record[n];
	cout<<"Start:\n";
	for(int i = 0;i<n;i++)
	{
		cout<<"Enter Roll No : ";cin>>record[i].roll_no;

		cout<<"Enter Name : ";cin>>record[i].name;
		transform(record[i].name.begin(),record[i].name.end(),record[i].name.begin(),::toupper);
		cout<<"Enter SGPA : ";cin>>record[i].sgpa;
	}
	//sorting the roll numbers
	cout<<"According to the roll numbers : "<<endl;
	bubbleSort(record,n);
	print(record,n);
	cout<<"This is according to Student names : ";
	insertionSort(record,n);
	cout<<endl;
	print(record,n);
	cout<<"This list is according to marks : "<<endl;
	markSort(record,n);
	print(record,n);
	int roll;
	cout<<"Enter the Roll No to access data : ";cin>>roll;
	bubbleSort(record,n);
	search(record,n,roll);

	return 0;
}
