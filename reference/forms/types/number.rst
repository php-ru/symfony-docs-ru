.. index::
   single: Forms; Fields; NumberType

NumberType Field
================

Renders an input text field and specializes in handling number input. This
type offers different options for the scale, rounding and grouping
that you want to use for your number.

+-------------+----------------------------------------------------------------------+
| Rendered as | ``input`` ``text`` field                                             |
+-------------+----------------------------------------------------------------------+
| Options     | - `grouping`_                                                        |
|             | - `scale`_                                                           |
|             | - `rounding_mode`_                                                   |
+-------------+----------------------------------------------------------------------+
| Overridden  | - `compound`_                                                        |
| options     |                                                                      |
+-------------+----------------------------------------------------------------------+
| Inherited   | - `data`_                                                            |
| options     | - `disabled`_                                                        |
|             | - `empty_data`_                                                      |
|             | - `error_bubbling`_                                                  |
|             | - `error_mapping`_                                                   |
|             | - `help`_                                                            |
|             | - `help_attr`_                                                       |
|             | - `help_html`_                                                       |
|             | - `invalid_message`_                                                 |
|             | - `invalid_message_parameters`_                                      |
|             | - `label`_                                                           |
|             | - `label_attr`_                                                      |
|             | - `label_format`_                                                    |
|             | - `mapped`_                                                          |
|             | - `required`_                                                        |
+-------------+----------------------------------------------------------------------+
| Parent type | :doc:`FormType </reference/forms/types/form>`                        |
+-------------+----------------------------------------------------------------------+
| Class       | :class:`Symfony\\Component\\Form\\Extension\\Core\\Type\\NumberType` |
+-------------+----------------------------------------------------------------------+

.. include:: /reference/forms/types/options/_debug_form.rst.inc

Field Options
-------------

.. include:: /reference/forms/types/options/grouping.rst.inc

scale
~~~~~

**type**: ``integer`` **default**: Locale-specific (usually around ``3``)

This specifies how many decimals will be allowed until the field rounds
the submitted value (via ``rounding_mode``). For example, if ``scale`` is set
to ``2``, a submitted value of ``20.123`` will be rounded to, for example,
``20.12`` (depending on your `rounding_mode`_).

.. include:: /reference/forms/types/options/rounding_mode.rst.inc

Overridden Options
------------------

.. include:: /reference/forms/types/options/compound_type.rst.inc

Inherited Options
-----------------

These options inherit from the :doc:`FormType </reference/forms/types/form>`:

.. include:: /reference/forms/types/options/data.rst.inc

.. include:: /reference/forms/types/options/disabled.rst.inc

.. include:: /reference/forms/types/options/empty_data.rst.inc
    :end-before: DEFAULT_PLACEHOLDER

The default value is ``''`` (the empty string).

.. include:: /reference/forms/types/options/empty_data.rst.inc
    :start-after: DEFAULT_PLACEHOLDER

.. include:: /reference/forms/types/options/error_bubbling.rst.inc

.. include:: /reference/forms/types/options/error_mapping.rst.inc

.. include:: /reference/forms/types/options/help.rst.inc

.. include:: /reference/forms/types/options/help_attr.rst.inc

.. include:: /reference/forms/types/options/help_html.rst.inc

.. include:: /reference/forms/types/options/invalid_message.rst.inc

.. include:: /reference/forms/types/options/invalid_message_parameters.rst.inc

.. include:: /reference/forms/types/options/label.rst.inc

.. include:: /reference/forms/types/options/label_attr.rst.inc

.. include:: /reference/forms/types/options/label_format.rst.inc

.. include:: /reference/forms/types/options/mapped.rst.inc

.. include:: /reference/forms/types/options/required.rst.inc

.. ready: no
.. revision: cc6a5f30beef994adf0de13510be5edcc49d15ee