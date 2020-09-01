CS4730 - HW 1: Game Loop
===============================

<a name="background"></a>Github Assignment Link
---------------------------------------

Every assignment has a **Github Classroom Link** you must follow to get the starter code (if applicable) and to create your repository for the assignment. If you haven't yet done so, follow the instructions at the [Github Classroom Tutorial](./githubclassroom.html).

**Assignment Invite Link**: [Homework 1 Invite](https://classroom.github.com/a/jI8iTx_6)

Once your repository is configured, push your code to it in order to submit your work.

<a name="background"></a>Background
---------------------------------------

The purpose of this assignment is to warm-up both your game development and game design skills in a low-stress environment. You will be developing a short text-based adventure in [Python](https://docs.python.org/3/).

To get started, take a look at the very simple example [here](https://trinket.io/python/e5a03e7cbc). Your game will ultimately be more complicated than this one, but it gives you an example of where to start. If you'd like to test out a more complicated text-based game, you can try playing [Zork](http://textadventures.co.uk/games/play/5zyoqrsugeopel3ffhz_vq), or search for other text-based games online.

Your game is required to be a short, fully playable game that has some interesting game mechanics and some kind of narrative. See below for the formal requirements.

<a name="required"></a>Required Features (5 features; 5/5 required to pass)
---------------------------------------

Your adventure will pass if you have each of the following five features implemented in working. 

1. **Working executable**
	- The game can be started by running a single .py file.
	- The game does not crash or freeze (or become unbeatable) during play.

2. **Halting for player input**
	- Your game halts and awaits players to type input. This input alters the path of the game.
	- The game makes clear to players what actions can be typed and how to construct commands correctly.

3. **Branching paths**
	- Your game must have at least **five** meaningful decision points that alter the outcome of the game.
	- There must be at least **two** different endings to your game.

4. **Compelling story**	
	- The story must be well thought out and take an average player at least a minute to complete.
	- Must show some degree of creativity and thought. 

5. **Clean code**
	- Robust logic that cannot be manipulated by the player.
	- Modularization of functionality into small easily digestible functions / method.
	- Easy to read and documented.



<a name="optional"></a>Optional Features ( points)
---------------------------------------

If you'd like to use this assignment to make progress on the optional points portion of your grade, you may implement the following features:

1. **Encounter/combat system (2 points)**
	- Add at least 2 battles.
	- Keep track of player and enemy health and damage.
	- Player and enemy must have at least 2 actions that can be taken to strategize combat.

2. **Persistent stats (2 points)**
	- Requires completion of the encounter/combat system.
	- Have stats/resources remembered, even between battles.
	- Include some kind of leveling system that strengthens the character.
	- Add at least 2 more battles.

3. **Quick time events (1 points)**
	- Have certain events require a certain amount of time to complete.
	- If the player doesn't react fast enough, they are penalized but the game remains winnable.

4. **Procedural events (2 points)**
	- Have some aspect of your game procedurally generated at the start of a new game.
	- Could be room configurations, encounters, item locations, win condition, etc.

5. **Saving and loading (2 points)**
	- Requires completion of persistent stats.
	- `python game.py` should create a new game.
	- `python game.py <file_name>` should load an existing game saved at that file.
	- Typing `save <file_name>` at any point of your game should save your stats and any progress you have made to that file.

6. **Graphics (1 points)**
	- Have at least 5 ASCII graphics (one must be the title screen).
