# include "key_code_tester.h"

int key_hook(int keycode, void *param)
{
    (void)param;  // Ignoriere den Parameter

    printf("Keycode: %d\n", keycode);
    if (keycode == 53)  // ESC-Taste zum Beenden
    {
        printf("ESC gedrückt, Programm beendet.\n");
        exit(0);
    }
    return (0);
}


int main(void)
{
    void *mlx;
    void *win;

    mlx = mlx_init();
    if (!mlx)
    {
        printf("Fehler bei der Initialisierung von MiniLibX.\n");
        return (1);
    }

    win = mlx_new_window(mlx, 800, 600, "Keycode Tester");
    if (!win)
    {
        printf("Fehler beim Erstellen des Fensters.\n");
        return (1);
    }

    mlx_key_hook(win, key_hook, NULL);  // Registriere den key_hook
    mlx_loop(mlx);  // Starte die MiniLibX-Ereignisschleife

    return (0);
}
