#include"LinkStaQue.h"
#include <iostream>
using namespace std;


int main()
{
	//LinkStack ls1;
	//ls1.push(20);
	//ls1.push(4);
	//ls1.push(40);
	//ls1.push(0);
	//ls1.Show();
	//ls1.pop();
	//ls1.Show();
	//cout << ls1.GetTop() << endl;
	//LinkStack ls2(ls1);
	//ls2.Show();
	//LinkStack ls3;
	//ls3 = ls2;
	//ls3.Show();



	LinkQueue lq1;
	lq1.push(20);
	lq1.push(4);
	lq1.push(40);
	lq1.push(0);
	lq1.Show();
	lq1.pop();
	lq1.Show();
	cout << lq1.GetHead() << endl;
	LinkQueue lq2(lq1);
	lq1.Show();
	LinkQueue lq3;
	lq3 = lq1;
	lq3.Show();


	return 0;
}