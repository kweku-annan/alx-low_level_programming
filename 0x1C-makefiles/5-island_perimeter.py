#!/usr/bin/python3
"""Island perimeter"""


def island_perimeter(grid):
    """Returns the island"""
    c = 0
    island_length = len(grid) - 1
    island_width = len(grid[0]) - 1

    for i, r in enumerate(grid):
        for j, n in enumerate(r):
            if n == 1:
                if i == 0 or grid[i - 1][j] != 1:
                    c += 1
                if j == 0 or grid[i][j -1] != 1:
                    c += 1
                if j == island_width or grid[i][j + 1] != 1:
                    c += 1
                if i == island_length or grid[i + 1][j] != 1:
                    c += 1
    return c
