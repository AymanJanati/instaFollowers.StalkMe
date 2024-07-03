# instaFollowers.StalkMe
Stalk your friends new followers, people who unfollowed them or new people they follow
<h2>Instructions</h2>

   +Start by copying the target's followers list and putting it inside dflt.txt. Do not touch this file after the initial setup unless you want to update the list of default followers.
   
   +When you see that there are new followers, copy the updated followers list and put it inside new.txt.
   
   +Execute the script.
   
   +New followers will be listed in result.txt and people who unfollowed will be listed in unfollowed.txt.
   

Notes

   +It's okay for the list of followers to be messy, such as having "userName" in one line and "userName's profile picture" in the next line. The code is designed to handle this format.
   
   +You can use the program for different targets by renaming dflt.txt to something else and creating a new dflt.txt file with the new list of followers.
   
   +This program is created for fun, to use on your friends to prank them or to see who unfollowed you. <h3>I'm not responsible for any unethical usage.</h3>


<h1> Steps for Linux Users</h1>

<h3>Clone the Repository:</h3>

```
git clone https://github.com/AymanWolfX/instaFollowers.StalkMe.git
cd instaFollowers.StalkMe
```

<h3>Prepare the Files:</h3>

   +Place the initial list of followers in a file named dflt.txt.
   
   +Place the updated list of followers in a file named new.txt.
   
   +You can use nano or vim for this step.

<h3>Compile the Script:</h3>

```
g++ -o stalkMe main.cpp
```


<h3>Run the Script:</h3>

```
./stalkMe
```
<h3>Check the Results:</h3>

   +New followers will be listed in result.txt.
   
   +People who have unfollowed will be listed in unfollowed.txt.
