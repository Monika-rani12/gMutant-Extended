export BENCHMARK=$1
export BOUND=$2

mkdir $BENCHMARK-gRESULTS
cp Programs/GCOV/$BENCHMARK.c gMutationAnalysis/
cp Programs/GCOV/$BENCHMARK.c afl-2.52b/
cp Programs/CBMC/$BENCHMARK.c CBMC/
############################################### AFL Test case generation ###########################################################
Xres1=$(date +%s.%N)
let dtX=0

cd afl-2.52b
./runafl.sh $BENCHMARK
mv results-afl-$BENCHMARK/cleaned-TCs ../
mv results-afl-$BENCHMARK ../
rm $BENCHMARK*
cd ../

Xres2=$(date +%s.%N)
dtX=$(echo "$Xres2 - $Xres1" | bc)
ddX=$(echo "$dtX/86400" | bc)
dtX2=$(echo "$dtX-86400*$ddX" | bc)
dhX=$(echo "$dtX2/3600" | bc)
dtX3=$(echo "$dtX2-3600*$dhX" | bc)
dmX=$(echo "$dtX3/60" | bc)
dsX=$(echo "$dtX3-60*$dmX" | bc)
echo "***Total AFL Test case generation time in seconds" $dtX >>  Time-$BENCHMARK.txt
printf "Total AFL Test case generation time: %d:%02d:%02d:%02.4f\n" $ddX $dhX $dmX $dsX >>  Time-$BENCHMARK.txt
echo "****************AFL Test case generation time Report - End**************************" >>  Time-$BENCHMARK.txt
############################################### CBMC TC generation ###########################################################
Xres1=$(date +%s.%N)
dtX=0
cd CBMC
./mcdc-cbmc.sh $BENCHMARK $BOUND
cd ..

Xres2=$(date +%s.%N)
dtX=$(echo "$Xres2 - $Xres1" | bc)
ddX=$(echo "$dtX/86400" | bc)
dtX2=$(echo "$dtX-86400*$ddX" | bc)
dhX=$(echo "$dtX2/3600" | bc)
dtX3=$(echo "$dtX2-3600*$dhX" | bc)
dmX=$(echo "$dtX3/60" | bc)
dsX=$(echo "$dtX3-60*$dmX" | bc)
echo "***Total CBMC TC generation time in seconds" $dtX >>  Time-$BENCHMARK.txt
printf "Total CBMC TC generation time in seconds: %d:%02d:%02d:%02.4f\n" $ddX $dhX $dmX $dsX >>  Time-$BENCHMARK.txt
echo "****************CBMC TC generation time Report - End**************************" >>  Time-$BENCHMARK.txt
##########################################################################################################################################################
#################################################  gMUTANT Code Starts                   #################################################################
##########################################################################################################################################################

############################################### AFL Mutant Meta Program generation ###########################################################
Xres1=$(date +%s.%N)
dtX=0

