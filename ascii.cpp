#include <iostream>
#include <string>
#include <cmath>

#include "ascii.hpp"

using namespace std;

void midgardAsciiIntro(){
    cout << R"(            

████████╗██╗  ██╗ ██████╗ ██████╗        ███╗   ███╗██╗██████╗  ██████╗  █████╗ ██████╗ ██████╗ 
╚══██╔══╝██║  ██║██╔═══██╗██╔══██╗       ████╗ ████║██║██╔══██╗██╔════╝ ██╔══██╗██╔══██╗██╔══██╗
   ██║   ███████║██║   ██║██████╔╝       ██╔████╔██║██║██║  ██║██║  ███╗███████║██████╔╝██║  ██║
   ██║   ██╔══██║██║   ██║██╔══██╗       ██║╚██╔╝██║██║██║  ██║██║   ██║██╔══██║██╔══██╗██║  ██║
   ██║   ██║  ██║╚██████╔╝██║  ██║▄█╗    ██║ ╚═╝ ██║██║██████╔╝╚██████╔╝██║  ██║██║  ██║██████╔╝
   ╚═╝   ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═╝╚═╝    ╚═╝     ╚═╝╚═╝╚═════╝  ╚═════╝ ╚═╝  ╚═╝╚═╝  ╚═╝╚═════╝ 
                                                                                                                  
    )" << endl;
}

void helAsciiIntro(){
    cout << R"(          

████████╗██╗   ██╗██████╗        ██╗  ██╗███████╗██╗     
╚══██╔══╝╚██╗ ██╔╝██╔══██╗       ██║  ██║██╔════╝██║     
   ██║    ╚████╔╝ ██████╔╝       ███████║█████╗  ██║     
   ██║     ╚██╔╝  ██╔══██╗       ██╔══██║██╔══╝  ██║     
   ██║      ██║   ██║  ██║▄█╗    ██║  ██║███████╗███████╗
   ╚═╝      ╚═╝   ╚═╝  ╚═╝╚═╝    ╚═╝  ╚═╝╚══════╝╚══════╝
                                                         
    )" << endl;
}

void serpentAscii(){
  cout << R"(

     ██╗ ██████╗ ██████╗ ███╗   ███╗██╗   ██╗███╗   ██╗ ██████╗  █████╗ ██████╗ 
     ██║██╔═══██╗██╔══██╗████╗ ████║██║   ██║████╗  ██║██╔════╝ ██╔══██╗██╔══██╗
     ██║██║   ██║██████╔╝██╔████╔██║██║   ██║██╔██╗ ██║██║  ███╗███████║██████╔╝
██   ██║██║   ██║██╔══██╗██║╚██╔╝██║██║   ██║██║╚██╗██║██║   ██║██╔══██║██╔══██╗
╚█████╔╝╚██████╔╝██║  ██║██║ ╚═╝ ██║╚██████╔╝██║ ╚████║╚██████╔╝██║  ██║██║  ██║
 ╚════╝  ╚═════╝ ╚═╝  ╚═╝╚═╝     ╚═╝ ╚═════╝ ╚═╝  ╚═══╝ ╚═════╝ ╚═╝  ╚═╝╚═╝  ╚═╝

      )" << endl;                                                                     
}

void garmAscii(){
  cout << R"(

 ██████╗  █████╗ ██████╗ ███╗   ███╗
██╔════╝ ██╔══██╗██╔══██╗████╗ ████║
██║  ███╗███████║██████╔╝██╔████╔██║
██║   ██║██╔══██║██╔══██╗██║╚██╔╝██║
╚██████╔╝██║  ██║██║  ██║██║ ╚═╝ ██║
 ╚═════╝ ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝     ╚═╝
                                    
      )" << endl;                                                                     
}

void deathAndIntroAscii(){
    cout << R"(
                                                                                                                                                                                                                                        
███████╗ ██████╗ ███████╗████████╗███████╗██████╗ ███████╗██████╗      ██████╗ ███████╗    ████████╗██╗  ██╗███████╗            
██╔════╝██╔═══██╗██╔════╝╚══██╔══╝██╔════╝██╔══██╗██╔════╝██╔══██╗    ██╔═══██╗██╔════╝    ╚══██╔══╝██║  ██║██╔════╝            
█████╗  ██║   ██║███████╗   ██║   █████╗  ██████╔╝█████╗  ██████╔╝    ██║   ██║█████╗         ██║   ███████║█████╗              
██╔══╝  ██║   ██║╚════██║   ██║   ██╔══╝  ██╔══██╗██╔══╝  ██╔══██╗    ██║   ██║██╔══╝         ██║   ██╔══██║██╔══╝              
██║     ╚██████╔╝███████║   ██║   ███████╗██║  ██║███████╗██║  ██║    ╚██████╔╝██║            ██║   ██║  ██║███████╗            
╚═╝      ╚═════╝ ╚══════╝   ╚═╝   ╚══════╝╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝     ╚═════╝ ╚═╝            ╚═╝   ╚═╝  ╚═╝╚══════╝            
                                                                                                                                
██╗    ██╗ ██████╗ ██╗     ███████╗     █████╗ ███╗   ██╗██████╗     ███████╗███████╗██████╗ ██████╗ ███████╗███╗   ██╗████████╗
██║    ██║██╔═══██╗██║     ██╔════╝    ██╔══██╗████╗  ██║██╔══██╗    ██╔════╝██╔════╝██╔══██╗██╔══██╗██╔════╝████╗  ██║╚══██╔══╝
██║ █╗ ██║██║   ██║██║     █████╗      ███████║██╔██╗ ██║██║  ██║    ███████╗█████╗  ██████╔╝██████╔╝█████╗  ██╔██╗ ██║   ██║   
██║███╗██║██║   ██║██║     ██╔══╝      ██╔══██║██║╚██╗██║██║  ██║    ╚════██║██╔══╝  ██╔══██╗██╔═══╝ ██╔══╝  ██║╚██╗██║   ██║   
╚███╔███╔╝╚██████╔╝███████╗██║         ██║  ██║██║ ╚████║██████╔╝    ███████║███████╗██║  ██║██║     ███████╗██║ ╚████║   ██║   
 ╚══╝╚══╝  ╚═════╝ ╚══════╝╚═╝         ╚═╝  ╚═╝╚═╝  ╚═══╝╚═════╝     ╚══════╝╚══════╝╚═╝  ╚═╝╚═╝     ╚══════╝╚═╝  ╚═══╝   ╚═╝   
                                                                                                                                
    )" << endl;
}

void enemyBar(double enemyHealth, double inflictedDmg, string enemyType){
    double percentage = round(inflictedDmg/enemyHealth * 100);
    string bar = "****************************************************************************************************"; 

    if(percentage <= 100 && percentage >= 0){

    for(double i = 0; i < percentage; i++){
        bar.replace(100-i, 1, " "); 
    }

    if(enemyType == "Jormungandr"){
        serpentAscii();
        cout << 100-percentage << "% [ " << bar << " ]" << endl;
    } else if(enemyType == "Garm"){
        garmAscii();
        cout << 100-percentage << "% [ " << bar << " ]" << endl;
    }

    } else {
       cout << "\n[ THE ENEMY ATTEMPTS TO REBIRTH. REBIRTH. REBIRTH. ATTACK TO STOP REBIRTH. ]" << endl;
    }
}

