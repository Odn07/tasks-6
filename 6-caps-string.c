/*First code*/

#include <stdio.h>
int get_seperator(char c);
/**
* cap_string - capitalizes all words of a string.
* @s: a pointer to a string to capitalize.
* Return: pointer to s
*/

char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;

		if (get_seperator(s[i]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			s[i + 1] -= 32;
		i++;
	}

	return (s);
}

/**
* get_separator - check for special characters.
* @c: takes a special character as argument.
* Return: 1 if there is seperator in string;
* and 0 if there is none.
*/

int get_seperator(char c)
{
	int i = 0;
	char special_character[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}' };
	for (; i < 13; i++)
	{
		if (c == special_character[i])
			return (1);
	}
	return (0);
}

int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);

    printf("%s", ptr);
    printf("%s", str);
    
    return (0);
}


/*Second code*/


#include <stdio.h>

int seperator(char c);
char *cap_string(char *s);


int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);

    printf("%s", ptr);
    printf("%s", str);

    return (0);
}

int seperator(char c)
{
    int i = 0;
    char s[15] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', '\t'};

    for (; i < 15; i++)
    {
        if (c == s[i])
        {
        return (1);
        }
    }
    return (0);
}

char *cap_string(char *s)
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (i == 0)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                {
                    s[i] = s[i] - 32;
                    continue;
                }
        }
        if (seperator(s[i]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
        {
			s[i + 1] -= 32;
            i++
        }

        else
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = s[i] -32;
            }

        }

    }
    return (s);
}
