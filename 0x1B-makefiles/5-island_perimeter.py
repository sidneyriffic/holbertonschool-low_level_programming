#!/usr/bin/python3
"""Calculate perimeter of a grid island"""


def island_perimeter(grid):
    """Calculate perimeter of a grid island. Grid is a list of equal sized
    lists.
    """
    height = len(grid) - 1
    if height == 0:
        return 0
    width = len(grid[0]) - 1
    if width == 0:
        return 0
    perimeter = 0
    for x in range(width + 1):
        for y in range(height + 1):
            if grid[y][x] == 1:
                if x == width or grid[y][x + 1] == 0:
                    perimeter += 1
                if x == 0 or grid[y][x - 1] == 0:
                    perimeter += 1
                if y == height or grid[y + 1][x] == 0:
                    perimeter += 1
                if y == 0 or grid[y - 1][x] == 0:
                    perimeter += 1
    return perimeter
