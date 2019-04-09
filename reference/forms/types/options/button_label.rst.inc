label
~~~~~

**type**: ``string`` **default**: The label is "guessed" from the field name

Sets the label that will be displayed on the button. The label can also
be directly set inside the template:

.. configuration-block::

    .. code-block:: twig

        {{ form_widget(form.save, { 'label': 'Click me' }) }}

    .. code-block:: html+php

        <?= $view['form']->widget($form['save'], ['label' => 'Click me']) ?>

.. ready: no
.. revision: 7c1cf8a7149d641ac11e55169de4c7e2561e46f2