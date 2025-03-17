/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekaska <sekaska@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 20:11:07 by sekaska           #+#    #+#             */
/*   Updated: 2025/03/17 03:49:59 by sekaska          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

long	ft_factorial(int num)
{
	long	result;

	result = 1;
	while (num)
	{
		result *= num;
		num--;
	}
	return (result);
}

long	ft_mod(int num1, int num2)
{
	long	result;

	result = num1 % num2;
	return (result);
}

long	ft_multiplication(int num1, int num2)
{
	long	result;

	result = num1 * num2;
	return (result);
}

long	ft_addition(int num1, int num2)
{
	long	result;

	result = num1 + num2;
	return (result);
}

long	ft_sqrt(int num)
{
	long	index;
	long	b;

	b = num;
	if (b <= 0)
	{
		return (0);
	}
	if (b == 1)
	{
		return (1);
	}
	index = 2;
	if (b >= 2)
	{
		while (index * index <= b)
		{
			if (index * index <= b)
			{
				return (index);
			}
			index++;
		}
	}
	return (0);
}

long	ft_subtraction(int num1, int num2)
{
	long	result;

	result = num1 - num2;
	return (result);
}

/*
int main (void) {
	int	num1, num2;
	char	operator;

    printf("Bir islem girin (orn: !, +, -, *, /, %%): ");
    scanf(" %c", &operator);

    if (operator == '!') {
        printf("Bir sayi girin: ");
        if (scanf("%d", &num1) == 1) {
            printf("%d sayisinin faktoriyel sonucu: %ld\n", num1, ft_factorial(num1));
        } else {
            printf("Gecersiz giris!\n");
        }
    } else if (operator == '+') {
        printf("iki sayi girin: ");
        if (scanf("%d %d", &num1, &num2) == 2) {
            printf("Sonuc: %ld\n", ft_addition(num1, num2));
        } else {
            printf("Gecersiz giris!\n");
        }
    } else if (operator == '-') {
        printf("iki sayi girin: ");
        if (scanf("%d %d", &num1, &num2) == 2) {
            printf("Sonuc: %ld\n", ft_subtraction(num1, num2));
        } else {
            printf("Gecersiz giris!\n");
        }
    } else if (operator == '*') {
        printf("iki sayi girin: ");
        if (scanf("%d %d", &num1, &num2) == 2) {
            printf("Sonuc: %ld\n", ft_multiplication(num1, num2));
        } else {
            printf("Gecersiz giris!\n");
        }
    } else if (operator == '/') {
        printf("iki sayi girin: ");
        if (scanf("%d %d", &num1, &num2) == 2) {
            if (num2 != 0) {
                printf("Sonuc: %.6f\n", (double)num1 / num2);
            } else {
                printf("Hata: Bolme sifira yapilamaz!\n");
            }
        } else {
            printf("Gecersiz giris!\n");
        }
    } else if (operator == '%') {
        printf("iki sayi girin: ");
        if (scanf("%d %d", &num1, &num2) == 2) {
            printf("Sonuc: %ld\n", ft_mod(num1, num2));
        } else {
            printf("Gecersiz giris!\n");
        }
    } else {
        printf("Gecersiz islem! Lütfen gecerli bir islem girin.\n");
    }

    return 0;
}
*/