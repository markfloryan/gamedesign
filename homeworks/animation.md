CS4730 - HW 3: Character Controller and Animation
===============================

<a name="background"></a>Github Assignment Link
---------------------------------------

Every assignment has a **Github Classroom Link** you must follow to get the starter code (if applicable) and to create your repository for the assignment. If you haven't yet done so, follow the instructions at the [Github Classroom Tutorial](./githubclassroom.html).

**Assignment Invite Link**: [Homework 3 Invite](https://classroom.github.com/a/lbiWercC)

Once your repository is configured, push your code to it in order to submit your work.

<a name="background"></a>Background / Resources
---------------------------------------

For this assignment, you will produce a small demo that highlights how Unity handles simple controllers (player input, moving sprites around the screen, etc.), as well as simple AI input and animations on sprites. The optional section of this assignment will allow you to implement some of these items manually, or in more detail.

You'll need to go through and familiarize yourself with more Unity basics. Proceed through the following resources to learn about animation, input, and sprites in Unity.

- [Animator Controllers](https://docs.unity3d.com/Manual/AnimatorControllers.html)
- [Input](https://docs.unity3d.com/Manual/Input.html)
- [Sprite Animations](https://learn.unity.com/tutorial/introduction-to-sprite-animations)

<a name="required"></a>Required Features (5 features, 5 required to pass)
---------------------------------------

The template repository includes a `SampleScene`. This scene includes a Player and an Enemy already. Both have a PlatformerController component and the appropriate input component.

To pass this assignment, add some functionality that allows a player to control the *player* sprite, an AI to control the *enemy* sprite, and setup some simple animations for each.

The requirements for this assignment are:

- 1. Character Controller
  - Modify `PlatformerController.cs` to allow the player to move, jump, and get hit
  - If the character is touched by the enemy, they *lose* (lose control / game over)
  - Flip the sprite when moving left
  
- 2. Player Input
  - Modify `PlayerInput.cs`
      - A/D or arrow keys to move left and right
      - Space to jump

- 3. AI Input
  - Modify `AIInput.cs`
      - If player is sufficiently far away, wander left/right aimlessly
      - If player is nearby, chase them

- 4. Character Animation
  - Set up an Animator Controller, and properly move between states depending on movement
  - Tip: Split up the jump state into a jump state and a fall state. This allows you to easily play the jump animation only once and then automatically go to the fall animation (which can be just 1 frame of the end of the jump animation)




<a name="optional"></a>Optional Features
---------------------------------------- 


- Character Animator Override (1 point)
  - Find your own character sprite sheet and import it into the project
  - Create new animations from this sprite sheet
  - Create an Animator Override Controller, and replace the CharacterAnimator animations with the new ones while still using the same state machine structure.

- Controller Support (1 point)
  - Player is controllable with both keyboard and controller at the same time. Users can choose which to use.

- Tight Movement (1 point)
  - If your player feels good to control, you get a point here
  - Suggestions
    - Variable jump height depending on how long you press the button
    - Jumping is "floaty" until the apex, and then pulls the player down
    - Smoothing from idle to walking (don't just hard set velocity)

- Custom Animator (6 points)
  - Recreate the basic features of the Unity Animator system from scratch
  - This is a big one, so partial credit is allowed depending on which of the following you implement
  - State Controller (2 points)
    - Create a finite state machine system to support animations. Contains two basic components:
      1) States - Vertices. Contain an animation that is played on repeat
      2) Transitions - Edges. Connects two states, and provides boolean conditions for when the edge should be traversed from one state to another.
  - Variables for state/animation transitions (2 points)
    - Variables
      - Boolean
        - compare is true or false
      - Int and Float
        - compare >, <, or = to some constant value
      - Trigger
        - Get set once from some external script, and are true for one frame, then false again.
  - Animation class that takes in series of images and other metadata (1 point)
    - Name
    - List of sprites
    - framerate
    - looping
      - if true, will repeat endlessly when in an active state. If false, will stop after one cycle.
  - Demonstration of working features (1 point)
    - Requires completion of all of the above
    - Create a scene demonstrating that Sayu can be idle, walk, or jump with your animation system.
    - Pressing nothing should yield the Idle state on repeat
    - Pressing left or right should yield the walking/running state on repeat
    - Pressing jump should make the character jump once without repeating and then immediately switch back to idle or walking as appropriate






