label_attr
~~~~~~~~~~

**type**: ``array`` **default**: ``[]``

Sets the HTML attributes for the ``<label>`` element, which will be used
when rendering the label for the field. It's an associative array with HTML
attribute as a key. This attributes can also be directly set inside the
template:

.. configuration-block::

    .. code-block:: twig

        {{ form_label(form.name, 'Your name', {
               'label_attr': {'class': 'CUSTOM_LABEL_CLASS'}
        }) }}

    .. code-block:: php

        echo $view['form']->label(
            $form['name'],
            'Your name',
            ['label_attr' => ['class' => 'CUSTOM_LABEL_CLASS']]
        );

.. ready: no
.. revision: eac8e9052919cdd186f9f711a91e95e3f2fdc96e