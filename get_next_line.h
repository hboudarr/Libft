/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 14:56:39 by hboudarr          #+#    #+#             */
/*   Updated: 2020/03/10 09:37:33 by hboudarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 7
# endif



//char	*ft_strjoin(char *s1, char *s2);
//char	*ft_strchr(const char *s, int c);
//char	*ft_strndup(char *s, int n);
//size_t	ft_strlen(char *str);
//char	*ft_substr(char *s, unsigned int start, size_t len);
int		get_next_line(const int fd, char **line);

#endif
