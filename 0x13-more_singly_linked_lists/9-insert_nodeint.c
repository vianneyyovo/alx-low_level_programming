/*
* Fichier : 9-insert_nodeint.c
* Auteur : Yov Koffi Vianney
 */

# inclure  " listes.h "

/* *
* insert_nodeint_at_index - Insère un nouveau nœud dans un listint_t
* liste à une position donnée.
* @head : Un pointeur vers l'adresse du
* tête de la liste listint_t.
* @idx : L'index de la liste listint_t où le nouveau
* le nœud doit être ajouté - les indices commencent à 0.
* @n : L'entier que le nouveau nœud doit contenir.
*
* Retour : Si la fonction échoue - NULL.
* Sinon - l'adresse du nouveau nœud.
 */
listint_t * insert_nodeint_at_index ( listint_t **head, unsigned  int idx, int n)
{
	listint_t *nouveau, *copie = *tête ;
	 nœud int non signé ;

	new = malloc ( sizeof ( listint_t ));
	si (nouveau == NULL )
		retour ( NULL );

	nouveau-> n = n ;

	si (idx == 0 )
	{
		nouveau-> suivant = copier ;
		*tête = nouveau ;
		retour (nouveau);
	}

	pour (noeud = 0 ; noeud < (idx - 1 ); noeud++)
	{
		si (copie == NULL || copie-> suivant == NULL )
			retour ( NULL );

		copier = copier-> suivant ;
	}

	nouveau-> suivant = copier-> suivant ;
	copier-> suivant = nouveau ;

	retour (nouveau);
}
