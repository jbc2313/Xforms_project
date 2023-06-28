#include <forms.h>

int main(int argc, char **argv)
{
    FL_FORM *form;
    FL_OBJECT *button_one;
    FL_OBJECT *input_one;

    fl_initialize(&argc, argv, 0, 0, 0);

    form = fl_bgn_form(FL_UP_BOX, 440, 200);
    button_one = fl_add_button(FL_NORMAL_BUTTON, 20, 20, 110, 40, "Enter the Matrix");
    input_one = fl_add_input(FL_NORMAL_INPUT, 70, 110, 90, 40, "Filename");
    fl_end_form();


    fl_show_form(form, FL_PLACE_MOUSE, FL_FULLBORDER, "XFORM DEMO");

    fl_do_forms();

    fl_hide_form(form);
    fl_finish();
    return 0;
}
