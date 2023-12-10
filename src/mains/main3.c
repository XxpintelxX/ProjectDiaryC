#include "../../headers/cell.h"
#include "../../headers/complementary.h"
#include "../../headers/timer.h"
#include "../../headers/appointment.h"

int main()
{
    t_contact *contact;
    contact = scanContact();
    displayContact(contact);
    
    return 0;
}
