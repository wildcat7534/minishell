/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmassol <cmassol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 16:40:00 by cmassol           #+#    #+#             */
/*   Updated: 2025/03/03 19:48:39 by cmassol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

void	print_prompt(void)
{
    ft_putstr("minishell$ ", 1);
}

// TAAG : https://patorjk.com/software/taag/#p=display&f=Bloody&t=Ghost%20in%20the%20Shell
// Font : Bloody
// Text : Ghost in the Shell
// Text color : GREEN
/*


  ▄████  ██░ ██  ▒█████    ██████ ▄▄▄█████▓    ██▓ ███▄    █    ▄▄▄█████▓ ██░ ██ ▓█████      ██████  ██░ ██ ▓█████  ██▓     ██▓    
 ██▒ ▀█▒▓██░ ██▒▒██▒  ██▒▒██    ▒ ▓  ██▒ ▓▒   ▓██▒ ██ ▀█   █    ▓  ██▒ ▓▒▓██░ ██▒▓█   ▀    ▒██    ▒ ▓██░ ██▒▓█   ▀ ▓██▒    ▓██▒    
▒██░▄▄▄░▒██▀▀██░▒██░  ██▒░ ▓██▄   ▒ ▓██░ ▒░   ▒██▒▓██  ▀█ ██▒   ▒ ▓██░ ▒░▒██▀▀██░▒███      ░ ▓██▄   ▒██▀▀██░▒███   ▒██░    ▒██░    
░▓█  ██▓░▓█ ░██ ▒██   ██░  ▒   ██▒░ ▓██▓ ░    ░██░▓██▒  ▐▌██▒   ░ ▓██▓ ░ ░▓█ ░██ ▒▓█  ▄      ▒   ██▒░▓█ ░██ ▒▓█  ▄ ▒██░    ▒██░    
░▒▓███▀▒░▓█▒░██▓░ ████▓▒░▒██████▒▒  ▒██▒ ░    ░██░▒██░   ▓██░     ▒██▒ ░ ░▓█▒░██▓░▒████▒   ▒██████▒▒░▓█▒░██▓░▒████▒░██████▒░██████▒
 ░▒   ▒  ▒ ░░▒░▒░ ▒░▒░▒░ ▒ ▒▓▒ ▒ ░  ▒ ░░      ░▓  ░ ▒░   ▒ ▒      ▒ ░░    ▒ ░░▒░▒░░ ▒░ ░   ▒ ▒▓▒ ▒ ░ ▒ ░░▒░▒░░ ▒░ ░░ ▒░▓  ░░ ▒░▓  ░
  ░   ░  ▒ ░▒░ ░  ░ ▒ ▒░ ░ ░▒  ░ ░    ░        ▒ ░░ ░░   ░ ▒░       ░     ▒ ░▒░ ░ ░ ░  ░   ░ ░▒  ░ ░ ▒ ░▒░ ░ ░ ░  ░░ ░ ▒  ░░ ░ ▒  ░
░ ░   ░  ░  ░░ ░░ ░ ░ ▒  ░  ░  ░    ░          ▒ ░   ░   ░ ░      ░       ░  ░░ ░   ░      ░  ░  ░   ░  ░░ ░   ░     ░ ░     ░ ░   
      ░  ░  ░  ░    ░ ░        ░               ░           ░              ░  ░  ░   ░  ░         ░   ░  ░  ░   ░  ░    ░  ░    ░  ░
                                                                                                                                   
*/
void	print_bloody(void)
{
    ft_putstr("  ▄████  ██░ ██  ▒█████    ██████ ▄▄▄█████▓    ██▓ ███▄    █    ▄▄▄█████▓ ██░ ██ ▓█████      ██████  ██░ ██ ▓█████  ██▓     ██▓    \n", 1);
    ft_putstr(" ██▒ ▀█▒▓██░ ██▒▒██▒  ██▒▒██    ▒ ▓  ██▒ ▓▒   ▓██▒ ██ ▀█   █    ▓  ██▒ ▓▒▓██░ ██▒▓█   ▀    ▒██    ▒ ▓██░ ██▒▓█   ▀ ▓██▒    ▓██▒    \n", 1);
    ft_putstr("▒██░▄▄▄░▒██▀▀██░▒██░  ██▒░ ▓██▄   ▒ ▓██░ ▒░   ▒██▒▓██  ▀█ ██▒   ▒ ▓██░ ▒░▒██▀▀██░▒███      ░ ▓██▄   ▒██▀▀██░▒███   ▒██░    ▒██░    \n", 1);
    ft_putstr("░▓█  ██▓░▓█ ░██ ▒██   ██░  ▒   ██▒░ ▓██▓ ░    ░██░▓██▒  ▐▌██▒   ░ ▓██▓ ░ ░▓█ ░██ ▒▓█  ▄      ▒   ██▒░▓█ ░██ ▒▓█  ▄ ▒██░    ▒██░    \n", 1);
    ft_putstr("░▒▓███▀▒░▓█▒░██▓░ ████▓▒░▒██████▒▒  ▒██▒ ░    ░██░▒██░   ▓██░     ▒██▒ ░ ░▓█▒░██▓░▒████▒   ▒██████▒▒░▓█▒░██▓░▒████▒░██████▒░██████▒\n", 1);
    ft_putstr(" ░▒   ▒  ▒ ░░▒░▒░ ▒░▒░▒░ ▒ ▒▓▒ ▒ ░  ▒ ░░      ░▓  ░ ▒░   ▒ ▒      ▒ ░░    ▒ ░░▒░▒░░ ▒░ ░   ▒ ▒▓▒ ▒ ░ ▒ ░░▒░▒░░ ▒░ ░░ ▒░▓  ░░ ▒░▓  ░\n", 1);
    ft_putstr("  ░   ░  ▒ ░▒░ ░  ░ ▒ ▒░ ░ ░▒  ░ ░    ░        ▒ ░░ ░░   ░ ▒░       ░     ▒ ░▒░ ░ ░ ░  ░   ░ ░▒  ░ ░ ▒ ░▒░ ░ ░ ░  ░░ ░ ▒  ░░ ░ ▒  ░\n", 1);
    ft_putstr("░ ░   ░  ░  ░░ ░░ ░ ░ ▒  ░  ░  ░    ░          ▒ ░   ░   ░ ░      ░       ░  ░░ ░   ░      ░  ░  ░   ░  ░░ ░   ░     ░ ░     ░ ░   \n", 1);
    ft_putstr("      ░  ░  ░  ░    ░ ░        ░               ░           ░              ░  ░  ░   ░  ░         ░   ░  ░  ░   ░  ░    ░  ░    ░  ░\n", 1);
    ft_putstr("                                                                                                                                   \n", 1);
}
    
