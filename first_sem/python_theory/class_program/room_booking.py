# To calculate GST
def calculate_gst(amount):
    gst = amount * 18 / 100
    return gst


# To collect individual room booking details
def get_room_details():
    bookings = {}

    for i in range(5):
        print(f"\nEnter details for booking {i + 1}")

        room_id = int(input("Enter room number: "))
        customer_name = input("Enter customer name: ")
        contact_no = input("Enter customer contact number: ")
        booking_amount = float(input("Enter booking amount: "))
        date = input("Enter booking date: ")

        gst = calculate_gst(booking_amount)

        bookings[i] = {
            "roomno": room_id,
            "name": customer_name,
            "mobileno": contact_no,
            "amount": booking_amount,
            "date": date,
            "gst": gst
        }

    return bookings


# To display booking details
def display_booking(bookings):
    print("\n========== BOOKING DETAILS ==========")

    for i, booking in bookings.items():
        print(f"\nBooking {i + 1}")
        print("Room Number:", booking["roomno"])
        print("Customer Name:", booking["name"])
        print("Contact Number:", booking["mobileno"])
        print("Booking Amount:", booking["amount"])
        print("Booking Date:", booking["date"])
        print("GST:", booking["gst"])


# To get total room price
def get_total_rooms_price(bookings):
    total = 0

    for booking in bookings.values():
        total += booking["amount"]

    return total


# To get total GST
def get_total_gst(bookings):
    total_gst = 0

    for booking in bookings.values():
        total_gst += booking["gst"]

    return total_gst


# Main program
booking_info = get_room_details()

print("\nAll Booking Information:")
print(booking_info)

total_room = get_total_rooms_price(booking_info)

display_booking(booking_info)

total_gst = get_total_gst(booking_info)

print("\n========== BILL SUMMARY ==========")
print(f"Total Room Price: {total_room:.2f}")
print(f"Total GST: {total_gst:.2f}")
print(f"Grand Total: {total_room + total_gst:.2f}")


