// main.cpp
// Sam Gallagher
// 21 Sept. 2016
//
// Main program to run the Electrical Engineer's Calculator

#include <math.h>
#include <iostream>
#include <sstream>
#include <gtk/gtk.h>

#include "Parser.h"
#include "structures.h"
#include "arith.h"

#define EXIT_SUCCESS 0

typedef struct
{
    GtkWidget *window;
    GtkWidget *textarea;
    GtkTextBuffer *textbuffer;
    GtkWidget *entryinput;
}widgetstruct;

/*************************************************
 CALLBACK FUNCTIONS
/************************************************/

//Numerical=======================

static void button_0_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"0",1,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);

}
static void button_1_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"1",1,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_2_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"2",1,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_3_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"3",1,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_4_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"4",1,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_5_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"5",1,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_6_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"6",1,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_7_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"7",1,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_8_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"8",1,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_9_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"9",1,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_dec_cb(GtkWidget *widget, gpointer data)
{
    //Insert the decimal
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),".",1,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_negate_cb(GtkWidget *widget, gpointer data)
{
    //Insert the negative
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));

    gtk_editable_insert_text(GTK_EDITABLE(data),"-",1,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}

//Arithmetic =======================

static void button_add_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"+",1,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_subtract_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"-",1,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_multiply_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"*",1,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_divide_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"/",1,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_enter_cb(GtkWidget *widget, widgetstruct *data)
{
    //Parse text bar
    const gchar* unparsed_text = gtk_entry_get_text(GTK_ENTRY(data->entryinput));
    gint unp_len = gtk_entry_get_text_length(GTK_ENTRY(data->entryinput));

    std::stringstream expressions;
    std::stringstream result;
    expressions << unparsed_text;
    Parser p(&expressions, &result);
    p.parse();
    int res_len = result.tellp();
    const gchar* resultstring = result.str().c_str();

    //Update text buffer at the end
    GtkTextIter *tempc;
    gtk_text_buffer_get_end_iter(GTK_TEXT_BUFFER(data->textbuffer), tempc);

    gtk_text_buffer_insert(GTK_TEXT_BUFFER(data->textbuffer),tempc,unparsed_text,unp_len);
    gtk_text_buffer_insert(GTK_TEXT_BUFFER(data->textbuffer),tempc," = ",3);
    gtk_text_buffer_insert(GTK_TEXT_BUFFER(data->textbuffer),tempc,resultstring,res_len);
    gtk_text_buffer_insert(GTK_TEXT_BUFFER(data->textbuffer),tempc,"\n\0",1);

    //Scroll down
    GtkAdjustment *adj = gtk_scrolled_window_get_vadjustment(GTK_SCROLLED_WINDOW(data->window) );
    gtk_adjustment_set_value(adj,gtk_adjustment_get_upper(adj));


    //Clear the entry box
    gtk_editable_delete_text(GTK_EDITABLE(data->entryinput),0,-1);

}
static void button_clear_cb(GtkWidget *widget, gpointer data)
{
    gtk_editable_delete_text(GTK_EDITABLE(data),0,-1);

    //Reselect the text bar
    gtk_widget_grab_focus(GTK_WIDGET(data));
}


//Editing text=======================

static void button_left_cb(GtkWidget *widget, gpointer data)
{
    //Get cursor position
    int pos = gtk_editable_get_position(GTK_EDITABLE(data));

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos-1);

}
static void button_right_cb(GtkWidget *widget, gpointer data)
{
    //Get cursor position
    int pos = gtk_editable_get_position(GTK_EDITABLE(data));

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos+1);
}
static void button_up_cb(GtkWidget *widget, gpointer data)
{
    //Nothing here yet
}
static void button_down_cb(GtkWidget *widget, gpointer data)
{
    //Nothing here yet
}
static void button_del_cb(GtkWidget *widget, gpointer data)
{
    //Delete selected text or one space back from the position
    gint left;
    gint right;
    gtk_editable_get_selection_bounds(GTK_EDITABLE(data),&left,&right);

    if(left == right)
    {
        gtk_editable_delete_text(GTK_EDITABLE(data),left,left+1);
    }
    else
    {
        gtk_editable_delete_text(GTK_EDITABLE(data),left,right);
    }

    //Reselect the text bar
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),left);
}
static void button_ins_cb(GtkWidget *widget, gpointer data)
{
    //Get cursor position
    int pos = gtk_editable_get_position(GTK_EDITABLE(data));

    //Toggle the state of the 'overwrite mode'
    gtk_entry_set_overwrite_mode(GTK_ENTRY(data),!(gtk_entry_get_overwrite_mode(GTK_ENTRY(data))));

    //Reselect the text bar
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}




