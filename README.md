# Day17-of-43-of-Teachersdaychallenge

A. Sereja and Dima
Problem Description: Sereja and Dima play a game with n cards in a row. They take turns picking either the leftmost or rightmost card. Sereja goes first. Both players use a greedy strategy: they always pick the card with the larger number. Calculate the final score for both players.

Key Idea/Logic:

This is a greedy simulation problem. We need to simulate the game turn by turn.

We can use two pointers, left and right, to track the ends of the remaining cards.

Use a loop that runs n times, representing each turn.

Inside the loop, check whose turn it is (Sereja for odd turns, Dima for even turns).

Compare the values at left and right pointers.

The current player takes the larger of the two.

Add the chosen card's value to the player's score.

Move the corresponding pointer (left++ or right--).

Time Complexity: O(N) where N is the number of cards, as we process each card once.

Space Complexity: O(N) to store the cards, or O(1) if the input is processed with pointers on an array.

Example:
Input:

4
4 1 2 10
Output: 12 5
Explanation:

Sereja takes 10 (rightmost). Cards left: [4, 1, 2]. Sereja: 10, Dima: 0.

Dima takes 4 (leftmost). Cards left: [1, 2]. Sereja: 10, Dima: 4.

Sereja takes 2 (rightmost). Cards left: [1]. Sereja: 12, Dima: 4.

Dima takes 1 (leftmost). Cards left: []. Sereja: 12, Dima: 5.

A. Subway Tickets
Problem Description: Ann needs to make n subway rides. A single ticket costs a rubles, and a special ticket for m rides costs b rubles. Find the minimum total cost.

Key Idea/Logic:

The problem is to find the minimum cost among several options.

Option 1: Buy only single tickets. This costs n * a rubles.

Option 2: Buy special tickets for all rides.

Ann needs ceil(n/m) special tickets. This costs ceil(n/m) * b rubles.

Option 3: Hybrid approach. Buy some special tickets and then fill the remaining rides with single tickets.

Ann can buy floor(n/m) special tickets, which costs floor(n/m) * b.

The remaining rides are n % m. The cost for these can be either (n % m) * a (single tickets) or one more special ticket (costing b). She should take the cheaper of these two.

So, the cost is (n / m) * b + min((n % m) * a, b).

The minimum cost is min(Option 1, Option 2, Option 3).

A simplified approach is to compare just two main strategies:

Buy n single tickets: n * a.

Buy n/m special tickets and the rest as singles: (n/m) * b + (n % m) * a.

Buy (n/m) + 1 special tickets to cover all rides: (n/m + 1) * b.

The minimum cost is the smallest of these three.

Time Complexity: O(1) since all calculations are done in constant time.

Space Complexity: O(1).

Example:
Input: 6 2 1 2
Output: 6
Explanation:

Single tickets: 6 * 1 = 6.

Special tickets: 6/2 = 3 tickets. 3 * 2 = 6.

Minimum is 6.

Input: 5 2 2 3
Output: 8
Explanation:

Single tickets: 5 * 2 = 10.

Special tickets: 5/2 = 2 special tickets, 5 % 2 = 1 ride left. 2 * 3 + min(1 * 2, 3) = 6 + 2 = 8.

All special: 5/2 + 1 = 3 tickets. 3 * 3 = 9.

Minimum is 8.


