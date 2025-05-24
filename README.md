# ESPIDF_CPP_Starter
This is an example project demonstrating how to use **ESP-IDF** with **C++** in embedded systems, especially on ESP32 devices. The goal is to provide a clear and functional foundation for projects that want to leverage the features of the C++ language in embedded development.

## 👤 Autor
This project was made by Bruno Silveira Avelar

Contact: b.silveira.avelar@gmail.com
Linkedin: www.linkedin.com/in/bruno-avelar

## 🧩Dependências:

This project runs with ESP-IDF V5.3.1 and has been tested on an ESP32.

## 🧭 Justification

Currently, there is limited material available online that shows how to work with embedded systems using C++. Most professionals in this area tend to use **pure C language**, as it is traditionally associated with firmware development. However, this choice often overlooks the **benefits of object-orientation**, such as encapsulation, code reuse, and greater modularity, which can make development cleaner, more scalable, and more secure.

Furthermore, microcontrollers with increased processing power and memory are increasingly being released, opening up possibilities for more sophisticated languages and programming paradigms. These new devices, such as those based on ARM Cortex-M, ESP32-S3, and more recent variants of the STM32 line, allow for the efficient use of features like dynamic memory allocation, inheritance, polymorphism, and templates, which are central to object-oriented programming in C++.

In parallel, embedded system projects are becoming more complex and require more robust functionalities—integration with Wi-Fi or Bluetooth networks, encrypted protocols, graphical interfaces, various sensors, and connectivity with cloud services. This increase in complexity makes it unfeasible to maintain large codebases written in structured C without adequate abstraction and organization tools.

In this context, using C++ allows for the creation of more structured software architectures, with clear separation of responsibilities, more accessible testing, and greater ease of code maintenance and evolution. Modern frameworks for embedded systems, such as mbed OS or even libraries written with modern C++ for FreeRTOS, demonstrate a growing industry trend to adopt more mature software engineering practices.

Therefore, disseminating knowledge about the use of C++ in embedded systems is essential for professionals in the field to keep up with this technological evolution and develop more modern, reliable, and sustainable long-term solutions.

---

## 🚀 Advantages of using C++ with ESP-IDF

ESP-IDF supports several modern C++ features, allowing for more robust and organized development. Below, we list some of the main available features:

- **Exception Handling** — Exception handling for better error management.
- **Multithreading** — Concurrent programming with support for standard C++ libraries.
- **RTTI (Runtime Type Information)** — Runtime type identification.
- **Thread Local Storage** — Support for the `thread_local` keyword.
- **Filesystem Library** — File manipulation with the standard C++ library.
- **All C++ features supported by GCC**, with some limitations (consult the [GCC documentation](https://gcc.gnu.org/) for details).

These features allow developers to leverage the language in a modern way, even in embedded environments.

---

## ✅ Objective of this project
To serve as a starting point for developers who want to create modern and organized embedded applications, using the best of C++ with the robustness of the ESP-IDF framework.

---

## 💡 Project Explanation:
### Project Structure
The project is organized as follows:

`main.cpp`: This is the application's entry point. It contains the `app_main()` function, which is the first to be executed when the device powers on. This function is declared with `extern "C"` to ensure that the ESP32 initializer can call it correctly, as the code is in C++.

`AppManager.cpp`: Implements an example class called `AppManager` that demonstrates how to create and use C++ classes in an ESP-IDF environment. The class creates a FreeRTOS task (`AppManagerTask`) that runs in parallel with the main loop.

### Implemented Functionalities
- **FreeRTOS Task Management**: The project demonstrates how to create tasks using FreeRTOS within C++ classes.
- **Log Configuration**: There is a `LogConfig()` function that configures different log levels for various application modules.
- **OOP Demonstration**: The project illustrates basic Object-Oriented Programming concepts in an embedded environment.

### Execution Flow
- The application starts in the `app_main()` function.
- Log configuration is initialized.
- An instance of `AppManager` is created.
- The `AppManager` constructor creates a FreeRTOS task (`AppManagerTask`).
- The `AppManagerTask` runs in parallel, displaying logs every second.
- The main loop in `app_main()` continues to run, with a 1-second delay between iterations.

---

## 📚 Official Reference
For more information on C++ support in ESP-IDF, refer to the official Espressif documentation:
🔗 https://docs.espressif.com/projects/esp-idf/en/stable/esp32/api-guides/cplusplus.html

---

## ⚙️ How to use the project

Follow the steps below to set up and run the project:

1. **Install the following software:**

    - Visual Studio Code (https://code.visualstudio.com/)
    - ESP-IDF Extension for VS Code (https://github.com/espressif/vscode-esp-idf-extension/blob/master/README.md)

2. **Clone this repository**
    ```bash
    git clone [https://github.com/BrunoSAvelar/ESPIDF_CPP_Starter.git](https://github.com/BrunoSAvelar/ESPIDF_CPP_Starter.git)
    cd ESPIDF_CPP_Starter
    ```

3. **Open the cloned code in Visual Studio Code**

4. **Compile the project**

---

## 🤝 How to contribute

Contributions are very welcome! If you want to help improve this project, follow the steps below:

1. **Fork** this repository.
2. Create a **branch** with your feature or fix:
    ```bash
    git checkout -b my-contribution
    ```
3. Make your changes and commit:
    ```bash
    git commit -m 'Adds new functionality'
    ```
4. Push to your remote repository:
    ```bash
    git push origin my-contribution
    ```
5. Open a Pull Request explaining your changes.

Feel free to suggest improvements, fix bugs, write documentation, or create new examples!

---

## 📄 License
This project is licensed under the MIT License.
See the LICENSE file for more details.