//Math symbol=======================
static void button_left_parens_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"(",1,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_right_parens_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),")",1,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_raised_to_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"^",1,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_enter_exponent_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"E",1,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_milli_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"m",1,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_micro_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"u",1,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_nano_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"n",1,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_pico_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"p",1,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_exp_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"e^(",3,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_ln_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"ln(",3,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_sqrt_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"sqrt(",5,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_conjugate_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"conj(",5,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_sin_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"sin(",4,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_cos_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"cos(",4,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_tan_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"tan(",4,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_sinh_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"sinh(",5,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_parallel_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"||",2,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_phase_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"phase(",6,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_magnitude_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"mag(",4,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_imag_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"Im(",3,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_real_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"Re(",3,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_frac_cb(GtkWidget *widget, gpointer data)
{
    //Convert a decimal to a fraction
}
static void button_tau_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"tau(",4,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_lc_freq_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"LC(",3,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_f_to_w_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"ftow(",5,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_f_to_t_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"ftot(",5,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_rad_to_deg_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"deg(",4,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}

//Math constants ======================
static void button_j_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"j",1,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_omega_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"w",1,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_s_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"s",1,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}



//Functional=======================
static void button_var_cb(GtkWidget *widget, gpointer data)
{
    //Insert the number
    gint pos = gtk_editable_get_position(GTK_EDITABLE(data));
    gtk_editable_insert_text(GTK_EDITABLE(data),"->",2,&pos);

    //Reselect the text bar and move
    gtk_widget_grab_focus(GTK_WIDGET(data));
    gtk_editable_set_position(GTK_EDITABLE(data),pos);
}
static void button_function_cb(GtkWidget *widget, gpointer data)
{
    //Nothing here yet
}
static void button_program_cb(GtkWidget *widget, gpointer data)
{
    //Nothing here yet
}
static void button_graph_cb(GtkWidget *widget, gpointer data)
{
    //Nothing here yet
}
static void button_alt_cb(GtkWidget *widget, gpointer data)
{
    //Nothing here yet
}


