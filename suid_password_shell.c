int main(void) {

    int pass;

    printf("");
    scanf("%d", &pass);

    if (pass == 12345678) {
        setuid(0); 
        setgid(0);
        system("/bin/bash");
    } else {
        exit(1);
    }
}
