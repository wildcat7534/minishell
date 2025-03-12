/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmassol <cmassol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:48:54 by cmassol           #+#    #+#             */
/*   Updated: 2025/03/12 23:11:06 by cmassol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

void	minishell(void)
{
    char	    cwd[BUFSIZ];
    //char        **env;
    char        *line = NULL;
    //char        **path;
    //char    *path_simple;
    
   size_t      bufsize = 0;
    
    cwd[0] = '*';
    //Getcwd(cwd, sizeof(cwd));
   // print_the_edge();
    // get env
    // get path
    printf("%s"G PROMPT RT, cwd);
    
    //path = ft_split(getenv("PATH"), ':');
    //path = getenv("PATH");
    //getenv("PWD");
    //getenv("PS1");

    
   int status;
   //char *const envp[] = {NULL};

   while (getline(&line, &bufsize, stdin) != -1)
   {
        //trim
        line = ft_strtrim(line, " \t\n");
        //parse
        char *token;
        char *argv[BUFFER_SIZE];
        int argc = 0;
        char *delim = " \t\n";
       
        token = strtok(line, delim);
        while (token != NULL)
        {
            argv[argc] = token;
            token = strtok(NULL, delim);
            argc++;
        }
        argv[argc] = NULL;
        
        //char *const argv[] = {line, NULL};
        printf("\n");
        printf(BP "%s" RT, "Bien recu 🫡 : ");
        printf("%s\n", line);
        printf("argv[0] = %s\n", argv[0]);
        
        if (fork() == 0)
        {
            // use execvp to search in the PATH
            execvp(argv[0], argv);
            // use execve to execute a specific path
            //execve("/bin/ls", argv, envp);
            perror("execve");
            exit(EXIT_FAILURE);
        }
        wait (&status);
        if (WIFEXITED(status))
            printf("child exited with status %d\n", WEXITSTATUS(status));
        else
            printf("child exited abnormally\n");
        //printf("%s", line);
        printf("\n");
        free(line);
        line = NULL;
        bufsize = 0;
        printf("%s"G PROMPT RT, cwd);
    }
   
    /*     
    */
   free(line);
}