/* git discard local changes and pull from branch */
##git discard local changes and pull from branch
1.
Ignore local changes and overwrite them with remote:
git fetch --all
git reset --hard origin/master

2.
git fetch --all
git reset --hard origin/master
Note than you will lose ALL your local changes
git reset --hard feature/safe-16603889-pcu-increase-swct

/* Rename a local and remote branch in git ********/
##Rename a local and remote branch in git
If you have named a branch incorrectly AND pushed this to the remote repository follow these steps before any other developers 
get a chance to jump on you and give you shit for not correctly following naming conventions.

1. Rename your local branch.
If you are on the branch you want to rename:
git branch -m new-name

If you are on a different branch:
git branch -m old-name new-name

2. Delete the old-name remote branch and push the new-name local branch.
git push origin :old-name new-name

3. Reset the upstream branch for the new-name local branch.
Switch to the branch and then:
git push origin -u new-name


/* Changing a git commit message after pushed it to the server */
##Changing a git commit message after pushed it to the server
First, change the local commit message:

git commit --amend -m "New commit message"
Then, force pushing again:

git push -f
Again, this operation is dangerous. Do it only if you know what you are doing.

/**Switched to a new branch*/
##Switch to a new branch
git checkout -b feature/safe-taskid-pullreqcheck-data
Switched to a new branch 'feature/safe-taskid-pullreqcheck-data'

{ GIT SITUATION
Worked#
Clone remote into local repository -
modyfy a file(x.txt) in remote repository, online-
mody the same file(X.txt) locally - 
	-- git add X.txt
	-- git commit -m "some comments"
	-- git push
		$ git push
			To github.conti.de:uids4736/GitPractice.git
			 ! [rejected]        master -> master (fetch first)
			error: failed to push some refs to 'git@github.conti.de:uids4736/GitPractic
			'
			hint: Updates were rejected because the remote contains work that you do
			hint: not have locally. This is usually caused by another repository pushin
			hint: to the same ref. You may want to first integrate the remote changes
			hint: (e.g., 'git pull ...') before pushing again.
			hint: See the 'Note about fast-forwards' in 'git push --help' for details
	-- git pull : will take all the remote changes into local repo
	-- git push

Failed#
Clone remote into local repository -
modyfy a file(x.txt) in remote repository, online- same
mody the same file(X.txt) locally - 
**same line modified in both remote copy and local copy**
	-- git add X.txt
	-- git commit -m ""
	-- git push
			uids4736@OZD1280G MINGW64 /d/Git/GitPractice (master)
			$ git push
			To github.conti.de:uids4736/GitPractice.git
			 ! [rejected]        master -> master (fetch first)
			error: failed to push some refs to 'git@github.conti.de:uids4736/GitPractic
			'
			hint: Updates were rejected because the remote contains work that you do
			hint: not have locally. This is usually caused by another repository pushin
			hint: to the same ref. You may want to first integrate the remote changes
			hint: (e.g., 'git pull ...') before pushing again.
			hint: See the 'Note about fast-forwards' in 'git push --help' for details.
	-- git pull
			uids4736@OZD1280G MINGW64 /d/Git/GitPractice (master)
			$ git pull
			remote: Counting objects: 3, done.
			remote: Compressing objects: 100% (3/3), done.
			remote: Total 3 (delta 0), reused 0 (delta 0), pack-reused 0
			Unpacking objects: 100% (3/3), done.
			From github.conti.de:uids4736/GitPractice
			   5ecc6b6..713fdf7  master     -> origin/master
			Auto-merging Git_situation.md
			CONFLICT (content): Merge conflict in Git_situation.md
			Automatic merge failed; fix conflicts and then commit the result.
			##(This issue might occur if you have changes in same files or same line of the file.)
	-- git push
			uids4736@OZD1280G MINGW64 /d/Git/GitPractice (master|MERGING)
			$ git push
			To github.conti.de:uids4736/GitPractice.git
			 ! [rejected]        master -> master (non-fast-forward)
			error: failed to push some refs to 'git@github.conti.de:uids4736/GitPracti
			'
			hint: Updates were rejected because the tip of your current branch is behind
			hint: its remote counterpart. Integrate the remote changes (e.g.
			hint: 'git pull ...') before pushing again.
			hint: See the 'Note about fast-forwards' in 'git push --help' for details.
	--git reset --hard HEAD~1
	--git push
That will roll back 1 commit. All local changes will be lost.


## Resolve conflicts
	-- Open the file in notepad++ editor
	-- recolve carefully
			uids4736@OZD1280G MINGW64 /d/Git/GitPractice (master|MERGING)
	--		$ git status
			On branch master
			Your branch and 'origin/master' have diverged,
			and have 1 and 2 different commits each, respectively.
			  (use "git pull" to merge the remote branch into yours)
			You have unmerged paths.
			  (fix conflicts and run "git commit")
			  (use "git merge --abort" to abort the merge)

			Unmerged paths:
			  (use "git add <file>..." to mark resolution)

					both modified:   Git_situation.md

			no changes added to commit (use "git add" and/or "git commit -a")

			uids4736@OZD1280G MINGW64 /d/Git/GitPractice (master|MERGING)
	--		$ git add Git_situation.md

			uids4736@OZD1280G MINGW64 /d/Git/GitPractice (master|MERGING)
	--		$ git commit -m "conflicts resolved"
			[master 1ec6a7e] conflicts resolved

			uids4736@OZD1280G MINGW64 /d/Git/GitPractice (master)
	--		$ git push
			Counting objects: 6, done.
			Delta compression using up to 8 threads.
			Compressing objects: 100% (6/6), done.
			Writing objects: 100% (6/6), 648 bytes | 0 bytes/s, done.
			Total 6 (delta 4), reused 0 (delta 0)
			remote: Resolving deltas: 100% (4/4), completed with 3 local objects.
			To github.conti.de:uids4736/GitPractice.git
			   bf61998..1ec6a7e  master -> master
	
			
##GIT PULL IS NOT POSSIBLE BECAUSE YOU HAVE UNMERGED FILES
git add filename
git stash
git pull
git stash pop		
	
}
## The following untracked working tree files would be overwritten by checkout
## The following untracked working tree files would be overwritten by checkout
Warning: This will delete the local files that are not indexed
Just force it : git checkout -f another-branch

git clean  -d  -fx(avoid trying it)
-x means ignored files are also removed as well as files unknown to git.
-d means remove untracked directories in addition to untracked files.
-f is required to force it to run.