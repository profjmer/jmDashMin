/*************************************************************************
 * @file	fur_.c				 
 * @version	1.0
 * @author Jean Mercier profjmer@gmail.com
 * @brief Module de gestion du CAN
*/
#include "../include/application.h"
#ifdef config_fur

	String fur_menu(){
	return "\nfur\nfur {json reconnu par le fureteur}\n";
	}

	/** @brief		Interpréteur de commandes du module de gestionIO
	 * @param[in]	ligne de commande
	 * @returns		Retourne une String donnant le résultat de l'interprétation de la commande
	 */
	String fur_interpret(String line){
		// Permet de séparer les mots d'une line de caractères
		Vector<String> Mot;
		int qteMots = splitString(line, ' ' , Mot);

		// retourne le menu
		if(qteMots == 1)	return fur_menu();

		// retourne le menu des commandes du module gestionIO
		if(qteMots == 2){
			if(Mot[1]== "menu") return fur_menu();
		}	
		
		if(qteMots >= 2){
			String cmd = line.substring(4);
			web_wsSend(cmd);
			Serial.println(cmd);
			return "Transmis vers jmDASH\n";
		}

		// commande non reconnue
		return line + "  ???\n";
	}
#endif