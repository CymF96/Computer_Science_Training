destinations = ["Paris, France", "Shanghai, China", "Los Angeles, USA", "São Paulo, Brazil", "Cairo, Egypt"]
test_traveler = ['Erin Wilkes', 'Shanghai, China', ['historical site', 'art']]

def get_destination_index(destination):
    destination_index = 0
    for d in destinations:
        if d == destination:
            return destination_index
        destination_index += 1
    return "Unknown city"

#test = get_destination_index("Los Angeles, USA")
#print(test)
#test2 = get_destination_index("Paris, France")
#print(test2)
#test3 = get_destination_index("Hyderabad, India")
#print(test3)

def get_traveler_location(traveler):
    traveler_destination = traveler[1]
    traveler_destination_index = get_destination_index(traveler_destination)
    return (traveler_destination_index)

#test_destination_index = get_traveler_location(test_traveler)
#print("Result: " + str(test_destination_index))