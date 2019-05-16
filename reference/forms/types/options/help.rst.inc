help
~~~~

**type**: ``string`` **default**: null

Allows you to define a help message for the form field, which by default is
rendered below the field::

    $builder->add('zipCode', null, [
        'help' => 'The ZIP/Postal code for your credit card\'s billing address.',
    ]);

.. ready: no
.. revision: 4e8e7925ce6ff56433aa480a7ee41f4b3cd90666