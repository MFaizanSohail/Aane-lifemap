Custom Input
============

The Custom Input module adds options to the standard Field API Manage Fields UI
to give site builders more control over form display.

In particular, for each supported field type, site builders can specify:
- a user prompt to use on forms in lieu of the field label
- additional CSS classes to apply to the wrapper div, the input, the label and the help description
- arbitrary HTML attributes to be added to the input, label and help elements
As an odd, additional benefit, because my wife likes it, you can move the display
of the help text so that it is output after the label, instead of at the end of the field.
AND, because the limitations of the Prepopulate module were annoying me, it also permits
field values to be supplied by a URL query parameter.

Use cases include:
- adding grid classes to form elements to help with sizing and responsiveness
- adding classes that identify form elements for javascript validation libraries
- using HTML5 input types like "email", "tel", "url", etc.
- adding attributes that improve the usability and accessibility of the form, like "placeholder", "autofocus"

Not all field types or widgets are supported, and many are only partially supported.
Adding a class to the wrapper div and changing the prompt will work for the vast
majority of elements.  For partial details, see below.

Tested with:
Text fields/widget -- works
Multiple text fields/widget -- works
Text area/multi row widget - works
Checkboxes -- works.  Note that the "input" class is applied to
the div that wraps around the box and label, not to the checkbox itself.
Select -- works.
Email/text field - works
Autocomplete - works
Link/link - Works for: prompt, wrapper class, help; input class/attr, label class/attr are applied to subfields.
            Does not: group class.
Date/pop-up calendar -- Works for: prompt, wrapper class, input and label classes are applied to subfields.
                        Does not: group class, help.
Numeric fields using text widget -- should all work, some not tested
Integer/Select or Other checkbox (1 value, not required) -- Works for: prompt, wrapper class, help is moved ABOVE the prompt.
                                                            Input class/attr is applied to the "other" box.
Body -- Works for: prompt, wrapper class.
Long formatted text - like body.

Does not work with node title fields, which are not conventional fields.

Known Problems
=======================
Zurb Foundation theme tooltips -- if turned on, your help text gets nuked.

Areas for Future Development
========================
Testing, testing, testing.
Add submodules that can modify more complex fields like date popups and addressfields and/or provide hooks for other modules
to supplement what this module does.
Add ability to modify title fields, possibly using the technique employed by the maxlength module.

Technical Details
==================
In overview, the module:

1. Adds a Custom Input fieldset to the field settings form to collect settings info.

2. Creates 4 theme hooks to permit the module to override the default theme hooks
without mucking up non-custom fields.  Respectively: custom_input_element (replaces theme_form_element),
custom_input_element_label (theme_form_element_label), custom_input_multiple_element
(the strangely named theme_field_multiple_value_form), and custom_input_textfield (theme_textfield).
The main purppose of the theme_textfield override is to permit use of HTML5 input types without
having to get the elements module involved.

3. Using hook_field_attach_form(), the module decides whether the field should be
processed by custom_input.  If so, it attaches a copy of the settings to the element
and adds a pre_render function - custom_input_pre_render()

4. The pre_render function applies applicable settings to the current element--
changes overridden theme hooks, applicable prompt, classes and attributes--then
adds itself as a callback to the element's children so it can do it all over again.

Things the module definitely cannot and will never do:
Change the prompt on multi-valued elements.  Although it could add the prompt to the individual values,
this seems unwise.

