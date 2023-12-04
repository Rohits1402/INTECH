/*

    https://medium.com/@amit007xpo/what-is-greedy-algorithm-80cd4c5942c2#:~:text=The%20greedy%20approach%20is%20commonly,the%20goal%20of%20the%20optimization.
    What is Greedy Algorithm?

    A greedy algorithm is a problem-solving approach that aims to find a global optimum by
    making locally optimal choices at each step. It is commonly used in optimization problems
    characterized by constraints and an objective function. The algorithm iteratively selects
    the best choice based on predefined criteria until a complete solution is reached. While
    advantageous for its simplicity and efficiency, greedy algorithms may not always yield the
    global optimum and can result in suboptimal solutions. An example illustrating the concept
    involves finding the minimum number of coins to make change, where the greedy strategy is to
    select the largest coin until the remaining amount is zero. The effectiveness of a greedy algorithm
    depends on the specific problem and decision criteria, as it may not be suitable for all scenarios.



Tendering Change with Greedy Algorithm:
To find the most optimum way to tender exact change using the least number of coins, we employ a greedy
algorithm. The algorithm iterates through the available coin denominations in descending order, selecting
the largest coin that is less than or equal to the remaining change to be given. This process continues until
the remaining change becomes zero. The key is to prioritize the use of larger denominations first, ensuring that
the total number of coins used is minimized.

Greedy Algorithm vs. Dynamic Programming:
In this scenario, the greedy algorithm works efficiently by making locally optimal choices at each step. However, it
might not guarantee the global optimum in all cases. Dynamic programming, on the other hand, provides an optimal solution
through systematic exploration and storage of subproblem solutions. In the context of the coin change problem, dynamic
programming is particularly useful when certain coin denominations lead to more optimal solutions than a greedy approach might
suggest. It ensures an exhaustive search for the best combination, thus finding the globally optimum solution.

*/