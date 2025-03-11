#include <iostream>

int main()
{
    int tipodeataque;
    int escudo;
    int dañototal;
    int daño;
    int a;
    
    std::cout << "valor del Escudo"<<std::endl;
    std::cin >> escudo;  
    std::cout << "valor del daño"<<std::endl;
    std::cin >> daño;
    std::cout << "tipo de ataque (1)plasmas (2)infernal)"<<std::endl;
    std::cin >> tipodeataque;
    
    if((escudo>=70)&&(tipodeataque==1)){
        dañototal=daño/2+daño;
        std::cout << "¡Sobre carga de escudo! daño aumentado" <<std::endl;
        std::cout << "daño recibido: "<< dañototal<<std::endl;
        std::cout << "escudo restante: " <<escudo- dañototal << std::endl;
    }
    else if((escudo<=30)&&(tipodeataque==2)){
        dañototal=(daño -(daño*0.4));
        a=escudo - dañototal;
        
        if(a<=0){
            escudo=0;
            std::cout << "daño recibido: "<< dañototal<<std::endl;
            std::cout << "escudo restante: " <<escudo<< std::endl;
            std::cout << "¡Protección infernal activada! Daño reducido." <<std::endl;
            std::cout << "¡Modo de ira activado! El siguiente ataque será más fuerte." <<std::endl;
            
        }
        else{
            std::cout << "daño recibido: "<<dañototal<<std::endl;
            std::cout << "escudo restante: " <<a<< std::endl;
            std::cout << "¡Protección infernal activada! Daño reducido." <<std::endl;
        }
        
    }else if(escudo<=0){
        std::cout << "¡Modo de ira activado! El siguiente ataque será más fuerte." <<std::endl;
        std::cout << "daño recibido: "<< daño<<std::endl;
        std::cout << "escudo restante: " <<escudo<< std::endl;
    }
     
}