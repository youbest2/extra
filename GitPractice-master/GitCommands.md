To copy from BAASH terminal in windows just select and write click.  
''' Comments  
variable_V :  To be replace by meaningful content  
- For line brake, use two or more space and then **Enter**


### To initialize a directory
```git init```

### To clone a repository
```git clone url_V```

### To add a new file to the repository - copy the new file in the repository and run command to index it
```git add filepath_V```

### To commit means prepare the file locally to push to the repository
```git commit -m "My head line_COMMENTS_V" -m "My content line_COMMENTS_V."```

### Can be set before start of activities after ```"git init"```
### May required to set username and email address  
```git config --global user.name "Your Name_V"```  
```git config --global user.email you@example.com_V```  
After doing this, you may fix the identity used for this commit with:  
```git commit --amend --reset-author```


### To push the changes to the repository
```git push --set-upstream origin master```     ''' Example below  
```git push --set-upstream http://github.conti.de/uids4736/GitPractice.git_V master```

### To push the changes to the repository   
```git push --set-upstream origin master```      ''' Example below   
```git push --set-upstream http://github.conti.de/uids4736/GitPractice.git_V master```

### To list all branches   
```git branch -r```   
```git ls-remote --heads <remote-name>```
