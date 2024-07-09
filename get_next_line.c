/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:37:53 by hurabe            #+#    #+#             */
/*   Updated: 2024/07/09 19:07:55 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*save;
	char		*str;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
}

int	main(void)
{
	int		fd;
	char	buffer[BUFFER_SIZE];
	ssize_t	bytesread;

	fd = open("text.txt", O_RDONLY);
	if (fd == -1)
	{
		perror("Failed to open file");
		return (1);
	}

	while ((bytesread = read(fd, buffer, BUFFER_SIZE - 1)) > 0)
	{
		buffer[bytesread] = '\0';
		printf("%s", buffer);
	}
	if (bytesread == -1)
	{
		perror("Failed to open file");
		return (1);
	}

	close(fd);
	return (0);
}
