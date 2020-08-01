CS4730 - HW 1: Game Loop
===============================

<a name="background"></a>Background
---------------------------------------
- https://trinket.io/python/e5a03e7cbc
- http://patorjk.com/


<a name="required"></a>Required Features (50 points)
---------------------------------------
1) Executable (10 points)
- Can be started by running a single .py script
2) Halting for player input. (10 points)
- Stop and allow for player input at every junction in the game.
3) Branching paths (10 points)
- Must have 5 meaningful decision points throughout your game.
4) Compelling story (10 points)
- Story must be well thought out and take an average player at least a minute to complete.
5) Clean code (10 points)
- Robust logic, modularization of functionality, easy to read.



<a name="optional"></a>Optional Features (100 points)
---------------------------------------
1) Encounter/combat system (20 points)
- Have at least 2 random or scripted battles.
- Keep track of player and enemy health and damage.
2) Persistent stats (20 points)
- Requires completion of the encounter/combat system.
- Have stats/resources remembered, even between battles.
- May or may not have a leveling system. Your choice.
3) Quick time events (10 points)
- Have certain events require a certain amount of time to complete.
- If the player doesn't react fast enough, they are penalized.
4) Procedural events (20 points)
- Have some aspect of your game procedurally generated at the start of a new game.
- Could be room configurations, encounters, item locations, win condition, etc.
5) Saving and loading (20 points)
- Requires completion of persistent stats.
- `python game.py` should create a new game.
- `python game.py <file_name>` should load an existing game saved at that file.
- Typing `save <file_name>` at any point of your game should save your stats and any progress you have made to that file.
6) Graphics (10 points)
- Have at least 5 ASCII graphics (one must be the title screen).
