/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasilva <rasilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:42:24 by rasilva           #+#    #+#             */
/*   Updated: 2023/01/20 12:54:38 by rasilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*ft_new_trim(char *cmd)
{
	char	*temp;

	temp = NULL;
	if (cmd[0] == '\'' || cmd[ft_strlen(cmd) - 1] == '\'')
		temp = ft_strtrim(cmd, "\'");
	else if (cmd[0] == '\"' || cmd[ft_strlen(cmd) - 1] == '\"')
		temp = ft_strtrim(cmd, "\"");
	else
		temp = ft_strdup(cmd);
	if (temp)
	{
		free(cmd);
		cmd = temp;
	}
	return (cmd);
}

char	*check_temp(char *temp, char *input, int *i)
{
	char	*temp2;
	char	*aux;
	int		int_temp;

	temp2 = temp;
	int_temp = *i;
	if (check_operator(&input[int_temp]) == 2)
	{
		aux = ft_substr(input, int_temp, 2);
		temp = ft_strjoin(temp, aux);
		int_temp++;
	}
	else
	{
		aux = return_char(input[int_temp]);
		temp = ft_strjoin(temp, aux);
	}
	freetwo_ptrs(&temp2, &aux);
	*i = int_temp;
	return (temp);
}

int	return_swap(char ****cmds, char **tmp)
{
	char	***s;

	s = *cmds;
	*s = tmp;
	*cmds = s;
	return (0);
}

void	exec_exit(t_list *cmds, t_env *envp)
{
	free_split(envp->env);
	ft_freenode(cmds);
	free(envp);
	exit(g_status);
}

int	check_redir(char *prompt)
{
	char	**splited;
	int		pos;

	pos = -1;
	splited = ft_split(prompt, ' ');
	if (!splited)
		return (1);
	while (splited[++pos])
	{
		if (check_operator(splited[pos]) && !splited[pos + 1])
		{
			ft_perror(258, NULL, REDIR);
			free_split(splited);
			return (1);
		}
		else if (splited[pos + 1] && (check_operator(splited[pos + 1]) \
				&& check_operator(splited[pos])) && (splited[pos][0] != '|' && \
				splited[pos + 1][0] != '|'))
			return_redir(splited);
	}
	free_split(splited);
	return (0);
}
