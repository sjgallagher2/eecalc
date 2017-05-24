#include <gtk/gtk.h>

static void on_window_closed(GtkWidget * widget, gpointer data)
{
    gtk_main_quit();
}

int main(int argc, char * argv[])
{
    GtkWidget * window, * label;

    gtk_init(&argc, &argv);

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);

    g_signal_connect( window, "destroy", G_CALLBACK(on_window_closed), NULL);

    label = gtk_label_new("Hello, World!");

    gtk_container_add(GTK_CONTAINER(window), label);

    gtk_widget_show(label);
    gtk_widget_show(window);

    gtk_main();

    return 0;
}
