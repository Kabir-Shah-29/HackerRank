/*
Objective
Today, we're delving into Inheritance. Check out the attached tutorial for learning materials and an instructional video.

Task
You are given two classes, Person and Student, where Person is the base class and Student is the derived class. Completed code for Person and a declaration for Student are provided for you in the editor. Observe that Student inherits all the properties of Person.

Complete the Student class by writing the following:

A Student class constructor, which has  parameters:
A string, .
A string, .
An integer, .
An integer array (or vector) of test scores, .
A char calculate() method that calculates a Student object's average and returns the grade character representative of their calculated average:
Grading.png

Input Format

The locked stub code in the editor reads the input and calls the Student class constructor with the necessary arguments. It also calls the calculate method which takes no arguments.

The first line contains , , and , separated by a space. The second line contains the number of test scores. The third line of space-separated integers describes .

Constraints

Output Format

Output is handled by the locked stub code. Your output will be correct if your Student class constructor and calculate() method are properly implemented.

Sample Input

Heraldo Memelli 8135627
2
100 80
Sample Output

 Name: Memelli, Heraldo
 ID: 8135627
 Grade: O
Explanation

This student had  scores to average:  and . The student's average grade is . An average grade of  corresponds to the letter grade , so the calculate() method should return the character'O'.

link : 'https://www.hackerrank.com/challenges/30-inheritance/problem?isFullScreen=true'
*/



class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
        Student (
            string firstName_,
            string lastName_,
            int identification_,
            vector<int> testScores_
        ) :
            Person(firstName_, lastName_, identification_),
            testScores(testScores_)
        {
            
        }

        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        char
        calculate (
            void
        ) {
            char letterGrade = '?';
            float average = 0.0;
            // Calculate average
            for (auto & score : testScores) {
                average += score;
            }
            average /= testScores.size();
            // Assign letter grade
            if (average >= 90.0) {
                letterGrade = 'O';
            } else if (average >= 80.0) {
                letterGrade = 'E';
            } else if (average >= 70.0) {
                letterGrade = 'A';
            } else if (average >= 55.0) {
                letterGrade = 'P';
            } else if (average >= 40.0) {
                letterGrade = 'D';
            } else {
                letterGrade = 'T';
            }
            
            return letterGrade;
        }
};

