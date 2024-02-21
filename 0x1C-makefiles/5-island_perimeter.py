#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
    - grid (list of list of integers):
    2D grid where 0 represents water and 1 represents land.

    Returns:
    - int: Perimeter of the island.

    Constraints:
    - The grid is rectangular, and width and height don’t exceed 100.
    - Grid is completely surrounded by water,
    and there is one island (or nothing).
    - The island doesn’t have “lakes”
    (water inside that isn’t connected to the water around the island).
    """

    perimeter = 0
    rows, cols = len(grid), len(grid[0]) if grid else 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4

                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
