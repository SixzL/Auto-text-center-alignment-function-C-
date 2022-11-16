#include<iostream>

using namespace std;

void space_center_function(string);//function declaration

int main()
{
	string example_text;
		
	example_text ="asd asdas 43643s fiuqh";
	space_center_function(example_text);
		
	example_text ="asdas32632632622222222222222222222222222222222321351235"; 
	space_center_function(example_text);
                                                                                                      //This is how you display text
	example_text ="";                                                                                 //Save the text into tempatory variable <example_text>
	space_center_function(example_text);                                                              //and call function <space_function(example_text)> pass the example_text
	                                                                                                                                                         
	example_text ="asdas13";
	space_center_function(example_text);
		
	example_text ="sssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss";
	space_center_function(example_text);
		
		
		
}

void space_center_function(string text)
{	
	int i, x = 60;           // x is the width between the box ( |             | )
	cout<<"|";               //the beginning of the box
	
	int extra = text.size() % 2;      //To check whether the passed text length is either odd or even  ( odd -> extra = 1  ||  even -> extra = 0
	 
	 
	int space_count = (x - text.size()) /2;     //To calculate the how many spaces before and after the text
	
	for(i=0; i<space_count; i++)      //for loop for the spacing before the text
		cout<<" ";
	
	cout<<text;                      //cout the text
	
	if(extra == 1)					//(if the extra == 1) means the text length is odd, if we do not add an extra space, the box will become inconsistency 
			cout<<" ";
		
	for(i=0; i<space_count; i++)    //for loop for the spacing after the text
		cout<<" ";
	cout<<"|"<<text.size()<<endl;         //the end of the box and also display the text length after the "|" comment it if you want to disable
	
	
}
