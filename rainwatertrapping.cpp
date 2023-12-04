#include <iostream>
#include <vector>

// https://youtu.be/m18Hntz4go8?si=KTtX9ciAifYPcKPr

int trapWater(const std::vector<int> &height)
{
    int n = height.size();
    if (n <= 2)
    {
        return 0;
    }

    std::vector<int> leftMax(n, 0);
    std::vector<int> rightMax(n, 0);

    leftMax[0] = height[0];
    for (int i = 1; i < n; ++i)
    {
        leftMax[i] = std::max(leftMax[i - 1], height[i]);
    }

    rightMax[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; --i)
    {
        rightMax[i] = std::max(rightMax[i + 1], height[i]);
    }

    int trappedWater = 0;
    for (int i = 0; i < n; ++i)
    {
        trappedWater += std::min(leftMax[i], rightMax[i]) - height[i];
    }

    return trappedWater;
}

int main()
{
    std::vector<int> elevation = {2, 1, 3, 0, 1, 2, 3};
    int result = trapWater(elevation);

    std::cout << "Amount of water trapped: " << result << " units" << std::endl;

    return 0;
}
