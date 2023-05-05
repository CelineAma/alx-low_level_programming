#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LEN 20

/**
 * main - entry point
 * Description - program that generates random valid passwords
 *
 * Return: 0 on success
*/
int main(void)
{

	char charset[] =
		"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int charset_len = sizeof(charset) - 1;


	srand((unsigned int)time(NULL));


	char password[PASSWORD_LEN + 1];

	for (int i = 0; i < PASSWORD_LEN; i++)
	{
		password[i] = charset[rand() % charset_len];
	}

	password[PASSWORD_LEN] = '\0';

	printf("%s\n", password);

	return (0);
}

