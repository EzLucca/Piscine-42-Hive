/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elucca <elucca@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 08:45:50 by elucca            #+#    #+#             */
/*   Updated: 2024/03/01 08:47:57 by elucca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	insert_numb(int nb)
{
    char	value;

    value = 0;
    if (nb < 10)
    {
        value = nb + 48;
        write(1, "0", 1);
        write(1, &value, 1);
        return;
    }
    value = (nb / 10) + 48;
    write(1, &value, 1);
    value = (nb % 10) + 48;
    write(1, &value, 1);
}

void	ft_print_comb2(void)
{
    int a;
    int b;

    a = 0;
    while (a <= 98)
    {
        b = a + 1;
        while (b <= 99)
        {
            insert_numb(a);
            write(1, " ", 1);
            insert_numb(b);
            if (!(a == 98 && b == 99))
            {
                write(1, ",", 1);
                write(1, " ", 1);
            }
            b++;
        }
        a++;
    }
}

int	main(void)
{
    ft_print_comb2();
    return(0);
}

