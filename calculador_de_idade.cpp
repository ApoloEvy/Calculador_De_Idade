#include <iostream>

int main() {
  
  //definição de variaveis
  
    int PrimeiroAno;
    int SegundoAno;
    int resultado;
// fim da definição 

  //recurso "anti letras"
  
    std::cout << "Por favor, insira o ano em que nasceu: ";
    if (!(std::cin >> PrimeiroAno)) {
        std::cout << "Por favor, insira apenas numeros." << std::endl;
        return 1;
    }

    std::cout << "Agora, insira o ano em que deseja saber sua idade: ";
    if (!(std::cin >> SegundoAno)) {
        std::cout << "Por favor, insira apenas números." << std::endl;
        return 1;
    }
  
  // fim do recurso

    resultado = SegundoAno - PrimeiroAno;

    if (PrimeiroAno <= 1910) {
        std::cout << "Acho dificil voce estar vivo, mas teria " << resultado << " anos.";
    } else if (SegundoAno >= 2100) {
        std::cout << "Acho dificil voce estar vivo, mas teria " << resultado << " anos.";
    } else {
        std::cout << "Voce tem/tinha " << resultado << " anos.";
    }
  
    return 0;
}
