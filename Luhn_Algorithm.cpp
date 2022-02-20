#include <bits/stdc++.h>
#include <string.h>
using namespace std;

bool check(const string& cardno)
{
	int digits = cardno.length();
	int sum = 0, value = false;
	for (int i=digits-1;i>=0;i--){
		int d = cardno[i] - '0';
		if (value == true)
			d = d * 2;
            sum += d/10;
            sum += d%10;
            value = !value;
	}
	return (sum % 10 == 0);
}
int main()
{
	string cardno;
    cout<<"\n\t\tEnter Card Number ";
    cin>>cardno;
    while ((cardno.length())!= 16)
    {
        cout<<"\t\tEnter 16 Digit Card Number ";
        cin>>cardno;
    }
    if((cardno.length())== 16){
        cout<<"\n\t\tEntered Card Number : "<<cardno<<endl;
        if (check(cardno))
            cout<<"\n\t\tThis is a Valid Card According to Luhn's Algorithm\n";
        else
            cout<<"\n\t\tThis is Non-Valid Card According to Luhn's Algorithm\n";
    }
    system("pause");
	return 0;
}