cd gMutationAnalysis
./MA_SC_MCC_V2.sh $BENCHMARK 1
mkdir ../AFL_Multiple_Mutants
mv Multiple_Mutants/*.c ../AFL_Multiple_Mutants
rmdir Multiple_Mutants
cd ..


Xres2=$(date +%s.%N)
dtX=$(echo "$Xres2 - $Xres1" | bc)
ddX=$(echo "$dtX/86400" | bc)
dtX2=$(echo "$dtX-86400*$ddX" | bc)
dhX=$(echo "$dtX2/3600" | bc)
dtX3=$(echo "$dtX2-3600*$dhX" | bc)
dmX=$(echo "$dtX3/60" | bc)
dsX=$(echo "$dtX3-60*$dmX" | bc)
echo "***Total Mutant Meta Program generation for AFL time in seconds" $dtX >>  Time-$BENCHMARK.txt
printf "Total Mutant Meta Program generation  for AFL time in seconds: %d:%02d:%02d:%02.4f\n" $ddX $dhX $dmX $dsX >>  Time-$BENCHMARK.txt
echo "****************Mutant Meta Program generation time for AFL Report - End**************************" >>  Time-$BENCHMARK.txt
############################################### gMutant - AFL - MCDC ###########################################################

Ares1=$(date +%s.%N)
let dtA=0

gcc -fprofile-arcs -ftest-coverage -g Meta.c

for q in `ls -v cleaned-TCs/*`;
do
./a.out < $q >> temp1.txt
done
grep "KILLED" temp1.txt > temp2.txt
cat temp2.txt | tr -d "[:blank:]" > temp3.txt
sort -u temp3.txt > final_result-gMCDC-AFL.txt
rm a.out
rm temp*.txt

k=$(grep "KILLED" final_result-gMCDC-AFL.txt | wc -l)
t=$(grep "KILLED" Meta.c | wc -l)
((a = ${t} - ${k} ))
((mscore = (${k} * 100) / ${t}))
echo "============Mutation Score Report============"
echo "============Mutation Score Report============" >> $BENCHMARK-gMCDC-AFL-score-report
echo "Total number of Alive Mutants =: ${a}"
echo "Total number of Alive Mutants =: ${a}" >> $BENCHMARK-gMCDC-AFL-score-report
echo "Total number of Killed Mutants =: ${k}"
echo "Total number of Killed Mutants =: ${k}" >> $BENCHMARK-gMCDC-AFL-score-report 
echo "Total number of Mutants =: ${t}"
echo "Total number of Mutants =: ${t}" >> $BENCHMARK-gMCDC-AFL-score-report 
echo "Mutation Score =: ${mscore}%"
echo "Mutation Score =: ${mscore}%" >> $BENCHMARK-gMCDC-AFL-score-report 
echo "============Report-Finish===================="
echo "============Report-Finish====================" >> $BENCHMARK-gMCDC-AFL-score-report
rm Meta.c

Ares2=$(date +%s.%N)
dtA=$(echo "$Ares2 - $Ares1" | bc)
ddA=$(echo "$dtA/86400" | bc)
dtA2=$(echo "$dtA-86400*$ddA" | bc)
dhA=$(echo "$dtA2/3600" | bc)
dtA3=$(echo "$dtA2-3600*$dhA" | bc)
dmA=$(echo "$dtA3/60" | bc)
dsA=$(echo "$dtA3-60*$dmA" | bc)
echo "***Total AFL gMutant runtime in seconds" $dtA >> Time-$BENCHMARK.txt
printf "Total AFL gMutant runtime in seconds: %d:%02d:%02d:%02.4f\n" $ddA $dhA $dmA $dsA >> Time-$BENCHMARK.txt
echo "****************AFL gMutant time Report - End**************************" >>  Time-$BENCHMARK.txt
############################################### CBMC Mutant Meta Program generation ###########################################################
Xres1=$(date +%s.%N)
dtX=0
cp Programs/GCOV/$BENCHMARK.c gMutationAnalysis/
cd gMutationAnalysis
./MA_SC_MCC_V2.sh $BENCHMARK 2
mkdir ../CBMC_Multiple_Mutants
mv Multiple_Mutants/*.c ../CBMC_Multiple_Mutants
rmdir Multiple_Mutants
cd ..


Xres2=$(date +%s.%N)
dtX=$(echo "$Xres2 - $Xres1" | bc)
ddX=$(echo "$dtX/86400" | bc)
dtX2=$(echo "$dtX-86400*$ddX" | bc)
dhX=$(echo "$dtX2/3600" | bc)
dtX3=$(echo "$dtX2-3600*$dhX" | bc)
dmX=$(echo "$dtX3/60" | bc)
dsX=$(echo "$dtX3-60*$dmX" | bc)
echo "***Total Mutant Meta Program generation for CBMC time in seconds" $dtX >>  Time-$BENCHMARK.txt
printf "Total Mutant Meta Program generation for CBMC time in seconds: %d:%02d:%02d:%02.4f\n" $ddX $dhX $dmX $dsX >>  Time-$BENCHMARK.txt
echo "****************Mutant Meta Program generation time for CBMC Report - End**************************" >>  Time-$BENCHMARK.txt
############################################### gMutant - CBMC - MCDC###########################################################
Ares1=$(date +%s.%N)
dtA=0

gcc -fprofile-arcs -ftest-coverage -g Meta.c

for q in `ls -v $BENCHMARK-TC/*`;
do
./a.out < $q >> temp1.txt
done
grep "KILLED" temp1.txt > temp2.txt
cat temp2.txt | tr -d "[:blank:]" > temp3.txt
sort -u temp3.txt > final_result-gMCDC-CBMC.txt
rm temp*.txt
rm a.out

k=$(grep "KILLED" final_result-gMCDC-CBMC.txt | wc -l)
t=$(grep "KILLED" Meta.c | wc -l)
((a = ${t} - ${k} ))
((mscore = (${k} * 100) / ${t}))
echo "============Mutation Score Report============"
echo "============Mutation Score Report============" >> $BENCHMARK-gMCDC-CBMC-score-report
echo "Total number of Alive Mutants =: ${a}"
echo "Total number of Alive Mutants =: ${a}" >> $BENCHMARK-gMCDC-CBMC-score-report
echo "Total number of Killed Mutants =: ${k}"
echo "Total number of Killed Mutants =: ${k}" >> $BENCHMARK-gMCDC-CBMC-score-report 
echo "Total number of Mutants =: ${t}"
echo "Total number of Mutants =: ${t}" >> $BENCHMARK-gMCDC-CBMC-score-report 
echo "Mutation Score =: ${mscore}%"
echo "Mutation Score =: ${mscore}%" >> $BENCHMARK-gMCDC-CBMC-score-report 
echo "============Report-Finish===================="
echo "============Report-Finish====================" >> $BENCHMARK-gMCDC-CBMC-score-report
rm Meta.c


Ares2=$(date +%s.%N)
dtA=$(echo "$Ares2 - $Ares1" | bc)
ddA=$(echo "$dtA/86400" | bc)
dtA2=$(echo "$dtA-86400*$ddA" | bc)
dhA=$(echo "$dtA2/3600" | bc)
dtA3=$(echo "$dtA2-3600*$dhA" | bc)
dmA=$(echo "$dtA3/60" | bc)
dsA=$(echo "$dtA3-60*$dmA" | bc)
echo "***Total CBMC gMutant  runtime in seconds" $dtA >> Time-$BENCHMARK.txt
printf "Total CBMC gMutant  runtime: %d:%02d:%02d:%02.4f\n" $ddA $dhA $dmA $dsA >> Time-$BENCHMARK.txt
echo "****************CBMC gMutant  time Report - End**************************" >>  Time-$BENCHMARK.txt

#################################################### Directory cleaning #########################################################

#mkdir $BENCHMARK-gRESULTS/PredicatesResults
#mkdir $BENCHMARK-gRESULTS/CBMC
mkdir $BENCHMARK-gRESULTS/SCORE
mkdir $BENCHMARK-gRESULTS/KILLED

mv gMutationAnalysis/$BENCHMARK-Mutants* $BENCHMARK-gRESULTS

#mv CBMC/$BENCHMARK-result-MCDC-original.txt $BENCHMARK-gRESULTS/CBMC
#mv CBMC/$BENCHMARK-result-MCDC.txt $BENCHMARK-gRESULTS/CBMC
#mv CBMC/$BENCHMARK.c $BENCHMARK-gRESULTS/CBMC
#mv results-afl-$BENCHMARK $BENCHMARK-gRESULTS
mv $BENCHMARK-gMCDC-AFL-score-report $BENCHMARK-gRESULTS/SCORE
mv $BENCHMARK-gMCDC-CBMC-score-report $BENCHMARK-gRESULTS/SCORE
mv final_result* $BENCHMARK-gRESULTS/KILLED

rm temp*.txt
rm Meta*

###########################################################################################################################################
##########################################################################################################################################################
#################################################  gMUTANT Code Ends                     #################################################################
##########################################################################################################################################################

##########################################################################################################################################################
#################################################  tradMUTANT Code Starts                #################################################################
##########################################################################################################################################################
mkdir $BENCHMARK-tRESULTS
cp Programs/GCOV/$BENCHMARK.c tMutationAnalysis/
############################################### AFL Mutants generation ###########################################################
#Xres1=$(date +%s.%N)
#dtX=0
#cd tMutationAnalysis
#python mutator.py $BENCHMARK.c $BENCHMARK-Mutants
#cd ..

#Xres2=$(date +%s.%N)
#dtX=$(echo "$Xres2 - $Xres1" | bc)
#ddX=$(echo "$dtX/86400" | bc)
#dtX2=$(echo "$dtX-86400*$ddX" | bc)
#dhX=$(echo "$dtX2/3600" | bc)
#dtX3=$(echo "$dtX2-3600*$dhX" | bc)
#dmX=$(echo "$dtX3/60" | bc)
#dsX=$(echo "$dtX3-60*$dmX" | bc)
#echo "***Total Mutants generation for AFL time in seconds" $dtX >>  Time-$BENCHMARK.txt
#printf "Total Mutants generation for AFL time in seconds: %d:%02d:%02d:%02.4f\n" $ddX $dhX $dmX $dsX >>  Time-$BENCHMARK.txt
#echo "****************Mutants generation time for AFL Report - End**************************" >>  Time-$BENCHMARK.txt
############################################### tradMutant - AFL - MCDC ###########################################################

Ares1=$(date +%s.%N)
let dtA=0

cd tMutationAnalysis
./MA_SC_MCC_V2.sh $BENCHMARK 1
cd ..

Ares2=$(date +%s.%N)
dtA=$(echo "$Ares2 - $Ares1" | bc)
ddA=$(echo "$dtA/86400" | bc)
dtA2=$(echo "$dtA-86400*$ddA" | bc)
dhA=$(echo "$dtA2/3600" | bc)
dtA3=$(echo "$dtA2-3600*$dhA" | bc)
dmA=$(echo "$dtA3/60" | bc)
dsA=$(echo "$dtA3-60*$dmA" | bc)
echo "***Total AFL tradMutant runtime in seconds" $dtA >> Time-$BENCHMARK.txt
printf "Total AFL tradMutant runtime: %d:%02d:%02d:%02.4f\n" $ddA $dhA $dmA $dsA >> Time-$BENCHMARK.txt
echo "****************AFL tradMutant time Report - End**************************" >>  Time-$BENCHMARK.txt
################################################ CBMC Mutants generation ###########################################################
#Xres1=$(date +%s.%N)
#dtX=0
cp Programs/GCOV/$BENCHMARK.c tMutationAnalysis/
#cd tMutationAnalysis
#python mutator.py $BENCHMARK.c $BENCHMARK-Mutants
#cd ..

#Xres2=$(date +%s.%N)
#dtX=$(echo "$Xres2 - $Xres1" | bc)
#ddX=$(echo "$dtX/86400" | bc)
#dtX2=$(echo "$dtX-86400*$ddX" | bc)
#dhX=$(echo "$dtX2/3600" | bc)
#dtX3=$(echo "$dtX2-3600*$dhX" | bc)
#dmX=$(echo "$dtX3/60" | bc)
#dsX=$(echo "$dtX3-60*$dmX" | bc)
#echo "***Total Mutants generation for CBMC time in seconds" $dtX >>  Time-$BENCHMARK.txt
#printf "Total Mutants generation for CBMC time in seconds: %d:%02d:%02d:%02.4f\n" $ddX $dhX $dmX $dsX >>  Time-$BENCHMARK.txt
#echo "****************Mutants generation time for CBMC Report - End**************************" >>  Time-$BENCHMARK.txt
############################################### tradMutant - CBMC - MCDC###########################################################
Ares1=$(date +%s.%N)
dtA=0

cd tMutationAnalysis
./MA_SC_MCC_V2.sh $BENCHMARK 2
cd ..


Ares2=$(date +%s.%N)
dtA=$(echo "$Ares2 - $Ares1" | bc)
ddA=$(echo "$dtA/86400" | bc)
dtA2=$(echo "$dtA-86400*$ddA" | bc)
dhA=$(echo "$dtA2/3600" | bc)
dtA3=$(echo "$dtA2-3600*$dhA" | bc)
dmA=$(echo "$dtA3/60" | bc)
dsA=$(echo "$dtA3-60*$dmA" | bc)
echo "***Total CBMC tradMutant  runtime in seconds" $dtA >> Time-$BENCHMARK.txt
printf "Total CBMC tradMutant  runtime: %d:%02d:%02d:%02.4f\n" $ddA $dhA $dmA $dsA >> Time-$BENCHMARK.txt
echo "****************CBMC tradMutant time Report - End**************************" >>  Time-$BENCHMARK.txt

#################################################### Directory cleaning #########################################################

mkdir $BENCHMARK-tRESULTS/SCORE

mv AFL_Multiple_Mutants tMutationAnalysis/$BENCHMARK-Mode1-Mutation
mv CBMC_Multiple_Mutants tMutationAnalysis/$BENCHMARK-Mode2-Mutation

mv tMutationAnalysis/$BENCHMARK-Mode1-Mutation $BENCHMARK-tRESULTS
mv tMutationAnalysis/$BENCHMARK-Mode2-Mutation $BENCHMARK-tRESULTS
mv $BENCHMARK-tRESULTS/$BENCHMARK-Mode1-Mutation/$BENCHMARK-report-1.txt $BENCHMARK-tRESULTS/SCORE
mv $BENCHMARK-tRESULTS/$BENCHMARK-Mode2-Mutation/$BENCHMARK-report-2.txt $BENCHMARK-tRESULTS/SCORE

###########################################################################################################################################


##########################################################################################################################################################
#################################################  tradMUTANT Code Ends                  #################################################################
##########################################################################################################################################################

mkdir $BENCHMARK-RESULTS
mv $BENCHMARK-gRESULTS $BENCHMARK-RESULTS
mv $BENCHMARK-tRESULTS $BENCHMARK-RESULTS
mv Time-$BENCHMARK.txt $BENCHMARK-RESULTS
mv cleaned-TCs $BENCHMARK-RESULTS
mv $BENCHMARK-TC $BENCHMARK-RESULTS
mv $BENCHMARK-RESULTS/cleaned-TCs $BENCHMARK-RESULTS/AFL-TCs
mv $BENCHMARK-RESULTS/*TC $BENCHMARK-RESULTS/CBMC-TCs

mkdir $BENCHMARK-RESULTS/CBMC
mv CBMC/$BENCHMARK-result-MCDC-original.txt $BENCHMARK-RESULTS/CBMC
mv CBMC/$BENCHMARK-result-MCDC.txt $BENCHMARK-RESULTS/CBMC
mv CBMC/$BENCHMARK.c $BENCHMARK-RESULTS/CBMC
mv results-afl-$BENCHMARK $BENCHMARK-RESULTS


###########################################################################################################################################
