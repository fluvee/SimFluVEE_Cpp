SimFLu 6

SimFluVE is a stochastic agent-based simulation program, written in C++, for the transmission of influenza in a stratified population. SimFluVE performs a set of simulations with fixed values of the input parameters.  Each simulation corresponds to a single outbreak.

The source code of the program is accompanied with a make file that can be used to compile the source using GCC C++ compiler.  To compile the source code on a machine with GCC compiler installed run the make command from terminal (Unix flavored operating systems). Cygwin or MinGW can be used to compile the code on a Windows machine. Compiling the code will generate an executable file named SimFluVE on Unix flavored OS or SimFlu.exe on Windows machines.

How to Run

Using command line interface

SimFluVE requires an input parameters file. By default, SimFluVE looks for a file named as Simflu6_input.csv in the same folder where SimFluVE executable is placed. This default option can be overridden by providing the path and name of the input parameters file as a command line argument. 
To run from command prompt, change the directory to the one containing the SimFluVE executable and run command:

> ./SimFlu
or 
> ./SimFlu <input_filename>

The program can also be executed (with default input parameters file) by simply double-clicking the executable file. 

Using graphical interface

SimFluVE’s graphical user interface lets users provide inputs, run simulations and save outputs in a friendly manner. Following screenshots will walk you through the process of using this interface for running simulations.
 
The following screenshot shows the default view of SimFluVE. The panel is split between two tabs. The simulation tab contains all the inputs and controls. Once the simulation run is complete, the Output tab populates the desired outputs. 
