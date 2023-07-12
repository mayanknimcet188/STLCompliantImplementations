#include <iostream>
#include <stack>
#include "gtest/gtest.h"

TEST(StackImpl, StackOperations)
{
    std::stack<int> stack;
    EXPECT_EQ(stack.size(), 0);
    stack.push(1);
    stack.push(2);
    stack.push(3);
    EXPECT_EQ(stack.top(), 3);
    stack.pop();
    EXPECT_EQ(stack.top(), 2);
    stack.pop();
    stack.pop();
    EXPECT_EQ(stack.empty(), true);
}

TEST(StackImpl, StackSwap)
{
    std::stack<int> from, to;
    from.push(20);
    from.push(40);
    from.push(60);
    to.push(10);
    to.push(30);
    to.push(50);

    // swap stack elements
    from.swap(to);
    std::vector<int> stack_elem_from;
    std::vector<int> stack_elem_to;
    while (!from.empty())
    {
        stack_elem_from.push_back(from.top());
        from.pop();
    }

    std::vector<int> temp{50, 30, 10};
    EXPECT_EQ(stack_elem_from, temp);
}