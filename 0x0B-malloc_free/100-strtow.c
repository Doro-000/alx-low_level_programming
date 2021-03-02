char **strtow(char *str)
{
	char **split;
	int i,j,cnt;

	j=0; 
	cnt=0;
	for(i = 0; i <= len(str); i++)
	{
		if((str[i] != ' ') && (str[i] != '\0'))
		{
			split[cnt][j] = str[i];
			j++;
		}
		else if ((str[i] == ' ') && (i != 0) && (str[i - 1] != ' '))
		{
			split[cnt][j] = '\0';
			cnt++;
			j++;
		}
	}
	return (split);
}

/**
 * len - returns length of str
 * @str: string to be counted
 *
 * Return: length of the string
 */
int len(char *str)
{
	int len = 0;

	if (str != NULL)
	{
		while (str[len])
			len++;
	}
	return (len);
}
