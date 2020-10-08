#include <iostream>

std::string echo(int length, char** chars){
	std::string ret ="";
	for(int i = 1; i < length; i++){
		if(chars[length - 1] != "\t" && chars[i] != "\t"){
			ret += chars[i];
			 if(i < length - 1  && chars[i+1] != "!"){
				ret += " ";
			}	
		}
		else if(i < length - 1 && chars[i+1] != "!" && chars[i] != "\t"){
			ret += chars[i];
			if(chars[i + 1] != "\t"){
				ret += " ";
			}
		}
	}
	return ret;
}
