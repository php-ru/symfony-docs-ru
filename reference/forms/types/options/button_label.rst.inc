label
~~~~~

**type**: ``string`` **default**: The label is "guessed" from the field name

Sets the label that will be displayed on the button. The label can also
be directly set inside the template:

.. configuration-block::

    .. code-block:: html+twig

        {{ form_widget(form.save, { 'label': 'Click me' }) }}

    .. code-block:: html+php

        <?= $view['form']->widget($form['save'], ['label' => 'Click me']) ?>

.. ready: no
.. revision: a4440f903683700db6b3cbd281387684af93bc42