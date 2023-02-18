# Part 2

## Video Demo

Please provide the YouTube link to your [Video Demo](https://youtube.com).

## Minimum Requirements

### Completed

List all the features completed.

1. Major bug fixes on alien movement.
2. Implemented the alien trail, replaced the trails with game objects.
3. Implemented zombie movement.
4. Minor bug fixes on some UI : alien movement UI.
5. Implemented multiple zombies movement.
6. Implemented zombie distance calculation for zombie attack.
7. Implemented alien attack zombie.
8. Implemented zombie attack alien.
9. Print out zombie unable to attack alien when alien not in range.
10. Alien attack reset after its turn.
11. Health pack works correctly according to alien hp.
12. Arrow shown on HUD indicating which in game characters turn.
13. Added arrow command, user needs to put in correct position and direction.
14. Added quit command.
15. Improved on pod object to damage the nearest zombie.
16. Implemented the part where alien got defeated by zombie.
17. When alien got defeated by zombie, will ask user restart the game or not.
18. Added save and load command.
19. Implemented functions to save and load game files.
20. 

### To Do

List all the features not yet done. Remove this section if there is no incomplete requirements.

1. after alien defeat zombie (if all zombie defeated, game ends)
a) after zombie remove from board
b) alien will continue that direction
c) no more movement for that zombie the next turn
d) HUD still shows the zombie wif 0 hp

2. when alien hit pod, after dealing damage, check if zombie is dead or not.


## Additional Features

Describe the additional features that has been implemented.

1. Alien health is change based on number of zombies.
2. 

## Contributions

List down the contribution of each group members.

For example:

### Ang Khai Pin

1. Fixed some of the game UI, during alien movement and when it ends.
2. Implemented zombie movement and its UI.
3. Improved on the rock items, so when alien hits the rock, will print out which object discover.
4. Improved on the health items, so alien hp is recover accordingly.
5. Implemented multiple zombies movement.
6. Added arrow command
7. Added quit command
8. Refered to Lester's pass by reference method to implement alien attack zombie.
9. Improved on the zombie attack alien where zombie is unable to attack alien when not in range.
10. Implemented the part where alien got defeated by zombie.

### Lester Liew Jun Min

1. Major bug fixes on alien movement.
2. Implemented the alien trail and when alien turns ends, object will spawn.
3. Minor bug fixes on zombie movement.
4. Implemented zombie distance calculation for zombie attack.
5. Implemented pass by reference method for zombie attack alien / alien attack zombie.
6. Implemented zombie attack alien.
7. Implemented arrow shown on HUD to show which character's turn.
8. Improved on the pod object to deal damage to nearby zombie
9. Improved on alien got defeated by zombie, reset the values for a new game.
10. Added save and load command.
11. Implemented functions to save and load game files.
12. 

## Problems Encountered & Solutions

Describe the problems encountered and provide the solutions / plan for the solutions.

1. Unable to retrieve the created vector data for zombie hp, attk, range / alien hp. Solution: Use pass by reference method.
