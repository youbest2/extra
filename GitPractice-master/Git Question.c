Git Private Key : C:\Users\uids4736\.ssh

git status
git branch feature/safe-16603889-swversioncheck-fixed-swct                             // safe-16603889  , To creat a new branch (All small letters)
git checkout feature/safe-16603889-pcu-increase-swct
git status
git add ../Test/test.c ../Test/composite.xml
git commit 
git commit -m "task-17631993: SWCT of SwVersionCheck - WPT"                              // Commit with massage
git push



/merge  // After creating a pull request and approved by reviewer - /merge in comment
/test pr-merge // After creating a pull request and approved by reviewer - /test pr-merge in comment

git push --set-upstream origin feature/safe-16603889-swversioncheck-fixed-swct


# Git Text Editor
/*
Git Text Editor
" i - insert , write mode
Press ESC for command mode
  : - type command
  wq - write quit "
  
x - to 	 the unwanted character
u - to undo the last the command and U to undo the whole line
CTRL-R to redo
A - to append text at the end
:wq - to save and exit
:q! - to trash all changes
dw - move the cursor to the beginning of the word to delete that word
2w - to move the cursor two words forward.
3e - to move the cursor to the end of the third word forward.
0 (zero) to move to the start of the line.
d2w - which deletes 2 words .. number can be changed for deleting the number of consecutive words like d3w
dd to delete the line and 2dd to delete to line .number can be changed for deleting the number of consecutive words


:cq  quit and return error (helpful when using Vim with Git)
**/


git log --all --decorate --oneline --graph
https://git-scm.com/book/en/v2/Git-Basics-Undoing-Things



/* "$_variable" */
"$_variable"

## add                  
	:   git add $_file_path           
## commit               
	:  git commit
## commit msg           
	: git commit -m " $_Commit message"          // formate should be followed            
## push
	: git push                                  // if not able to push use --set-upstream as shown in git terminal
## commit message even after push
	//  for most recent commit
	: git commit --amend
	// And then when you push, do this:
	: git push --force-with-lease <repository> <branch>
	// this will over write everything
	: git push --force <repository> <branch>

git push --force-with-lease <repository> <branch>
## Creating a branch locally
## a new branched after push (new branch pushed)
## a merge


/** @ Undo	**/
## add                  
	:   git reset $_file_name             // will also changes made inside the file
## commit               
	:  git commit
## commit msg           
	: git commit -m " $_Commit mesasge"             
## push
	: git push
## commit message even after push
	//  for most recent commit
	: git commit --amend
	// And then when you push, do this:
	: git push --force-with-lease <repository> <branch>
	// this will over write everything
	: git push --force <repository> <branch>

git push --force-with-lease <repository> <branch>
## Creating a branch locally
## a new branched after push (new branch pushed)
## a merge

## Discard all local changes, but save them for possible re-use later
 git stash

## Discarding local changes (permanently) to a file
 git checkout -- <file>
 git checkout -- Src/EBS/MSW/CpxAct/CpxAct_generic/Test/composites.xml

## Discard all local changes to all files permanently
 git reset --hard






/** @ Delete  **/

## a remote branch from git bash
git branch -d branch_name
The -d option stands for --delete, which would delete the local branch, only if you have already pushed and merged it with your remote branches.
git branch -D branch_name
The -D option stands for --delete --force, which deletes the branch regardless of its push and merge status, so be careful using this one!
## a remote file from git bash
## a commit message
## delete a local file from local repository
## 
## Delete a remote GIT branch
git push <remote_name> --delete <branch_name>


# Get
## List of local files
## List of remote files
## List of remote branches
## list Commit IDs


/**
Get changes from master into branch in Git        */ (Strictly avoide it)
: git checkout $_branch_name (Strictly avoide it)
: git merge $_master (Strictly avoide it)
// Your branch will be up-to-date with master.

/** 
checkout a remote branch        */
//To fetch a branch, you simply need to:
git fetch origin
//This will fetch all of the remote branches for you. With the remote branches 
//in hand, you now need to check out the branch you are interested in, giving 
//you a local working copy:
git checkout -b test origin/test
//Or
git branch test origin/test

/** 
To get local copy of remote branch  */
git fetch
git checkout $_branch_name_feature/safe-16603889-iohwabscore-swct
git checkout -force-with-lease $_branch_name_feature/safe-16603889-iohwabscore-swct
git checkout -force-with-lease feature/safe-16603889-pcu-increase-swct

/**	
To check if pull is required for develop/master branch*/
First use git remote update, to bring your remote refs up to date. Then you can do one of several things, such as:
git status -uno will tell you whether the branch you are tracking is ahead, behind or has diverged.
If it says nothing, the local and remote are the same.
git show-branch *master will show you the commits in all of the branches whose names end in 'master' (eg master and origin/master).

git remote update   
git status -uno   
git show-branch *master   

/*******************************************************************************/
// Git Stash
git stash pop (removes the locally saved data from saving area applying it)
git stash apply (keeps the locally saved data in saving area even after aplying it)

/*******************************************************************************/
/*******************************************************************************/
/*******************************************************************************/

// git ahead/behind info between master and branch?
git rev-list --left-right --count master...test-branch
git rev-list --left-right --count origin/master...@
git rev-list --left-right --count develop...feature/safe-16603889-iohwabscore-swct
git rev-list --left-right --count remote develop...feature/safe-16603889-iohwabscore-swct
/*******************************************************************************/
/*******************************************************************************/

/***************************************************************************************************/
/***************************************************************************************************/
// Changed GitHub password, no longer able to push back to the remote
git remote show origin
This will ask for your password for the given git user, fill that in correctly, and now try:-
git pull  or,
git push
/***************************************************************************************************/
/***************************************************************************************************/