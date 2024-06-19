# gMutant
A gCov based Mutation Testing Analyser

The main components in our framework are Test Case generator, Mutant Generator, Mutant Meta Program Generator, gCov Profiler, and  Analyzer.

**Test Case Generator:** As already mentioned, the CBMC and AFL test case generators are used in our implementation in order to generate test cases. 

_AFL Test Case Generation:_ AFL takes the mcdc_program as an input, compiles it and then executes using the below “afl-fuzz” command. Here, the timeout is set to 900 seconds i.e., 15 minutes for generating a good number of test cases.

**afl-gcc -fno-stack-protector -z execstack mcdc_program.c -o mcdc_program**
**timeout 900 afl-fuzz -i ./testcase-Random/ -o output_directory ./compiled_mcdcprogram**

_CBMC Test Case Generation:_ The following CBMC’s command generates the test cases based on MC/DC coverage criterion for the mcdc_Program.c program.

**./cbmc --cover mcdc “mcdc_Program.c”**

**Mutant Generator:** Before generating the mutants, the Reachable Lines information is extracted by executing the test cases (CBMC/AFL-generated) on the mcdc_Program.c program. Here, **gMutationAnalysis** and **tMutationAnalysis** folders contain the related gMutant and traditional Mutant generation process codes, respectively. The mutator.py is used to perform the PNF, CNF, ROF, LOF and AOF mutant operations on the program and generates mutants. These Reachable Mutants are generated for the predicates located at the Reachable Lines. 

**Instrumentation Component:** This component instruments the mcdc_program.c program with the generated Reachable Mutants.

**gCov Profiler:** gCov executes the test cases (CBMC/AFL-generated) on the generated Mutant Meta program and gives a report. The report contains the line numbers of the killed mutants.

**Analyzer:** This component takes the generated gCov report and the Reachable Mutants as inputs and generates the Mutation Score (%).

Below is the command to execute the sample (mcdc_Program.c) program.
**./main-gProfiler.sh mcdc_Program 2**

Below is the command to execute a small set (five) of programs.
**./run-few.sh**
