help
~~~~

**type**: ``string`` **default**: null

Allows you to define a help message for the form field, which by default is
rendered below the field.

.. code-block:: php

    $builder->add('zip_code', null, [
        'help' => 'The ZIP/Postal code for your credit card\'s billing address.',
    ]);

.. ready: no
.. revision: b6dc182f67452ae09564eb6d1cd2fd0bff6aa475