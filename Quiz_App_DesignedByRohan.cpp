/*This is quiz app designed for following difficulty levels.
#Level 1: This is an Easy level where the user has to find ans for only 5 questions
#Level 2: This is a Medium Level where the user has to find ans for 10 questions
#Level 3: This is a Hard Level where the user has to find ans for 20 questions

#Declaring Header Files*/
#include<iostream>
#include<string>

using namespace std;

struct questionPrint
{
	string question;
	string ans1;
	string ans2;
	string ans3;
	int usersChoice;
	int arrayIndex;
	float correctAns[5] = {3,1,2,1,3};
	int countcorrectAns = 0;
	int wrongAns = 0;
};

void ansPrint(questionPrint Question)
{
	cout << endl;
	cout << Question.question << endl;
	cout << Question.ans1 << endl;
	cout << Question.ans2 << endl;
	cout << Question.ans3 << endl;
	
}

void checkAns(questionPrint Question)
{
	cin >> Question.usersChoice;


	if(Question.usersChoice == Question.correctAns[Question.arrayIndex])
	{
		cout << "Your ans choice is: " << Question.usersChoice << endl;
		cout << "Correct Ans!" << endl;
		/*Question.countcorrectAns = Question.countcorrectAns + 1;
		cout << "Total Count of Correct Ans: " << Question.countcorrectAns << endl;
		cout << "Total Count of Wrong Ans: " << Question.wrongAns << endl;*/
	}
	else
	{
		cout << "Your ans choice is: " << Question.usersChoice << endl;
		cout << "Wrong Ans! Please try again!";
		/*Question.wrongAns = Question.wrongAns + 1;
		cout << "Total Count of Correct Ans: " << Question.countcorrectAns << endl;
		cout << "Total Count of Wrong Ans: " << Question.wrongAns << endl;*/
	}
		

		
}

	

int main(){
	cout << "*********************************************" << endl;
	cout << "***Welcome to Quiz Designed by Rohan More***" << endl;
	cout << "*********************************************" << endl;
	
	
	questionPrint Question1;
	Question1.question = "What is the Capital of Germany?";
	Question1.ans1 = "1. New York";
	Question1.ans2 = "2. Mumbai";
	Question1.ans3 = "3. Berlin";
	Question1.arrayIndex = 0;
	
	questionPrint Question2;
	Question2.question = "Who is the Best Batsman?";
	Question2.ans1 = "1. Virat Kohli";
	Question2.ans2 = "2. Rohit Sharma";
	Question2.ans3 = "3. Sachin Tendulkar";
	Question2.arrayIndex = 1;
	
	questionPrint Question3;
	Question3.question = "Where do I leave?";
	Question3.ans1 = "1. Darmstadt";
	Question3.ans2 = "2. Kaiserslautern";
	Question3.ans3 = "3. Karad";
	Question3.arrayIndex = 2;
	
	questionPrint Question4;
	Question4.question = "Which city is called as City of Lakes in India?";
	Question4.ans1 = "1. Udaipur";
	Question4.ans2 = "2. Jaipur";
	Question4.ans3 = "3. Pune";
	Question4.arrayIndex = 3;
	
	questionPrint Question5;
	Question5.question = "Who is richest person in the world?";
	Question5.ans1 = "1. Gautam Adani";
	Question5.ans2 = "2. Jeff Bezos";
	Question5.ans3 = "3. Elon Musk";
	Question5.arrayIndex = 4;
	
	ansPrint(Question1);
	checkAns(Question1);
	int getch();
	
	ansPrint(Question2);
	checkAns(Question2);
	int getch();
	
	ansPrint(Question3);
	checkAns(Question3);
	int getch();
	
	ansPrint(Question4);
	checkAns(Question4);
	int getch();
	
	ansPrint(Question5);
	checkAns(Question5);
	int getch();
	
		
}