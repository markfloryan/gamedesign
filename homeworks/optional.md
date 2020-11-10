CS4730 - HW 6 (OPTIONAL): Low Level Game Programming
===============================

<a name="background"></a>Background and Tutorials
---------------------------------------
In this assignment, we will give you the opportunity to delve deeper into the fundamentals of game programming by overwriting existing systems in Unity. This entire assignment is optional, and you can get partial credit for each section.

You should review the Game Programming lectures.


<a name="optional"></a>Optional Features
---------------------------------------

You can obtain the following optional points on this assignment:

- **Collision System (10 points)**
    - CustomCircleCollider2D Collision Detection (1 point)
        - Emulate the functionality of the CircleCollider2D component
        - Parameters
            - trigger (bool)
                - Used for deciding whether to resolve collisions or not
            - radius (float)
            - offset (Vector2)
                - from the origin of the object in LOCAL space
    - CustomBoxCollider2D Collision Detection (1 point)
        - Emulate the funcionality of the BoxCollider2D component
        - Parameters
            - trigger (bool)
                - Used for deciding whether to resolve collisions or not
            - size (Vector2)
                - Width and height
            - offset (Vector2)
                - from the origin of the object in LOCAL space
    - OnCollision Events (2 points)
        - Create events for
            - `OnCollisionEnter2D(CustomCollider2D other)`
            - `OnCollisionStay2D(CustomCollider2D other)`
            - `OnCollisionExit2D(CustomCollider2D other)`
        - External scripts should be able to reference the Custom Collider and subscribe to these events
    - Composite Colliders (2 points)
        - For any object, allow it to be composed of many colliders
        - Object should not register collisions with itself
        - OnCollision Events should only trigger once per Composite Collider
            - In other words, entering 2 different colliders in one object should not call OnCollisionEnter2D twice unless it first stopped intersecting with ALL colliders first.
    - Optimization (5 points)
        - Optimize your collision resolution with a quad-tree data structure

- **Physics Engine (5 points)**
    - CustomRigidbody2D (5 points)
        - Emulate the functionality of the Rigidbody2D component
        - Parameters
            - mass (float)
                - default 1.0f
            - gravityScale (float)
                - default 9.81f
            - gravity (Vector2)
                - default Vector2.down
                - Always normalize such that gravityScale truly represents acceleration
            - velocity (Vector2)
                - default Vector2.zero
                - every frame, assuming no collisions, `transform.position += velocity * Time.deltaTime`
        - Collision Resolution
            - Requires completion of collision detection from the Collision System portion
            - After position calculations, recalculate position if overlapping with a collider
            - Separate the velocities of the object into 2 components
                - The velocity parallel to the normal vector of the collision should be adjusted
                - The velocity perpendicular to the normal vector of the collision should remain unaffected
                - Think of the Mario sliding up a box example from lecture

- **Shaders (5 points)**
    - Feel free to use ShaderGraph or normal shaders, in 2D or 3D
        - If using ShaderGraph, you need to use URP
    - Fresnel Shader (1 point)
        - Create a shader that outlines the object with a Fresnel effect
        - Create a property that changes the power of the Fresnel effect
        - Create a Color property that changes the color of the outline
    - Dissolve Shader (1 point)
        - Create a shader that utilizes a noise map and alpha clip thresholds to dissolve the object based on some disolve value (0-1)
    - Ripple Shader (1 point)
        - Create a shader that deforms the mesh with a water-like ripple over time
    - Toon Shader (2 point)
        - Hard outline of adjustable size (like Fresnel but without a gradient)
        - 3 thresholded shading levels
            - shaded/dark
            - standard
            - specular (white spot)
                - must be with respect to some arbitrary light source (can be a hard-set vector) and the camera positions

- **Game Report (6 points)**
    - Must be at least 10 paragraphs.
    - Discuss the Mechanics, Dynamics, and Aesthetics.
        - Provide specific examples
        - Graphics and images of what you're talking about helps a lot!
    - 1 point if you write it in Latex ;)