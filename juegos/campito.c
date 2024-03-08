/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   campito.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 03:23:52 by jcharfao          #+#    #+#             */
/*   Updated: 2024/03/08 03:36:32 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str = "holamundo";
    int j = 0;
    int i = strlen(str + 1);
    char *new = malloc(strlen(str) + 1);
    while (str[i] > 0)
        new[j++] = str[i--];./
    printf("%s\n", new);
}