// MAIN() - ENTRY POINT
int main(int argv, char ** argc)
{
    //Initialize
    GtkWidget *window;
    GtkWidget *box1;
    GtkWidget *op_table;

    //Numerical buttons
    GtkWidget *button_0;
    GtkWidget *button_1;
    GtkWidget *button_2;
    GtkWidget *button_3;
    GtkWidget *button_4;
    GtkWidget *button_5;
    GtkWidget *button_6;
    GtkWidget *button_7;
    GtkWidget *button_8;
    GtkWidget *button_9;
    GtkWidget *button_dec;
    GtkWidget *button_negate;

    //Basic arithmetic buttons
    GtkWidget *button_add;
    GtkWidget *button_subtract;
    GtkWidget *button_multiply;
    GtkWidget *button_divide;
    GtkWidget *button_enter;
    GtkWidget *button_clear;


    //Editing text buttons
    GtkWidget *button_left;
    GtkWidget *button_right;
    GtkWidget *button_up;
    GtkWidget *button_down;
    GtkWidget *button_del;
    GtkWidget *button_ins;


    //Math symbol buttons
    GtkWidget *button_left_parens;
    GtkWidget *button_right_parens;
    GtkWidget *button_raised_to;
    GtkWidget *button_enter_exponent; //The EE button, ex. 1 x10^3 => 1E+03
    GtkWidget *button_milli;
    GtkWidget *button_micro;
    GtkWidget *button_nano;
    GtkWidget *button_pico;
    GtkWidget *button_exp;
    GtkWidget *button_ln;
    GtkWidget *button_sqrt;
    GtkWidget *button_conjugate;
    GtkWidget *button_sin;
    GtkWidget *button_cos;
    GtkWidget *button_tan;
    GtkWidget *button_sinh;
    GtkWidget *button_parallel; //parallel between two impedances
    GtkWidget *button_phase;
    GtkWidget *button_magnitude;
    GtkWidget *button_imag;
    GtkWidget *button_real;
    GtkWidget *button_frac; //Decimal to fraction
    GtkWidget *button_tau; //RC time constant
    GtkWidget *button_lc_freq; //LC resonant frequency
    GtkWidget *button_f_to_w;
    GtkWidget *button_f_to_t;
    GtkWidget *button_rad_to_deg;

    //Mathematical constants
    GtkWidget *button_j;
    GtkWidget *button_omega;
    GtkWidget *button_s;

    //Functional buttons
    GtkWidget *button_var;
    GtkWidget *button_function;
    GtkWidget *button_program;
    GtkWidget *button_graph;
    GtkWidget *button_alt;

    //ALT buttons
    //GtkWidget *button_xc; //Capacitive reactance
    //GtkWidget *button_xl; //Inductive reactance
    //GtkWidget *button_inverse;
    //GtkWidget *button_squared;
    //    GtkWidget *button_cosh; //alt button
    //    GtkWidget *button_tanh; //alt button
    //    GtkWidget *button_asin; //alt button
    //    GtkWidget *button_acos; //alt button
    //    GtkWidget *button_atan; //alt button

    //Docs on these:
    // https://developer.gnome.org/gtk3/2.90/GtkEntry.html
    // https://developer.gnome.org/gtk3/2.90/GtkTextBuffer.html
    // https://developer.gnome.org/gtk3/2.90/GtkTextView.html
    GtkWidget *text_entry;
    GtkWidget *history_space;
    GtkTextBuffer *history_buffer;
    GtkWidget *text_scroll_container;

    gtk_init(&argv, &argc);

    //Assign and arrange
    //Window
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_default_size(GTK_WINDOW(window), 790,574);
    gtk_window_set_position(GTK_WINDOW(window),GTK_WIN_POS_CENTER);
    gtk_container_border_width(GTK_CONTAINER(window),30);

    text_scroll_container = gtk_scrolled_window_new(NULL,NULL);

    //Box
    box1 = gtk_vbox_new(false,0);

    //Table
    op_table = gtk_table_new(8,8,false);

    //Buttons
    button_0 = gtk_button_new_with_label("0");
    button_1 = gtk_button_new_with_label("1");
    button_2 = gtk_button_new_with_label("2");
    button_3 = gtk_button_new_with_label("3");
    button_4 = gtk_button_new_with_label("4");
    button_5 = gtk_button_new_with_label("5");
    button_6 = gtk_button_new_with_label("6");
    button_7 = gtk_button_new_with_label("7");
    button_8 = gtk_button_new_with_label("8");
    button_9 = gtk_button_new_with_label("9");
    button_dec = gtk_button_new_with_label(".");
    button_negate = gtk_button_new_with_label("(-)");
    button_enter = gtk_button_new_with_label("Enter");
    button_clear = gtk_button_new_with_label("Clear");

    //Arith
    button_add = gtk_button_new_with_label("+");
    button_subtract = gtk_button_new_with_label("-");
    button_multiply = gtk_button_new_with_label("x");
    button_divide = gtk_button_new_with_label("/");

    //Editing
    button_left = gtk_button_new_with_label("<");
    button_right = gtk_button_new_with_label(">");
    button_up = gtk_button_new_with_label("^");
    button_down = gtk_button_new_with_label("v");
    button_del = gtk_button_new_with_label("Delete");
    button_ins = gtk_toggle_button_new_with_label("INS");

    //Math symbol buttons
    button_left_parens = gtk_button_new_with_label("(");
    button_right_parens = gtk_button_new_with_label(")");
    button_raised_to = gtk_button_new_with_label("^");
    button_enter_exponent = gtk_button_new_with_label("EE");
    button_milli = gtk_button_new_with_label("milli");
    button_micro = gtk_button_new_with_label("micro");
    button_nano = gtk_button_new_with_label("nano");
    button_pico = gtk_button_new_with_label("pico");
    button_exp = gtk_button_new_with_label("e^");
    button_ln = gtk_button_new_with_label("ln");
    button_sqrt = gtk_button_new_with_label("sqrt");
    button_conjugate = gtk_button_new_with_label("conj");
    button_sin = gtk_button_new_with_label("sin");
    button_cos = gtk_button_new_with_label("cos");
    button_tan = gtk_button_new_with_label("tan");
    button_sinh = gtk_button_new_with_label("sinh");
    button_parallel = gtk_button_new_with_label("||");
    button_phase = gtk_button_new_with_label("phase");
    button_magnitude = gtk_button_new_with_label("mag");
    button_imag = gtk_button_new_with_label("imag");
    button_real = gtk_button_new_with_label("real");
    button_frac = gtk_button_new_with_label("frac");
    button_tau = gtk_button_new_with_label("t (R,C)");
    button_lc_freq = gtk_button_new_with_label("w (L,C)");
    button_f_to_w = gtk_button_new_with_label("Freq -> w");
    button_f_to_t = gtk_button_new_with_label("Freq -> T");
    button_rad_to_deg = gtk_button_new_with_label("Rad/Deg");

    //Math constants
    button_j = gtk_button_new_with_label("j");
    button_omega = gtk_button_new_with_label("w");
    button_s = gtk_button_new_with_label("s");

    //Functional
    button_var = gtk_button_new_with_label("store");
    button_function = gtk_button_new_with_label("function");
    button_program = gtk_button_new_with_label("program");
    button_graph = gtk_button_new_with_label("graph");
    button_alt = gtk_toggle_button_new_with_label("ALT");

    //Text boxes
    text_entry = gtk_entry_new();
    gtk_entry_set_text(GTK_ENTRY(text_entry),"0");
    gtk_entry_set_alignment(GTK_ENTRY(text_entry),1);
    gtk_entry_set_overwrite_mode(GTK_ENTRY(text_entry),false);

    history_space = gtk_text_view_new();
    history_buffer = gtk_text_view_get_buffer( GTK_TEXT_VIEW(history_space) );
    gtk_text_view_set_editable(GTK_TEXT_VIEW(history_space) ,false);

    widgetstruct cbData;
    cbData.window = text_scroll_container;
    cbData.textarea = history_space;
    cbData.textbuffer = history_buffer;
    cbData.entryinput = text_entry;

    //Set up containers and boxes
    gtk_box_pack_end(GTK_BOX(box1),op_table,true,true,0);
    gtk_box_pack_start(GTK_BOX(box1),text_scroll_container,true,true,0);
    gtk_box_pack_start(GTK_BOX(box1),text_entry,true,true,0);

    //Numerical
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_0,3,4,7,8); //left right top bottom
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_1,2,3,6,7);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_2,3,4,6,7);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_3,4,5,6,7);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_4,2,3,5,6);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_5,3,4,5,6);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_6,4,5,5,6);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_7,2,3,4,5);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_8,3,4,4,5);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_9,4,5,4,5);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_dec,4,5,7,8);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_negate,2,3,7,8);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_enter,5,6,6,8);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_clear,7,8,0,1);

    //Arith
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_add,5,6,5,6);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_subtract,5,6,4,5);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_multiply,5,6,3,4);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_divide,4,5,3,4);

    //Editing text
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_left,5,6,1,2);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_right,7,8,1,2);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_up,6,7,0,1);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_down,6,7,2,3);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_del,5,6,0,1);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_ins,0,1,1,2);

    //Math symbols
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_left_parens,2,3,3,4);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_right_parens,3,4,3,4);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_raised_to,1,2,3,4);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_enter_exponent,0,1,6,7);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_milli,4,5,2,3);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_micro,3,4,2,3);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_nano,2,3,2,3);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_pico,1,2,2,3);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_exp,1,2,5,6);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_ln,1,2,6,7);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_sqrt,1,2,4,5);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_conjugate,7,8,5,6);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_sin,1,2,1,2);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_cos,2,3,1,2);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_tan,3,4,1,2);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_sinh,4,5,1,2);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_parallel,5,6,2,3);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_phase,7,8,3,4);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_magnitude,7,8,4,5);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_imag,6,7,6,7);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_real,6,7,7,8);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_frac,1,2,0,1);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_tau,7,8,6,7);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_lc_freq,7,8,7,8);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_f_to_w,4,5,0,1);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_f_to_t,3,4,0,1);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_rad_to_deg,2,3,0,1);

    //Constants
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_j,6,7,3,4);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_omega,6,7,4,5);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_s,6,7,5,6);

    //Functional
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_var,1,2,7,8);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_function,0,1,2,4);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_program,0,1,4,6);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_graph,0,1,7,8);
    gtk_table_attach_defaults(GTK_TABLE(op_table),button_alt,0,1,0,1);

    //ALT
    //button_ans = gtk_button_new_with_label("Ans");
    //gtk_table_attach_defaults(GTK_TABLE(op_table),button_e,0,0,0,0);
    //gtk_table_attach_defaults(GTK_TABLE(op_table),button_xc,);
    //gtk_table_attach_defaults(GTK_TABLE(op_table),button_xl,);
    //gtk_table_attach_defaults(GTK_TABLE(op_table),button_cosh,0,0,0,0);
    //gtk_table_attach_defaults(GTK_TABLE(op_table),button_tanh,0,0,0,0);
    //gtk_table_attach_defaults(GTK_TABLE(op_table),button_asin,0,0,0,0);
    //gtk_table_attach_defaults(GTK_TABLE(op_table),button_acos,0,0,0,0);
    //gtk_table_attach_defaults(GTK_TABLE(op_table),button_atan,0,0,0,0);
    //gtk_table_attach_defaults(GTK_TABLE(op_table),button_inverse,0,0,0,0);
    //gtk_table_attach_defaults(GTK_TABLE(op_table),button_squared,0,0,0,0);

    gtk_container_add(GTK_CONTAINER(window),box1);
    gtk_container_add(GTK_CONTAINER(text_scroll_container),history_space);
    g_signal_connect(window,"destroy",G_CALLBACK(gtk_main_quit),NULL);

    //Numerical
    g_signal_connect(button_0,"clicked",G_CALLBACK(button_0_cb),text_entry);
    g_signal_connect(button_1,"clicked",G_CALLBACK(button_1_cb),text_entry);
    g_signal_connect(button_2,"clicked",G_CALLBACK(button_2_cb),text_entry);
    g_signal_connect(button_3,"clicked",G_CALLBACK(button_3_cb),text_entry);
    g_signal_connect(button_4,"clicked",G_CALLBACK(button_4_cb),text_entry);
    g_signal_connect(button_5,"clicked",G_CALLBACK(button_5_cb),text_entry);
    g_signal_connect(button_6,"clicked",G_CALLBACK(button_6_cb),text_entry);
    g_signal_connect(button_7,"clicked",G_CALLBACK(button_7_cb),text_entry);
    g_signal_connect(button_8,"clicked",G_CALLBACK(button_8_cb),text_entry);
    g_signal_connect(button_9,"clicked",G_CALLBACK(button_9_cb),text_entry);
    g_signal_connect(button_dec,"clicked",G_CALLBACK(button_dec_cb),text_entry);
    g_signal_connect(button_negate,"clicked",G_CALLBACK(button_negate_cb),text_entry);

    g_signal_connect(button_enter,"clicked",G_CALLBACK(button_enter_cb),&cbData);

    g_signal_connect(text_entry,"activate",G_CALLBACK(button_enter_cb),&cbData);

    //Text editing
    g_signal_connect(button_ins,"toggled",G_CALLBACK(button_ins_cb),text_entry);
    g_signal_connect(button_del,"clicked",G_CALLBACK(button_del_cb),text_entry);
    g_signal_connect(button_clear,"clicked",G_CALLBACK(button_clear_cb),text_entry);
    g_signal_connect(button_left,"clicked",G_CALLBACK(button_left_cb),text_entry);
    g_signal_connect(button_right,"clicked",G_CALLBACK(button_right_cb),text_entry);
    g_signal_connect(button_up,"clicked",G_CALLBACK(button_up_cb),text_entry);
    g_signal_connect(button_down,"clicked",G_CALLBACK(button_down_cb),text_entry);

    //Arith
    g_signal_connect(button_add,"clicked",G_CALLBACK(button_add_cb),text_entry);
    g_signal_connect(button_subtract,"clicked",G_CALLBACK(button_subtract_cb),text_entry);
    g_signal_connect(button_divide,"clicked",G_CALLBACK(button_divide_cb),text_entry);
    g_signal_connect(button_multiply,"clicked",G_CALLBACK(button_multiply_cb),text_entry);

    //Math symbols
    g_signal_connect(button_left_parens,"clicked",G_CALLBACK(button_left_parens_cb),text_entry);
    g_signal_connect(button_right_parens,"clicked",G_CALLBACK(button_right_parens_cb),text_entry);
    g_signal_connect(button_raised_to,"clicked",G_CALLBACK(button_raised_to_cb),text_entry);
    g_signal_connect(button_enter_exponent,"clicked",G_CALLBACK(button_enter_exponent_cb),text_entry);
    g_signal_connect(button_milli,"clicked",G_CALLBACK(button_milli_cb),text_entry);
    g_signal_connect(button_micro,"clicked",G_CALLBACK(button_micro_cb),text_entry);
    g_signal_connect(button_nano,"clicked",G_CALLBACK(button_nano_cb),text_entry);
    g_signal_connect(button_pico,"clicked",G_CALLBACK(button_pico_cb),text_entry);
    g_signal_connect(button_exp,"clicked",G_CALLBACK(button_exp_cb),text_entry);
    g_signal_connect(button_ln,"clicked",G_CALLBACK(button_ln_cb),text_entry);
    g_signal_connect(button_sqrt,"clicked",G_CALLBACK(button_sqrt_cb),text_entry);
    g_signal_connect(button_conjugate,"clicked",G_CALLBACK(button_conjugate_cb),text_entry);
    g_signal_connect(button_sin,"clicked",G_CALLBACK(button_sin_cb),text_entry);
    g_signal_connect(button_cos,"clicked",G_CALLBACK(button_cos_cb),text_entry);
    g_signal_connect(button_tan,"clicked",G_CALLBACK(button_tan_cb),text_entry);
    g_signal_connect(button_sinh,"clicked",G_CALLBACK(button_sinh_cb),text_entry);
    g_signal_connect(button_parallel,"clicked",G_CALLBACK(button_parallel_cb),text_entry);
    g_signal_connect(button_phase,"clicked",G_CALLBACK(button_phase_cb),text_entry);
    g_signal_connect(button_magnitude,"clicked",G_CALLBACK(button_magnitude_cb),text_entry);
    g_signal_connect(button_imag,"clicked",G_CALLBACK(button_imag_cb),text_entry);
    g_signal_connect(button_real,"clicked",G_CALLBACK(button_real_cb),text_entry);
    g_signal_connect(button_frac,"clicked",G_CALLBACK(button_frac_cb),text_entry);
    g_signal_connect(button_tau,"clicked",G_CALLBACK(button_tau_cb),text_entry);
    g_signal_connect(button_lc_freq,"clicked",G_CALLBACK(button_lc_freq_cb),text_entry);
    g_signal_connect(button_f_to_w,"clicked",G_CALLBACK(button_f_to_w_cb),text_entry);
    g_signal_connect(button_f_to_t,"clicked",G_CALLBACK(button_f_to_t_cb),text_entry);
    g_signal_connect(button_rad_to_deg,"clicked",G_CALLBACK(button_rad_to_deg_cb),text_entry);

    //Math constants
    g_signal_connect(button_j,"clicked",G_CALLBACK(button_j_cb),text_entry);
    g_signal_connect(button_omega,"clicked",G_CALLBACK(button_omega_cb),text_entry);
    g_signal_connect(button_s,"clicked",G_CALLBACK(button_s_cb),text_entry);

    //Functional
    g_signal_connect(button_var,"clicked",G_CALLBACK(button_var_cb),text_entry);
    g_signal_connect(button_function,"clicked",G_CALLBACK(button_function_cb),text_entry);
    g_signal_connect(button_program,"clicked",G_CALLBACK(button_program_cb),text_entry);
    g_signal_connect(button_graph,"clicked",G_CALLBACK(button_graph_cb),text_entry);
    g_signal_connect(button_alt,"clicked",G_CALLBACK(button_alt_cb),text_entry);

    gtk_widget_show_all(window);
    gtk_main();

    return EXIT_SUCCESS;
}
