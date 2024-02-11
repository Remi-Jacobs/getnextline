/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojacobs <ojacobs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 19:53:32 by ojacobs           #+#    #+#             */
/*   Updated: 2024/02/10 18:59:44 by ojacobs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

// #include <stdio.h>
// #include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*ft_strchr(char *s, int c);
char	*ft_m_strjoin(char *bucket, char *bailer);
char	*ft_read_to_bucket(int fd, char *bucket);
char	*ft_get_line(char *bucket);
char	*ft_new_bucket(char *bucket);
char	*get_next_line(int fd);
size_t	ft_strlen(const char *s);

#endif