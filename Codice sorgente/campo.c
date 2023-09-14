/*
	Nome: Campo
	Versione: 1.0
	Data: 9/9/2023
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define r 23
#define c 23


void inizializzaCampo ( char campo[][c] ){
	
	int i, j;
	
	// inizializza la matrice con carattere 0 ASCII
	memset( campo, ' ', sizeof(r));

    char lett = 'A', num = '1'; // convertono i numeri in caratteri num = numeri e lett = alfabetici
    
    
    // scrivo lettere e numeri
	for ( i = 3; i < c - 1; i+=2 ){
		// assegno i numeri alle posizioni orizzontali
		campo[1][i] = num;
		num++;
		
	    // assegno le lettere alle posizioni verticali
	    campo[i][0] = lett;
	    lett++;
	}
	campo[1][21] = 'X';// X sostituisce il 10 essendo una stringa
	
	
	// creo i bordi
	for ( i = 3; i < r - 1; i+=2 ){
		campo[i][2] = '|';
		campo[i+1][2] = 195;
		campo[i][22] = '|';
		campo[i+1][22] = 180;
		campo[2][i] = 196;
		campo[2][i+1] = 194;
		campo[22][i] = 196;
		campo[22][i+1] = 193;
	}
	for ( i = 4; i < r - 1; i+=2 ){
		
		for ( j= 3; j < c; j+=2 ){
			campo[i][j]=196;
			
		}
		for ( j = 4; j < c - 1; j+=2 ){
			campo[i][j] = 197;
			campo[i-1][j] = '|';
			campo[21][i] = '|';
			
		}
	}
	// creo gli angoli
	campo[2][2] = 218;
	campo[22][2] = 192;
	campo[22][22] = 217;
	campo[2][22] = 191;
	
}