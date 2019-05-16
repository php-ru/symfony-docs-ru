invalid_message_parameters
~~~~~~~~~~~~~~~~~~~~~~~~~~

**type**: ``array`` **default**: ``[]``

When setting the ``invalid_message`` option, you may need to
include some variables in the string. This can be done by adding placeholders
to that option and including the variables in this option::

    $builder->add('someField', SomeFormType::class, [
        // ...
        'invalid_message' => 'You entered an invalid value, it should include %num% letters',
        'invalid_message_parameters' => ['%num%' => 6],
    ]);

.. ready: no
.. revision: 2d7f03b094d8921ec41692bd048c6a1cd42f5f09