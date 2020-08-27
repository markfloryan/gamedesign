CS4730 - Game Design: Github Classroom Instructions
===============================

<a name="introduction"></a>Overview
---------------------------------------

In this course, we will be submitting ALL of our homeworks on [Github classroom](https://classroom.github.com). Github classroom will allow you to easily acquire starter code, art assets, and other things we want you to have for each assignment, and will make saving your work and submitting your work trivial. Github classroom will also make our group projects easier to manage. If you have never used Github before, don't worry. This page goes over the absolute bare essentials. The overall process is:

- You will create a normal account on [Github](https://github.com) if you do not already have one.
- You will link your Github account to your student roster name on our [Github Classroom](https://classroom.github.com).
- You will checkout the starter code for an assignment.
- You will commit and push your work to your repository to submit it.
 

<a name="introduction"></a>Step 1: Make a Github Account (if you don't have one)
--------------------------------------- 

If you do not yet have a Github account, you can easily make one at [Github.com](https://github.com). It might be easiest to use your UVa email address and use the account for school work, but you can use any email address you'd like.


<a name="introduction"></a>Step 2: Go to our Github Classroom and link account
--------------------------------------- 

Go to our Github classroom link. For Fall 2020 that is [this classroom here](https://classroom.github.com/classrooms/68703978-cs-4730-game-design-fall-2020). Once there, you should see a list of names of students in the course. Find your name and select it. Follow any additional instructions to link your personal Github account to the our course.


<a name="introduction"></a>Step 3: Checkout an Assignment!
---------------------------------------

For each assignment, there will be a **Github assignment invite link**. For example, if you checkout [Homework 1](./gameloop.html), you'll see a link at the top of the assignment. By clicking on that link, you should be able to get the starter code for that assignment and setup a repository.


<a name="introduction"></a>Step 4: Commit and Push your Work for Grading!
---------------------------------------

Once you have a repository, you can use git commands (on your console or similar) to go through the typical git repository cycle. To clone your repo onto your machine, you'll do something like this:

```
git clone <path to repository>
```

Or, for a specific example:

```
git clone https://github.com/markfloryan/gamedesign/
```

will clone the course repository.

Once you have the repository on your machine you can do some work, add files, code, test, etc. Every once in a while you should commit and push changes. To commit, do:

```
git add .		#Adds new files that you've added to your project. Don't need this every time.
git commit .	#Commit changes locally, will need to enter a message to report changes.
```

Once you've done enough work, you should periodically push those changes to the server. The most simple way:

```
git push
```

Every time you push changes to your repository, the graders and TAs will be able to see all of the commits and messages and changes. You can push as many times as you want before the assignment deadline. You can even push after the deadline too. The grader can see the state of the repository at the moment the deadline passed, so feel free to keep working.

These are just the basics of Github. The internet contains many more detailed resources for this.