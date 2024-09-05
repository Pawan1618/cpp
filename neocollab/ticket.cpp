#include <iostream>
using namespace std;

class Ticket {
private:
    int ticketId;

public:
    Ticket() {}
    Ticket(int id) : ticketId(id) {}

    int getTicketId() const {
        return ticketId;
    }
};

class Reservation {
private:
    Ticket reservedTickets[25];
    int totalTickets;

public:
    Reservation(int ticketIds[], int n) : totalTickets(n) {
        for (int i = 0; i < n; i++) {
            reservedTickets[i] = Ticket(ticketIds[i]);
        }
    }

    // Function to display reserved tickets
    void displayReservedTickets() const {
        cout << "Reserved Tickets:";
        for (int i = 0; i < totalTickets; i++) {
            cout << " " << reservedTickets[i].getTicketId();
        }
        cout << endl;
    }

    // Friend function to cancel a reservation
    friend void cancelReservation(Reservation& reservation, const Ticket& ticket);
};

// Cancel Reservation function
void cancelReservation(Reservation& reservation, const Ticket& ticket) {
    int ticketIdToCancel = ticket.getTicketId();
    bool found = false;

    // Search for the ticket to cancel
    for (int i = 0; i < reservation.totalTickets; i++) {
        if (reservation.reservedTickets[i].getTicketId() == ticketIdToCancel) {
            found = true;

            // Shift all the tickets after the canceled ticket
            for (int j = i; j < reservation.totalTickets - 1; j++) {
                reservation.reservedTickets[j] = reservation.reservedTickets[j + 1];
            }
            reservation.totalTickets--;  // Reduce the count of total tickets
            cout << "Ticket with ID " << ticketIdToCancel << " has been cancelled" << endl;
            break;
        }
    }

    if (!found) {
        cout << "Ticket with ID " << ticketIdToCancel << " not found in the reservation" << endl;
    }
}

int main() {
    int N;
    cin >> N;

    int ticketIds[25];
    for (int i = 0; i < N; i++) {
        cin >> ticketIds[i];
    }

    Reservation reservation(ticketIds, N);
    reservation.displayReservedTickets();

    int cancelId;
    cin >> cancelId;
    Ticket ticketToCancel(cancelId);

    cancelReservation(reservation, ticketToCancel);

    reservation.displayReservedTickets();

    return 0;
}
