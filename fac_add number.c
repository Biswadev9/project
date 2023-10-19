void addmobile()
{
    FILE *file = fopen(NUMBER_FILE,"a");//declare a file in append (a) mode
    if (!file)
    {
        printf("Error opening users file.\n");
        return;
    }
    struct Persons newperson;
    printf("Enter your nick name.\n");
    scanf("%s",newperson.person_name);
    printf("Enter your address.\n");
    scanf("%s",newperson.person_address);
    printf("Enter your mobile number.\n");
    scanf("%s",newperson.mobile_num);
    printf("Enter your email address.\n");
    scanf("%s",newperson.email_address);
    printf("Relation: \n");
    scanf("%s",newperson.relation);

    fprintf(file, "%s %s %s %s %s\n", newperson.person_name, newperson.person_address, newperson.mobile_num, newperson.email_address, newperson.relation);
    fclose(file);
    printf("\33[94mNumber is added successfully!\n\33[0m");
}
