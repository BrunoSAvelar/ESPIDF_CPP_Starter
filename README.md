# ESPIDF_CPP_Starter
Este é um projeto de exemplo para demonstrar como utilizar **ESP-IDF** com **C++** em sistemas embarcados, especialmente em dispositivos ESP32. O objetivo é fornecer uma base clara e funcional para projetos que desejam tirar proveito dos recursos da linguagem C++ no desenvolvimento embarcado.

## 🧭 Justificativa

Hoje existe pouco material disponível na internet que mostre como trabalhar com sistemas embarcados utilizando C++. A maior parte dos profissionais que atuam nessa área tendem a utilizar **linguagem C pura**, por ser tradicionalmente associada ao desenvolvimento de firmware. No entanto, essa escolha muitas vezes ignora os **benefícios da orientação a objetos**, como encapsulamento, reutilização de código e maior modularidade, que podem tornar o desenvolvimento mais limpo, escalável e seguro.

Além disso, cada vez mais são lançados microcontroladores com maior capacidade de processamento e memória, o que abre espaço para a utilização de linguagens e paradigmas de programação mais sofisticados. Esses novos dispositivos, como os baseados em ARM Cortex-M, ESP32-S3 e variantes mais recentes da linha STM32, permitem o uso eficiente de recursos como alocação dinâmica de memória, herança, polimorfismo e templates, características centrais da programação orientada a objetos em C++.

Paralelamente, os projetos de sistemas embarcados estão se tornando mais complexos e exigem funcionalidades mais robustas — integração com redes Wi-Fi ou Bluetooth, protocolos criptografados, interfaces gráficas, sensores diversos e conectividade com serviços em nuvem. Esse aumento de complexidade torna inviável a manutenção de grandes bases de código escritas em C estruturado, sem ferramentas adequadas de abstração e organização.

Nesse contexto, o uso de C++ permite criar arquiteturas de software mais estruturadas, com separação clara de responsabilidades, testes mais acessíveis e maior facilidade de manutenção e evolução do código. Frameworks modernos para sistemas embarcados, como mbed OS ou mesmo bibliotecas escritas com C++ moderno para FreeRTOS, evidenciam uma tendência crescente do setor em adotar práticas mais maduras de engenharia de software.

Portanto, disseminar conhecimento sobre o uso de C++ em sistemas embarcados é essencial para que profissionais da área acompanhem essa evolução tecnológica e possam desenvolver soluções mais modernas, confiáveis e sustentáveis a longo prazo.


## 🚀 Vantagens de usar C++ com ESP-IDF

O ESP-IDF suporta diversos recursos modernos do C++, o que permite um desenvolvimento mais robusto e organizado. Abaixo, listamos alguns dos principais recursos disponíveis:

- **Exception Handling** — Manipulação de exceções para melhor tratamento de erros.
- **Multithreading** — Programação concorrente com suporte às bibliotecas C++ padrão.
- **RTTI (Runtime Type Information)** — Identificação de tipos em tempo de execução.
- **Thread Local Storage** — Suporte à palavra-chave `thread_local`.
- **Filesystem Library** — Manipulação de arquivos com a biblioteca padrão do C++.
- **Todos os recursos do C++ suportados pelo GCC**, com algumas limitações (consulte a [documentação do GCC](https://gcc.gnu.org/) para detalhes).

Esses recursos permitem que desenvolvedores aproveitem a linguagem de forma moderna, mesmo em ambientes embarcados.

## ✅ Objetivo deste projeto
Servir como ponto de partida para desenvolvedores que desejam criar aplicações embarcadas modernas e organizadas, utilizando o melhor do C++ com a robustez do framework ESP-IDF.

## 💡Explicação do projeto:
### Estrutura do Projeto
O projeto está organizado da seguinte forma:

  main.cpp: É o ponto de entrada da aplicação. Aqui existe a função app_main() que é a primeira a ser executada quando o dispositivo é ligado. Esta função é declarada com extern "C" para garantir que o inicializador do ESP32 possa chamá-la corretamente, já que o código está em C++.

  AppManager.cpp: Implementa uma classe de exemplo chamada AppManager que demonstra como criar e utilizar classes C++ em um ambiente ESP-IDF. A classe cria uma tarefa FreeRTOS (AppManagerTask) que é executada em paralelo com o loop principal.

### Funcionalidades Implementadas
- Gerenciamento de Tarefas FreeRTOS: O projeto demonstra como criar tarefas usando o FreeRTOS dentro de classes C++.

- Configuração de Logs: Existe uma função LogConfig() que configura diferentes níveis de log para diferentes módulos do aplicativo.

- Demonstração de POO: O projeto ilustra conceitos básicos de Programação Orientada a Objetos em um ambiente embarcado.

### Fluxo de Execução
- A aplicação começa na função app_main().
- A configuração de logs é inicializada.
- Uma instância de AppManager é criada.
- O construtor de AppManager cria uma tarefa FreeRTOS (AppManagerTask).
- A tarefa AppManagerTask executa em paralelo, exibindo logs a cada segundo.
- O loop principal em app_main() continua rodando, com um atraso de 1 segundo entre iterações.


## 📚 Referência oficial
Para mais informações sobre o suporte a C++ no ESP-IDF, consulte a documentação oficial da Espressif:
🔗 https://docs.espressif.com/projects/esp-idf/en/stable/esp32/api-guides/cplusplus.html

## ⚙️ Como utilizar o projeto

Siga os passos abaixo para configurar e executar o projeto:

1. **Instale os softwares abaixo:**

   - Visual Studio Code (https://code.visualstudio.com/)
   - ESP-IDF Extension for VS Code (https://github.com/espressif/vscode-esp-idf-extension/blob/master/README.md)


2. **Clonar este repositório**
   ```bash
   git clone https://github.com/BrunoSAvelar/ESPIDF_CPP_Starter.git
   cd ESPIDF_CPP_Starter

3. **Abra o código clonado no Visual Code**

4. **Compile o projeto**

## 🤝 Como contribuir

Contribuições são muito bem-vindas! Se você deseja ajudar a melhorar este projeto, siga os passos abaixo:

1. **Fork** este repositório.
2. Crie uma **branch** com sua feature ou correção:  
   ```bash
    git checkout -b minha-contribuicao
   
3. Faça suas alterações e commit:
   ```bash
    git commit -m 'Adiciona nova funcionalidade'

4. Envie para o seu repositório remoto:
   ```bash
    git push origin minha-contribuicao

5. Abra um Pull Request explicando suas mudanças.

Sinta-se à vontade para sugerir melhorias, corrigir bugs, escrever documentação ou criar novos exemplos!

## 📄 Licença
Este projeto está licenciado sob os termos da Licença MIT.
Consulte o arquivo LICENSE para mais detalhes.