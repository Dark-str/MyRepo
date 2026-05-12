#include <cs50.h>
#include <stdio.h>

int main(void)
{
	printf("\nHello, this a test program.Please provide the answer for the following Question by using, \nY - if u do agree or \nN - if u not\n");
	char c = get_char("Do u agree with our terms and conditions? ");
	if (c == 'Y' || c == 'y')
	{
		printf("Thank you!");
	}
	else
	{
		printf("Please read our t&cs.");
	}
}
