# helloWorld
<-----demo code to test git functionality----->

#Initialize git:
git init

#check status of git:
git status

#add modified files to staging:
git add <filename>

#commit files to staging using -m flag
git commit -m "first commit"

#Create connection to github repository
git remote add origin https://github.com/csuntechlab/helloWorld.git

#Push your changes to remote github repository
git push origin master

<-----How to create branches and merging----->

#Create a branch
git branch first_branch

#Switch to new branch with git checkout
git checkout first_branch

#add modified files to staging
git add <filename>

#commit files to staging using -m flag
git commit -m "made changes to first branch"

#Switch back to master branch to begin merging process
git checkout master

#Merge first_branch to master
git merge first_branch





