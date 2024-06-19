echo monika
#!/bin/ksh
export BENCHMARK=$1
export MODE=$2

#-------------------------------------------------------
#for y in `ls -v Mutants/*.c`;
#for y in `find -type f -name {BENCHMARK}-Mutants/*.c`;
#-------------------------------------------------------

#Need to add command for test case generator 

gcc -fprofile-arcs -ftest-coverage -g ${BENCHMARK}.c
if [ $MODE == 2 ]
then
TC_PATH=$BENCHMARK-TC
Mutants_PATH=CBMC_Multiple_Mutants
else
TC_PATH=cleaned-TCs
Mutants_PATH=AFL_Multiple_Mutants
fi


#for q in `ls -v ../$TC_PATH/*`;
#do
#./a.out < $q
#done
#gcov -abcfu ${BENCHMARK}.c > Cov_report-${BENCHMARK}-Mode$MODE.txt
#rm a.out

##The below code is to run tests on Original Program
#./deadmutants.sh $BENCHMARK
gcc ${BENCHMARK}.c
mkdir ${BENCHMARK}-Original
pwd
let a=1
for b in `ls -v ../$TC_PATH/*`; 
do 
./a.out < ${b} > op-${a}.txt
mv op-${a}.txt ${BENCHMARK}-Original
((a =a+1));
done
rm a.out

#The below code is to run tests on all mutants
let c=1
let t=0
let k=0

#for y in `ls -v ${BENCHMARK}-ReachedMutants/*.c`;
#for y in `find -type f -name ${BENCHMARK}-ReachedMutants/*.c`;
for y in ../$Mutants_PATH/*.c;
do
gcc ${y}
if [ $? == 0 ]
then
echo "${y}: MUTANT IS COMPILABLE \n" >> Mutant-compilable-check.txt
else
echo "${y}: MUTANT IS NOT-COMPILABLE \n" >> Mutant-compilable-check.txt
fi
mkdir ${BENCHMARK}-OP-${c}
((t =t+1));
let r=1
for z in `ls -v ../$TC_PATH/*`; 
do 
./a.out < ${z} > op-${r}.txt
mv op-${r}.txt ${BENCHMARK}-OP-${c}
diff ${BENCHMARK}-Original/op-${r}.txt ${BENCHMARK}-OP-${t}/op-${r}.txt
if [ $? == 0 ]
then
echo "Mutant Alive"
else
echo "Mutant Killed"
echo $y "killed due to" $z >> killed-Mutants-report.txt
((k =k+1));
break;
fi
((r =r+1));
done
rm a.out
rm -r ${BENCHMARK}-OP-${t}
((c =c+1));
done
rm -r ${BENCHMARK}-Original
((a = ${t} - ${k} ))
((mscore = (${k} * 100) / ${t}))
echo "============Mutation Score Report============"
echo "============Mutation Score Report============" >> $BENCHMARK-report-$MODE.txt
echo "Total number of Alive Mutants =: ${a}"
echo "Total number of Alive Mutants =: ${a}" >> $BENCHMARK-report-$MODE.txt 
echo "Total number of Killed Mutants =: ${k}"
echo "Total number of Killed Mutants =: ${k}" >> $BENCHMARK-report-$MODE.txt 
echo "Total number of Mutants =: ${t}"
echo "Total number of Mutants =: ${t}" >> $BENCHMARK-report-$MODE.txt 
echo "Mutation Score =: ${mscore}%"
echo "Mutation Score =: ${mscore}%" >> $BENCHMARK-report-$MODE.txt 
echo "============Report-Finish===================="
echo "============Report-Finish====================" >> $BENCHMARK-report-$MODE.txt

mkdir $BENCHMARK-Mode$MODE-Mutation
mv Mutant-compilable-check.txt $BENCHMARK-Mode$MODE-Mutation
mv killed-Mutants-report.txt $BENCHMARK-Mode$MODE-Mutation
mv $BENCHMARK-report-$MODE.txt $BENCHMARK-Mode$MODE-Mutation
#mv Types_of_faults_log.txt $BENCHMARK-Mode$MODE-Mutation
#mv $BENCHMARK-ReachedMutants $BENCHMARK-Mode$MODE-Mutation
#mv $BENCHMARK-Mutants $BENCHMARK-Mode$MODE-Mutation
####TEMP DISABLED###
#rm -r $BENCHMARK-ReachedMutants
#rm -r $BENCHMARK-Mutants

mkdir $BENCHMARK-Mode$MODE-Mutation/src
mv $BENCHMARK.* $BENCHMARK-Mode$MODE-Mutation/src/
#mv $BENCHMARK-CoveredLines.txt $BENCHMARK-Mode$MODE-Mutation/src/
#mv $BENCHMARK-DeadMutantsList.txt $BENCHMARK-Mode$MODE-Mutation/src/
#mv $BENCHMARK-ReachedMutantsList.txt $BENCHMARK-Mode$MODE-Mutation/src/

#mv Cov_report-${BENCHMARK}-Mode$MODE.txt $BENCHMARK-Mode$MODE-Mutation




