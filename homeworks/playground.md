CS4730 - HW 2: Playground
===============================

<a name="background"></a>Github Assignment Link
---------------------------------------

Every assignment has a **Github Classroom Link** you must follow to get the starter code (if applicable) and to create your repository for the assignment. If you haven't yet done so, follow the instructions at the [Github Classroom Tutorial](./githubclassroom.html).

**Assignment Invite Link**: [Homework 2 Invite](https://classroom.github.com/a/wUZzWtVt)

Once your repository is configured, push your code to it in order to submit your work.

<a name="background"></a>Overview
---------------------------------------

For this assignment, we will start to learn about how to use [Unity](https://unity.com/) and see how [Unity](https://unity.com/) handles simple game development tasks like Sprites, transforms, player input, and the display hierarchy. The rest of your assignments will be done using [Unity](https://unity.com/), which is a very popular cross-platform game engine. 

To investigate these things, you will go through the following three activites:

1. You will go through some [Unity Tutorials](https://learn.unity.com/) to learn the basics of the engine.

2. You will create a very simple *playground scene* that shows how Unity handles game objects, transforms, and player input.

3. You will create a *solar system* simulator to practice your scripting, and explore how Unity handles display hiearchies.


<a name="background"></a>Preparation: Download Unity and get the starter code
---------------------------------------

As stated earlier, you will be using [Unity](https://unity.com/) for the remainder of the assignments. Unity is a popular cross-platform game engine that supports both 2D and 3D game development. We will mostly focus on 2D development in this class, but all of our lessons will translate to 3D quite easily. 

To get started, go to the [Unity Store](https://unity3d.com/get-unity/download) and download Unity Hub. Once you have that downloaded, please open it up and install the latest version of **2019.4 (LTS)**. At the time of releasing this assignment, that is **2019.4.9f1**.

Once Unity is installed, you'll need to get the starter code from the assignment on our [Github classroom](https://classroom.github.com/classrooms/68703978-cs-4730-game-design-fall-2020). You should be able to grab the starter code by visiting [this URL](https://classroom.github.com/a/jI8iTx_6). This should setup your repository. When you are ready for your assignment to be graded, simply push your code to that repository for the TA to grade.


<a name="required"></a>Required Features (3 points; 3/3 required to pass)
---------------------------------------

This assignment is made up of three individual tasks. Each one must be completed for the entire assignment to pass.

1. **Tutorials**: Unity provides many [tutorial](https://learn.unity.com/) on the complicated engine. Start by completing three short tutorials.
	- Complete ONE of the basic microgame tutorials: You can choose the [Platformer Microgame](https://learn.unity.com/project/2d-platformer-template?courseId=5c59cf22edbc2a001f59aa5d), the [FPS Microgame](https://learn.unity.com/project/fps-template?courseId=5c59cf22edbc2a001f59aa5d), or the [Karting Microgame](https://learn.unity.com/project/karting-template?courseId=5c59cf22edbc2a001f59aa5d).
	- When you are done, push images of the completed tutorials to your repository (the rest is on your honor).



2. **Playground**: This simple scene will give you time to practice with Unity's transforms, and simple user input.
	- Open the `Playground` scene located in `Assets/Scenes/Playground.unity`
	- Fill it with a variety of GameObjects. Sprites are provided to you with the project, so just pick some that you like.
	- Mess around with the objects Transform values so that some objects are rotated, large, small, etc. There should be a variety of objects that have been tranformed in various ways.
	- Have one of the object's Transforms be controllable by the player via the `PlayerMove.cs` script. The controls should be:
		- *WASD*: Up Left Down Right translation
		- *Q E*: Scale in and out
		- *Z X*: Rotate counterclockwise and clockwise


3. **Solar System**
	- Open the provided `Solar System` scene
	- Utilizing the provided assets, the transform hierarchy, and the `CelestialBody.cs` script, create a solar system model with planets orbiting the sun, and moons orbiting those planets.
		- The system should move constantly (without any player input).
		- *WASD*: Moves the entire solar system around so the player can look around.
		- *Q E*: Zooms in and out of the entire solar system


<a name="optional"></a>Optional Features
---------------------------------------

There are several optional features that can be added to this assignment for optional points.

1. **Playground Shenanigans**
	- Normalized movement (1 point)
		- Normalize the translation in `PlayerMove.cs` to never exceed a magnitude of 1.
		- In other words, moving diagonally should not move the GameObject faster.
	- Canceling Inputs (1 point)
		- W+S or A+D or W+A+S+D = no translation
		- Q+E = no rotation
		- Z+X = no scaling
	- Dancing Disco Banana (2 point)
		- Make a dancing disco banana utilizing the appropriate Prefab
		- Create a new C# script component on the prefab called `DancingBanana.cs`
	- Nyan Cat (1 points)
		- Make the Nyan Cat play the Nyan Cat song on repeat utilizing the appropriate Prefab.
	- Colorful Characters (1 point)
		- Modify `PlayerMove.cs` to include new controls for controlling the color of the GameObject's sprite.
			- R = red channel--, T = red channel++
			- G = green channel--, H = green channel++
			- B = blue channel--, N = blue channel++
			- C = alpha--, V = alpha++

2. **Solar System II**
	- Accurate Model (1 points)
		- Solar system is somewhat accurate to our own solar system in terms of number of planets, year and day rotations, and number of moons.
	- Elliptical orbits (1 points)
	- Solar System Physics I (2 points)
		- Create a new scene called `Solar System Physics`
		- Instead of using basic rotation and translations for orbits, set up a basic physics system, and a script handling initial velocities, and an acceleration towards the orbiting body (sun for planets, planet for moons)
		- You must use the proper gravitational force equation
    		- F<sub>orbiting</sub> = F<sub>orbited</sub> = G * m<sub>orbiting</sub>m<sub>orbited</sub>/r<sub>orbit</sub><sup>2</sup>
    		- <INSERT EQUATION PICTURE HERE>
    		- Experiment with different values of G to get you the result you want.
	- Solar System Physics II (2 points)
  		- Create a new script called `SolarSystemManager.cs` and randomly generate the sun, planets, and (optionally) moons.
    		- Seed the random number generation and find a seed you want us to look at and grade. (We will test other ones to ensure it properly randomizes.)
			- Give each planet a random density by randomizing mass and radius within reason
			- You can assume/ensure the sun has infinite mass.
			- Handle collisions by having planets collide into one bigger planet
			- D<sub>new</sub>=(m<sub>1</sub>/(m<sub>1</sub>+m<sub>2</sub>))D<sub>1</sub> + (m<sub>2</sub>/(m<sub>1</sub>+m<sub>2</sub>))D<sub>2</sub>
      		- m<sub>new</sub>=m1+m2

