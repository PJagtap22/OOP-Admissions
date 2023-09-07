CC = g++ 
CFLAG = 

main1.exe: main1.o Admissions.o 
    $(CC) $(CFLAG) -o main1.exe main1.o Admissions.o

main1.o: main1.cpp Admissions.h
    $(cc) $(CFLAG) -c main1.cpp

Admissions.o: Admissions.cpp Admissions.h
    $(CC) $(CFLAG) -c Admissions.cpp

Clean :
    rm -f main1.exe *o

     