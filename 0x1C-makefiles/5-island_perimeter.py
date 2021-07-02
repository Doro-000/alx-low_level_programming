#!/usr/bin/python3

"""
    contains island_perimeter
"""

def island_perimeter(grid):
    """
        computes the perimeter of an 'island' in a grid
        0 represents water zone
        1 represents land zone
        one cell in the grid represents a square piece of land of length 1
    """
    perimeter_perland = 4
    total_permimeter = 0
    for y in range(len(grid)):
        for x in range(len(grid[y])):
            if grid[y][x] == 1:
                total_permimeter += perimeter_perland
                intersections = get_intersections(x, y, grid)
                total_permimeter -= intersections
    return total_permimeter

def get_intersections(x, y, grid):
    """
        returns the number intersection of a cell with it's neighboring cells
    """
    vertical_intersections = 0
    horizontal_intersections = 0
    if (y - 1) >= 0:
        if grid[y - 1][x]:
            vertical_intersections += 1
    if (y + 1) < len(grid):
        if grid[y + 1][x]:
            vertical_intersections += 1
    if (x - 1) >= 0:
        if grid[y][x - 1]:
            horizontal_intersections += 1
    if (x + 1) < len(grid[y]):
        if grid[y][x + 1]:
            horizontal_intersections += 1
    return vertical_intersections + horizontal_intersections

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 1, 1, 1, 0],
        [0, 1, 0, 0, 1, 0],
        [0, 1, 1, 1, 1, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
