# helloWorld
<-----demo code to test git functionality----->

#How to compile c source code on the commandline
#Step1: Install the build-essential packages:
sudo apt-get install build-essential

#Step2: Write (or clone) a simple c program and end with .c extension:
nano hello.c

#Step3: Compile the C program with gcc Compiler:
gcc hello.c -o hello

#Step4: Run the program:
./hello

####-----END_GCC_Tutorial-----#####


#Initialize git:
git init

#check status of git:
git status

#clone a git repository:
git clone https://github.com/csuntechlab/helloWorld.git

#check for updates to repository:
git fetch

#check for updates and apply changes to local repository from remote repository:
git pull

#add modified files to staging:
git add <filename>

#commit files to staging using -m flag:
git commit -m "first commit"

#Create connection to github repository:
git remote add origin https://github.com/csuntechlab/helloWorld.git

#Push your changes to remote github repository:
git push origin master

<-----How to create branches and merging----->

#Create a branch:
git branch first_branch

#Switch to new branch with git checkout:
git checkout first_branch

#add modified files to staging:
git add <filename>

#commit files to staging using -m flag:
git commit -m "made changes to first branch"

#Switch back to master branch to begin merging process:
git checkout master

#Merge first_branch to master:
git merge first_branch





