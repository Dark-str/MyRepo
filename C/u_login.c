#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("\n\033[34mWelcome to the DBMS.Please enter your credentials.\033[0m\n");
	string ui = get_string("User_Name: ");
	string up = get_string("Passwd   : ");
	if (strcmp(ui, "ckstr") == 0 && strcmp(up, "19917") == 0)
	{
		printf("\033[32mWelcome Ckstr! \033[0m");
	}
	else
	{
		printf("\033[31mAccess Denied\033[0m");
	}
}
