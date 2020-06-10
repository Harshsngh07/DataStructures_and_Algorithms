Jon has a field which is shaped in the form of a 2 * n sided convex polygon.There is a pole attached at every vertice of the polygon.Now, Jon wants to divide the poles into n pairs and then connect the 2 poles of each pair using a rope.However, none of the n ropes should intersect each others path, when viewed from above.Find the number of ways in which Jon can tie ropes on the poles.

                                                                                                                                                                                                                                                                                                            Input : The first line contains the number of test cases T.For each testcase,
    there will be only 1 line that contains the value n.

    Output : Print the number of ways poles can be divided into n pairs as explained above.Since the number of ways can be too large,
    print answer % 1000000007.

            Constraints : 1 <=
        T <= 100 1 <= N <= 2500

        Example : Input : 2 2 3

                  Output : 2 5

                  Explanation : TestCase 1 : If the poles on vertices are named A,
    B, C and D in clockwise order, the possible ways are : {(A, B), (C, D)} and {(A, D), (B, C)} Tying pole A with pole C and pole B with pole D is not allowed as this case causes intersection of the ropes.

                                                                                TestCase 2 : If the poles are named A,
    B, C, D, E and F in clockwise order, the possible ways to pair them up are : {(A, B), (C, D), (E, F)} {(A, B), (C, F), (D, E)} {(A, D), (B, C), (E, F)} {(A, F), (B, C), (D, E)}
{
    (A, F), (B, E), (C, D)
}
