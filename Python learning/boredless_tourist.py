destinations = ["Paris, France", "Shanghai, China", "Los Angeles, USA", "São Paulo, Brazil", "Cairo, Egypt"]
test_traveler = ['Erin Wilkes', 'Shanghai, China', ['historical site', 'art']]
Derek_traveler = ["Dereck Smith", "Paris, France", ["monument"]]

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

attractions = [[] for i in range (0, len(destinations))]
#print(attractions)

def add_attraction(destination, attraction):
	destination_index = get_destination_index(destination)
	if destination_index != "unknown city":
		attractions[destination_index].append(attraction)
	attraction_for_destination = attractions[destination_index]
	return attraction_for_destination

add_attraction("Los Angeles, USA", ["Venice Beach", ["beach"]])
add_attraction("Paris, France", ["the Louvre", ["art", "museum"]])
add_attraction("Paris, France", ["Arc de Triomphe", ["historical site", "monument"]])
add_attraction("Shanghai, China", ["Yu Garden", ["garden", "historical site"]])
add_attraction("Shanghai, China", ["Yuz Museum", ["art", "museum"]])
add_attraction("Shanghai, China", ["Oriental Pearl Tower", ["skyscraper", "viewing deck"]])
add_attraction("Los Angeles, USA", ["LACMA", ["art", "museum"]])
add_attraction("São Paulo, Brazil", ["São Paulo Zoo", ["zoo"]])
add_attraction("São Paulo, Brazil", ["Pátio do Colégio", ["historical site"]])
add_attraction("Cairo, Egypt", ["Pyramids of Giza", ["monument", "historical site"]])
add_attraction("Cairo, Egypt", ["Egyptian Museum", ["museum"]])

#print(attractions)

def find_attractions(destination, interests):
	i = 0
	destination_index = get_destination_index(destination)
	attraction_in_city = attractions[destination_index]
	attractions_with_interest = []
	possible_attraction = []
	attractions_tags = []
	for a in attraction_in_city:
		possible_attraction.append(a)
		attractions_tags.append(a[1]) 
	for activities in attractions_tags:
		i += 1
		for activity in activities:
			for interest in interests:
				if activity == interest:
					attractions_with_interest.append(possible_attraction[i - 1][0])
	return attractions_with_interest

def get_attractions_for_traveler(traveler):
	traveler_destination = traveler[1]
	traveler_interests = traveler[2]
	traveler_attractions = find_attractions(traveler_destination, traveler_interests)
	interests_string = f"Hi {traveler[0]}, we think you'll like these places around {traveler[1]}: {', '.join(traveler_attractions)}"
	return interests_string

print(get_attractions_for_traveler(Derek_traveler))
