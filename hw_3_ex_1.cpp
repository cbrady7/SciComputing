//Christopher Brady
//Sci Comp
//hw_3_ex_1

#include<iostream>
using namespace std;

int main(){
	int month, day, year;
	string monthString;
	cout<<"Enter a day month and year as integers: "<<endl;
	cin>>month>>day>>year;
	
	switch(month){
		case 1: monthString = "January";break;
		case 2: monthString = "February";break;
		case 3: monthString = "March";break;
		case 4: monthString = "April";break;
		case 5: monthString = "May";break;
		case 6: monthString = "June";break;
		case 7: monthString = "July";break;
		case 8: monthString = "August";break;
		case 9: monthString = "September";break;
		case 10: monthString = "October";break;
		case 11: monthString = "November";break;
		case 12: monthString = "December";break;
	}
	cout<<monthString<<" "<<day<<", "<<year<<endl;
return 0;
}