// TAGG : https://patorjk.com/software/taag/#p=display&f=THIS&t=Ghost%20in%20the%20Shell
// Font : THIS
// Text : Ghost in the Shell
// Text color : RED
/*

▄▀▀▀▀▄   ▄▀▀▄ ▄▄   ▄▀▀▀▀▄   ▄▀▀▀▀▄  ▄▀▀▀█▀▀▄      ▄▀▀█▀▄    ▄▀▀▄ ▀▄      ▄▀▀▀█▀▀▄  ▄▀▀▄ ▄▄   ▄▀▀█▄▄▄▄      ▄▀▀▀▀▄  ▄▀▀▄ ▄▄   ▄▀▀█▄▄▄▄  ▄▀▀▀▀▄    ▄▀▀▀▀▄     
█        █  █   ▄▀ █      █ █ █   ▐ █    █  ▐     █   █  █  █  █ █ █     █    █  ▐ █  █   ▄▀ ▐  ▄▀   ▐     █ █   ▐ █  █   ▄▀ ▐  ▄▀   ▐ █    █    █    █      
█    ▀▄▄ ▐  █▄▄▄█  █      █    ▀▄   ▐   █         ▐   █  ▐  ▐  █  ▀█     ▐   █     ▐  █▄▄▄█    █▄▄▄▄▄         ▀▄   ▐  █▄▄▄█    █▄▄▄▄▄  ▐    █    ▐    █      
█     █ █   █   █  ▀▄    ▄▀ ▀▄   █     █              █       █   █         █         █   █    █    ▌      ▀▄   █     █   █    █    ▌      █         █       
▐▀▄▄▄▄▀ ▐  ▄▀  ▄▀    ▀▀▀▀    █▀▀▀    ▄▀            ▄▀▀▀▀▀▄  ▄▀   █        ▄▀         ▄▀  ▄▀   ▄▀▄▄▄▄        █▀▀▀     ▄▀  ▄▀   ▄▀▄▄▄▄     ▄▀▄▄▄▄▄▄▀ ▄▀▄▄▄▄▄▄▀ 
▐         █   █              ▐      █             █       █ █    ▐       █          █   █     █    ▐        ▐       █   █     █    ▐     █         █         
          ▐   ▐                     ▐             ▐       ▐ ▐            ▐          ▐   ▐     ▐                     ▐   ▐     ▐          ▐         ▐         
*/
void	print_this(void)
{
    ft_putstr("▄▀▀▀▀▄   ▄▀▀▄ ▄▄   ▄▀▀▀▀▄   ▄▀▀▀▀▄  ▄▀▀▀█▀▀▄      ▄▀▀█▀▄    ▄▀▀▄ ▀▄      ▄▀▀▀█▀▀▄  ▄▀▀▄ ▄▄   ▄▀▀█▄▄▄▄      ▄▀▀▀▀▄  ▄▀▀▄ ▄▄   ▄▀▀█▄▄▄▄  ▄▀▀▀▀▄    ▄▀▀▀▀▄     \n", 1);
    ft_putstr("█        █  █   ▄▀ █      █ █ █   ▐ █    █  ▐     █   █  █  █  █ █ █     █    █  ▐ █  █   ▄▀ ▐  ▄▀   ▐     █ █   ▐ █  █   ▄▀ ▐  ▄▀   ▐ █    █    █    █       \n", 1);
    ft_putstr("█    ▀▄▄ ▐  █▄▄▄█  █      █    ▀▄   ▐   █         ▐   █  ▐  ▐  █  ▀█     ▐   █     ▐  █▄▄▄█    █▄▄▄▄▄         ▀▄   ▐  █▄▄▄█    █▄▄▄▄▄  ▐    █    ▐    █       \n", 1);
    ft_putstr("█     █ █   █   █  ▀▄    ▄▀ ▀▄   █     █              █       █   █         █         █   █    █    ▌      ▀▄   █     █   █    █    ▌      █         █        \n", 1);
    ft_putstr("▐▀▄▄▄▄▀ ▐  ▄▀  ▄▀    ▀▀▀▀    █▀▀▀    ▄▀            ▄▀▀▀▀▀▄  ▄▀   █        ▄▀         ▄▀  ▄▀   ▄▀▄▄▄▄        █▀▀▀     ▄▀  ▄▀   ▄▀▄▄▄▄     ▄▀▄▄▄▄▄▄▀ ▄▀▄▄▄▄▄▄▀\n", 1);
    ft_putstr("▐         █   █              ▐      █             █       █ █    ▐       █          █   █     █    ▐        ▐       █   █     █    ▐     █         █         \n", 1);
    ft_putstr("          ▐   ▐                     ▐             ▐       ▐ ▐            ▐          ▐   ▐     ▐                     ▐   ▐     ▐          ▐         ▐         \n", 1);
}

