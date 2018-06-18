#### 1. git-pull   
- Fetch from and integrate with another repository or a local branch   
-```git pull [options] [<repository> [<refspec>…​]]```   
-```git pull``` is shorthand for ```git fetch``` followed by ```git merge FETCH_HEAD```   
-```git pull``` runs ```git fetch``` with the given parameters and calls ```git merge``` to merge the retrieved   
    branch heads into the current branch. With ```--rebase```, it runs ```git rebase``` instead of ```git merge```.   
