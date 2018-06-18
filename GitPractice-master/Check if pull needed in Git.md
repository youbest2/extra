First use ```git remote update```, to bring your remote refs up to date. Then you can do one of several things, such as:   
```git status -uno``` will tell you whether the branch you are tracking is ahead, behind or has diverged.   
If it says nothing, the local and remote are the same.   
```git show-branch *master``` will show you the commits in all of the branches whose names end in 'master' (eg master and origin/master).   
```
git remote update   
git status -uno   
git show-branch *master   
```


### [Check if pull needed in Git](https://stackoverflow.com/questions/3258243/check-if-pull-needed-in-git)