/*
 ▄▀   ▄  █ ████▄    ▄▄▄▄▄      ▄▄▄▄▀     ▄█    ▄          ▄▄▄▄▀ ▄  █ ▄███▄          ▄▄▄▄▄    ▄  █ ▄███▄   █    █     
▄▀    █   █ █   █   █     ▀▄ ▀▀▀ █        ██     █      ▀▀▀ █   █   █ █▀   ▀        █     ▀▄ █   █ █▀   ▀  █    █     
█ ▀▄  ██▀▀█ █   █ ▄  ▀▀▀▀▄       █        ██ ██   █         █   ██▀▀█ ██▄▄        ▄  ▀▀▀▀▄   ██▀▀█ ██▄▄    █    █     
█   █ █   █ ▀████  ▀▄▄▄▄▀       █         ▐█ █ █  █        █    █   █ █▄   ▄▀      ▀▄▄▄▄▀    █   █ █▄   ▄▀ ███▄ ███▄  
 ███     █                     ▀           ▐ █  █ █       ▀        █  ▀███▀                     █  ▀███▀       ▀    ▀ 
        ▀                                    █   ██               ▀                            ▀                      
                                                                                                                     
 */
// TAAG : https://patorjk.com/software/taag/#p=display&f=The%20Edge&t=Ghost%20in%20the%20Shell
// Font : The Edge
// Text : Ghost in the Shell
// Text color : RED
void   print_the_edge(void)
{
    ft_putstr("▄▀   ▄  █ ████▄    ▄▄▄▄▄      ▄▄▄▄▀     ▄█    ▄          ▄▄▄▄▀ ▄  █ ▄███▄          ▄▄▄▄▄    ▄  █ ▄███▄   █    █     \n", 1);
    ft_putstr("▄▀    █   █ █   █   █     ▀▄ ▀▀▀ █        ██     █      ▀▀▀ █   █   █ █▀   ▀        █     ▀▄ █   █ █▀   ▀  █    █     \n", 1);
    ft_putstr("█ ▀▄  ██▀▀█ █   █ ▄  ▀▀▀▀▄       █        ██ ██   █         █   ██▀▀█ ██▄▄        ▄  ▀▀▀▀▄   ██▀▀█ ██▄▄    █    █     \n", 1);
    ft_putstr("█   █ █   █ ▀████  ▀▄▄▄▄▀       █         ▐█ █ █  █        █    █   █ █▄   ▄▀      ▀▄▄▄▄▀    █   █ █▄   ▄▀ ███▄ ███▄  \n", 1);
    ft_putstr(" ███     █                     ▀           ▐ █  █ █       ▀        █  ▀███▀                     █  ▀███▀       ▀    ▀     \n", 1);
    ft_putstr("        ▀                                    █   ██               ▀                            ▀                      \n", 1);
    ft_putstr("                                                                                                                      \n", 1);
    ft_putstr("\n", 1);
}