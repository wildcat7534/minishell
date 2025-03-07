/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmassol <cmassol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:18:00 by cmassol           #+#    #+#             */
/*   Updated: 2025/03/03 15:21:31 by cmassol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    External functions allowed to be use : 
    readline, rl_clear_history, rl_on_new_line,
    rl_replace_line, rl_redisplay, 
    add_history,
    printf, malloc, free, write, 
    access, open, read, close, 
    fork, wait, waitpid, wait3, wait4, 
    signal, sigaction, sigemptyset, sigaddset, kill, exit,
    getcwd, chdir, stat, lstat, fstat, unlink, 
    execve, dup, dup2, pipe, 
    opendir, readdir, closedir,
    strerror, perror, 
    isatty, ttyname, ttyslot, 
    ioctl,
    getenv, 
    tcsetattr, tcgetattr, tgetent, tgetflag, tgetnum, tgetstr, tgoto, tputs
*/


#ifndef MINISHELL_H
# define MINISHELL_H

# include "../libft/include/libft.h"

# include <stdio.h>
# include <stdlib.h> // for EXIT_SUCCESS, EXIT_FAILURE and malloc
# include <unistd.h>
# include <readline/readline.h>
# include <readline/history.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <sys/wait.h>
# include <signal.h>
# include <errno.h>
# include <string.h>
# include <fcntl.h>
# include <dirent.h>
// color codes
# define R "\x1b[31m"
# define BR "\x1b[91m"
# define G "\x1b[32m"
# define BG "\x1b[92m"
# define Y "\x1b[33m"
# define BY "\x1b[93m"
# define B "\x1b[34m"
# define BB "\x1b[94m"
# define P "\x1b[35m"
# define BP "\x1b[95m"
# define C "\x1b[36m"
# define BC "\x1b[96m"
# define RT "\x1b[0m"

# define PROMPT "🐰Lapinas && 🐯WiLDCaT ShELL $> "

# define MAX_PATH 4096
# define MAX_CMD 4096
# define MAX_ARG 4096
# define MAX_CMD_LEN 4096
# define MAX_CMD_NB 4096
# define MAX_CMD_ARG 4096
# define MAX_CMD_PATH 4096

# define ERR_CMD_NOT_FOUND 127
# define ERR_CMD_NOT_EXEC 126
# define ERR_CMD_NOT_FOUND_MSG "command not found"
# define ERR_CMD_NOT_EXEC_MSG "permission denied"

# define ERR_MALLOC "Error: malloc failed\n"
# define ERR_GETCWD "Error: getcwd failed\n"
# define ERR_FORK "Error: fork failed\n"
# define ERR_WAIT "Error: wait failed\n"
# define ERR_EXECVE "Error: execve failed\n"
# define ERR_OPEN "Error: open failed\n"
# define ERR_CLOSE "Error: close failed\n"
# define ERR_PIPE "Error: pipe failed\n"
# define ERR_DUP "Error: dup failed\n"
# define ERR_DUP2 "Error: dup2 failed\n"
# define ERR_CHDIR "Error: chdir failed\n"
# define ERR_STAT "Error: stat failed\n"
# define ERR_LSTAT "Error: lstat failed\n"
# define ERR_FSTAT "Error: fstat failed\n"
# define ERR_UNLINK "Error: unlink failed\n"
# define ERR_OPENDIR "Error: opendir failed\n"
# define ERR_READDIR "Error: readdir failed\n"
# define ERR_CLOSEDIR "Error: closedir failed\n"
# define ERR_IOCTL "Error: ioctl failed\n"

# define pf(...) printf(__va_args__)
# define dpf(fd, ...) dprintf(fd, __va_args__)


typedef struct s_cmd
{
    char    *cmd;
    char    *path;
    char    *arg[MAX_ARG];
    int     arg_nb;
}               t_cmd;

typedef struct s_cmd_list
{
    t_cmd   cmd[MAX_CMD];
    int     cmd_nb;
}               t_cmd_list;


void	minishell(void);
void    Getcwd(char *buf, size_t size);
void    safe_malloc(void *ptr, size_t size);

// deco tags
void    print_prompt(void);
void	print_bloody(void);
void	print_this(void);
void    print_the_edge(void);



#endif

