#!/usr/bin/python3
"""
Island Perimeter
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid
    """
    row = len(grid)
    if row == 0:
        return 0;
    column = len(grid[0])

    perimeter = 0

    for r in range(row):
        for c in range(column):
            if grid[r][c] == 1:
                perimeter += 4
                if c > 0 and grid[r][c - 1] == 1:
                    perimeter -= 2
                if r > 0 and grid[r - 1][c] == 1:
                    perimeter -= 2
    return perimeter
