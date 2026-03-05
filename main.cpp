#include <iostream>

using namespace std;

int main()
{

	for (char x = 'a'; x < 'z';) {

		cout << x;

		for (int i = 0; i < 3; i++)
		{


			cout << i;

			x++; // Delegating the Outer Loop's Update to the Inner Loop\

			/*

			In this code context:
cppfor (char x = 'a'; x < 'z';) {      // outer loop: "I won't update x myself"

	for (int i = 0; i < 3; i++) {
		x++;                          // inner loop: "I'll handle x for you"
	}
}
Normally, the outer loop should update x itself — that's its job. But here it delegates (hands over) that job to the inner loop.
Real life example:

A manager has a task to do
Instead of doing it himself, he delegates it to his team member
The work still gets done, but someone else did it

Same thing here:

Outer loop has the job of updating x
Instead of doing it in its header (x++), it delegates that job to the inner loop
x still gets updated, but the inner loop did it


			*/

		}

		cout << '\n';

	}


	return 0;
}