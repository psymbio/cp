def count_triangles_in_polyhedron(polyhedrons):
    count = 0
    for polyhedron in polyhedrons:
        poly = polyhedron.lower()
        if poly[:3] == "tet":
            count += 4
        elif poly[:3] == "cub":
            count += 6
        elif poly[:3] == "oct":
            count += 8
        elif poly[:3] == "dod":
            count += 12
        elif poly[:3] == "ico":
            count += 20
    return count

size = int(input())
polyhedrons = []
for i in range(0, size):
    polyhedrons.append(input())

print(count_triangles_in_polyhedron(polyhedrons))
