#include <stdlib.h>
#include "main.h"

void print_error(void);
int get_len(char *num1, char *num2, unsigned int *len1, unsigned int *len2);
int multiply(char *num1, char *num2, unsigned int len1, unsigned int len2,
	unsigned int max);
char *get_rest(char *num1, char num, unsigned int len1, unsigned int max,
	unsigned int zeros);
char *add_rest(char **mul_rest, unsigned int len, unsigned int max);
void print_answer(char *fin_ans);
void check_0(char *fin_ans, unsigned int len);
void free_mem(char **mul_rest, char *fin_ans, unsigned int len);

/**
 * main - multiply two numbers
 * @ac: argument count
 * @av: argument vector
 *
 * Return: answer to multiplication
 * exit with 98 if fails
*/
int main(int ac, char **av)
{
	unsigned int len1, len2, max;
	short int flag = 1;
	char *num1, *num2;

	if (ac != 3)
	{
		print_error(); /* invalid arguments */
		exit(98);
	}

	/* get lenght of arguments */
	num1 = *(av + 1);
	num2 = *(av + 2);
	flag = get_len(num1, num2, &len1, &len2);
	if (flag)
	{
		print_error();
		exit(98);
	}
	/* set max size of buffer */
	if (len1 >= len2)
		max = len1 * 2 + 2;
	else
		max = len2 * 2 + 2;

	flag = multiply(num1, num2, len1, len2, max);
	if (flag)
	{
		print_error();
		exit(98);
	}
	return (0);
}

/**
 * print_error - print error
*/
void print_error(void)
{
	char err[] = "Error\n";
	int i;

	for (i = 0; err[i]; ++i)
	{
		_putchar(err[i]);
	}
}

/**
 * get_len - get lenght of arguments
 * @num1: 1st argument
 * @num2: 2nd argument
 * @len1: lpointer to len1
 * @len2: pointer to len2
 *
 * Return: 0 (success)
 * 1 (has non numerical values)
*/
int get_len(char *num1, char *num2, unsigned int *len1, unsigned int *len2)
{
	unsigned int i = 0;

	*len1 = *len2 = 0;
	for (i = 0; num1[i]; ++i)
	{
		if (num1[i] < '0' || num1[i] > '9')
			return (1);/* Is non numerical */
		(*len1)++;
	}

	for (i = 0; num2[i]; ++i)
	{
		if (num2[i] < '0' || num2[i] > '9')
			return (1);
		(*len2)++;
	}

	return (0);
}

/**
 * multiply - multiply two numbers
 * @num1: 1st number
 * @num2: 2nd number
 * @len1: lenght of num1
 * @len2: lenght of num2:
 * @max: max size of buffer to store result
*/
int multiply(char *num1, char *num2, unsigned int len1, unsigned int len2,
	unsigned int max)
{
	unsigned int i, j;
	char **mul_rest, *fin_ans;

	i = j = 0;
	mul_rest = malloc(sizeof(*mul_rest) * len2);
	if (!mul_rest)
		return (1);
	i = len2 - 1;
	while (1)
	{
		*(mul_rest + j) = get_rest(num1, num2[i], len1, max, j);
		if (!mul_rest[j])
		{
			free_mem(mul_rest, NULL, (i + 1));
			return (0);
		}
		if (i == 0)
			break;
		--i;
		++j;
	}
	fin_ans = add_rest(mul_rest, len2, max);
	if (!fin_ans)
	{
		free_mem(mul_rest, NULL, len2);
		return (1);
	}
	print_answer(fin_ans);
	free_mem(mul_rest, fin_ans, len2);

	return (0);
}

/**
 * get_rest - multiply a digit with a number
 * @num: digit
 * @num1: number
 * @len1: lenght of num1
 * @max: max size of buffer
 * @zeros: number of zeros to add before answer
 *
 * Return: result of multiplication
*/
char *get_rest(char *num1, char num, unsigned int len1, unsigned int max,
	unsigned int zeros)
{
	unsigned int i, j, rem, ans;
	char *rest;

	j = i = ans = rem = 0;
	rest = calloc(max, sizeof(char));
	if (!rest)
		return (NULL);
	j = max - 1;

	/* add zeros */
	for (i = 0; i < zeros; ++i, --j)
		*(rest + j) = '0';

	/* multiply num with all values in num1 */
	i = len1 - 1;
	while (1)
	{
		ans = (num1[i] - '0') * (num - '0');
		if (rem)
		{
			ans += rem;
			rem = 0;
		}
		if (ans % 10)
			rem = ans / 10;
		*(rest + j) = (ans % 10) + '0';
		if (i == 0)
			break;
		--i;
		--j;
	}
	if (rem)
	{
		--j;
		*(rest + j) = rem + '0';
	}
	--j;
	*(rest + j) = '\0';

	return (rest);
}

/**
 * add_rest - add result of multiplication
 * @mul_rest: result of multiplication
 * @len: number of elements in mul_rest
 * @max: max size of buffer
 *
 * Return: Final answer
*/
char *add_rest(char **mul_rest, unsigned int len, unsigned int max)
{
	unsigned int rem, ans, idx, i, j;
	char *fin_ans;

	ans = rem = idx = j = i = 0;
	fin_ans = calloc(max, sizeof(char));
	if (!fin_ans)
		return (NULL);
	idx = j = max - 1;
	while (1)
	{
		ans = 0;
		for (i = 0; i < len; ++i)
		{
			if (mul_rest[i][j] == '\0')
			{
				continue;
			}
			ans += mul_rest[i][j] - '0';
		}
		if (rem)
		{
			ans += rem;
			rem = 0;
		}
		if (ans / 10)
			rem = ans / 10;
		fin_ans[idx] = (ans % 10) + '0';
		if (j == 0)
			break;
		--j;
		--idx;
	}

	/* change trailling 0s to null character. */
	check_0(fin_ans, max);

	return (fin_ans);
}

/**
 * check_0 - remove trailling 0s in answer
 * @fin_ans: answer to check
 * @len: lenght of fin_ans
*/
void check_0(char *fin_ans, unsigned int len)
{
	unsigned int i = 0;
	short int flag = 0;
	char tmp;

	while (i < len)
	{
		if (fin_ans[i] != '0')
		{
			flag = 1;
			break;
		}
		fin_ans[i] = '\0';
		++i;
	}

	if (!flag)/* No significant number */
	{
		fin_ans[0] = '0';
		fin_ans[1] = '\0';
		return;
	}

	i = 0;
	while (!fin_ans[0])
	{
		for (i = 0; i < len; ++i)
		{
			tmp = fin_ans[i + 1];
			fin_ans[i + 1] = fin_ans[i];
			fin_ans[i] = tmp;
		}
	}

}

/**
 * print_answer - print final answer
 * @fin_ans: final answer
*/
void print_answer(char *fin_ans)
{
	unsigned int i = 0;

	while (fin_ans[i])
	{
		_putchar(fin_ans[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * free_mem - free memory
 * @mul_rest: multiplication result array
 * @fin_ans: final answer string
 * @len: lenght of mul_rest
*/
void free_mem(char **mul_rest, char *fin_ans, unsigned int len)
{
	unsigned int i = 0;

	if (fin_ans)
		free(fin_ans);

	for (i = 0; i < len; i++)
		free(mul_rest[i]);
	free(mul_rest);
}
