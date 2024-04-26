# ft_fprintf

Reproduction de la fonction `fprintf` de la librairie `stdio.h` qui permet de rediriger la sortie de printf sur n'importe quel `File_Descriptor`.
J'ai développé cette fonction pour pouvoir rediriger l'ensemble des messages de débugage et d'erreur de mon Minishell vers un fichier de log.
Bien utile pour inscrire tout ce qui marche ou pas lors du développement, je l'ai intégrée à ma libft, à la suite de `ft_run_malloc` développée il y a peu.
