help
~~~~

**type**: ``string`` **default**: null

Allows you to define a help message for the form field, which by default is
rendered below the field.

.. code-block:: php

    $builder->add('zip_code', null, array(
        'help' => 'The ZIP/Postal code for your credit card\'s billing address.',
    ));

.. ready: no
.. revision: 7092329589d45e03ff7d528a02f1dee9fa565d96