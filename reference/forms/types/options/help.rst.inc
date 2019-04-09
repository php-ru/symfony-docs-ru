help
~~~~

**type**: ``string`` **default**: null

Allows you to define a help message for the form field, which by default is
rendered below the field::

    $builder->add('zip_code', null, [
        'help' => 'The ZIP/Postal code for your credit card\'s billing address.',
    ]);

.. ready: no
.. revision: 167329811b60c49e8b5b97dd394f6a9ebcfb68aa