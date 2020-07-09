#include<iostream>
using namespace std;
float polynomial_expression(float p)
{
	return (p*p - 3);
}
// Changing
int main()
{
	float m = NULL, n = NULL, ans = NULL;
	int i = NULL;
	for (i = 0; i < 100; i++)
	{
		if (polynomial_expression(i) < 0 && polynomial_expression(i + 1) > 0)
		{
			cout << "The root is : = [ " << i << " ,  " << i + 1 << " ] " << endl;
			cout << "As  f(" << i << ")" << " =  " << polynomial_expression(i) << " > 0" << endl;
			cout << "And f(" << i + 1 << ")" << "  = " << polynomial_expression(i + 1) << " < 0" << endl;
			m = i;
			n = i + 1;
			break;
		}
		if (polynomial_expression(i) > 0 && polynomial_expression(i + 1) < 0)
		{
			cout << "The root is : = [ " << i << " ,  " << i + 1 << " ] " << endl;
			cout << "As  f(" << i << ")" << " =  " << polynomial_expression(i) << " < 0" << endl;
			cout << "And f(" << i + 1 << ")" << "  = " << polynomial_expression(i + 1) << " > 0" << endl;
			m = i;
			n = i + 1;
			break;
		}
	}
	i = 1;

	while (i < 100)
	{
		ans = (m + n) / 2;
		cout << "For next approximation " << endl << i << " The number of iteration is " << m << " and " << n << endl;
		ans = (m*polynomial_expression(n) - n * polynomial_expression(m)) / (polynomial_expression(n) - polynomial_expression(m));
		cout << "f(" << ans << ")" << " = " << polynomial_expression(ans) << endl << endl;
		if (polynomial_expression(ans) > 0)
		{
			n = ans;
		}
		else if (polynomial_expression(ans) < 0)
		{
			m = ans;
		}
		else
			break;
		i = i + 1;
	}
	cout << "Approximated root is : = " << ans << endl;
	system("pause");
}
