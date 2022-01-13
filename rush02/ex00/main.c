/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eros-gir <eros-gir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 13:32:49 by eros-gir          #+#    #+#             */
/*   Updated: 2021/12/19 22:12:16 by eros-gir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<fcntl.h>

int					ft_strcmp(char *s1, char *s2);
unsigned long int	check_digits(unsigned long int n);
char				**interpretar(unsigned long int nbr, char **strs);
int					ft_putstr2(char *str);
void				print_result(char **strs, int input);
int					check_error(int arg, char **argv);
unsigned long int	ft_atoi(char *str);
int					size_of_line(int file, int read_chars);
int					dict_param_to_struct(char *str, int count);
void				insert_dict(unsigned int key, char *value);
void				ft_strcp(char *str, char *value, int i);
int					check_char(char *str, char *value, int count, int i);
void				read_line(char *path);

void	principal(char *dictionary, unsigned long int input)
{
	char	*strs[200];

	dictionary = "nofile";
	print_result(interpretar(input, strs), input);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	unsigned long int	i;
	char				*str;
	char				*file;

	i = 0;
	file = "./numbers.dict";
	if (check_error(argc, argv) == 1)
		return (0);
	else if (argc != 3)
		str = argv[1];
	else
	{
		str = argv[2];
		file = argv[1];
	}
	i = ft_atoi(str);
	if (i > 4294967295 || ft_strcmp(str, "") == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	principal(file, i);
}
