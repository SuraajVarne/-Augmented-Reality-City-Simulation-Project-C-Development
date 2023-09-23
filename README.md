# Description 

SimCity is a city simulation project written in C++ that simulates the growth and development of a virtual city. The project was developed as a group project in August 2022 and includes various classes representing different regions within the city, such as residential, industrial, commercial, and more. The simulation models population growth, pollution, worker availability, and the production and exchange of goods.


# Sim City Project for CS2110 Foundations of Data Structures

<img src="resources/gui.PNG" alt="SimCity Project GUI">

**Usage Instructions**:
- SimCity contains the final product files of this project
- All .h and .cpp files in this directory contribute to the final product, compiled using g++ -o SimCity.exe *.cpp
- Before running the SimCity.exe, each config (.txt) file and region (.csv) file must be under the same directory as the .exe
- Simply run the .exe, and type the config file name as prompted. During the simulation, the user will be prompted for action when required. The simulation will end when the user enters 'q' once prompted

## Example Config and Region File Contents:

<img src="resources/exampleconfig.PNG" alt="Example Config File Contents">

<img src="resources/exampleregion.PNG" alt="Example Region File Contents">

## Navigate to the project directory
cd simcity-project

## Compile the source code using a C++ compiler

g++ main.cpp regions.cpp citysubjects.cpp -o simcity

## Run 
./simcity



## Links:
Visual Guide Planning Document: https://docs.google.com/document/d/1u8CUQkEtP40IZ--OMijb-o8tbsXpUjiG1IXa2mV2zQg/edit?usp=sharing
