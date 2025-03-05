int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: %s <archivo> <palabra_clave>\n", argv[0]);
        return 1;
    }
    
    FILE *file = fopen(argv[1], "r");
    if (!file) {
        perror("Error al abrir el archivo");
        return 1;
    }
    
    char *key = argv[2];
    char line[MAX_LINE];
    int count = 0;
    size_t key_len = strlen(key);
    
    while (fgets(line, MAX_LINE, file)) {
        char *pos = line;
        while ((pos = strstr(pos, key)) != NULL) {
            count++;
            pos += key_len;  // Avanza en la línea
        }
    }
    
    fclose(file);
    printf("%s se repite %d veces en el texto.\n", key, count);
    return 0;
}