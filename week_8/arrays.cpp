#include <iostream>
/* this is not done yet!*/
using namespace std;
int A[3][3];
int findAverage(int course ,int noOfGrades ){

    float sum,average;


    for (int j = 0; j<noOfGrades; j++) {

        sum += A[course][j];

    }
    average = sum / noOfGrades;
    return average;
 }

int main() {
    
    int gradebook[3][3] = {
        {80, 95, 65},
        {99, 75, 80},
        {65, 80, 90}
    };
    
    cout << "Gr1 Gr2 Gr3 Avg" << endl;
    
    int i,j;
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<< gradebook[i][j] << "  ";
		}
		cout<< endl;
	}
    
}