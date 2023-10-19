int search_login() {
    char person[MAX_SIZE];
    char email[MAX_SIZE];

    printf("\33[92mEnter person's name.\n\33[0m");
    scanf("%s", person);
    printf("\33[92mEnter email address.\n\33[0m");
    scanf("%s", email);

    FILE *file = fopen(NUMBER_FILE, "r");
    if (!file) {
        printf("Error opening users file.\n");
        return -1;//error file if file exists then it will return NULL
    }
    struct Persons user;
    int index = 0;
    while (fscanf(file, "%s %s %s %s %s", user.person_name, user.person_address, user.mobile_num, user.email_address,
                  user.relation) != EOF)
    {
        if (strcmp(person, user.person_name) == 0 && strcmp(email, user.email_address) == 0) {
            printf("\33[93mWelcome\33[0m \33[95m%s\33[0m \33[93m!\n\33[0m", user.person_name);
            printf("\33[93mAddress: \33[95m%s\n\33[0m", user.person_address);
            printf("\33[93mNumber: \33[95m%s\n\33[0m", user.mobile_num);
            printf("\33[93mEmail: \33[95m%s\n\33[0m", user.email_address);
            printf("\33[93mRelation: \33[95m%s\n\n\33[0m", user.relation);
            fclose(file);
            printf("\33[93mLogin Index: \33[95m%d\33[0m", index);
            return index;//Return the index of the logged-in user
        }
        index++;
    }
    fclose(file);
    printf("Login failed. Invalid credentials.\n");
    return -1;


}
