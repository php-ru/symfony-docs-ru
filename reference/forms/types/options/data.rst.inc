data
~~~~

**type**: ``mixed`` **default**: Defaults to field of the underlying structure.

When you create a form, each field initially displays the value of the
corresponding property of the form's domain data (e.g. if you bind an object to
the form). If you want to override this initial value for the form or
an individual field, you can set it in the data option::


    use Symfony\Component\Form\Extension\Core\Type\HiddenType;
    // ...

    $builder->add('token', HiddenType::class, [
        'data' => 'abcdef',
    ]);

.. caution::

    The ``data`` option *always* overrides the value taken from the domain data
    (object) when rendering. This means the object value is also overridden when
    the form edits an already persisted object, causing it to lose its
    persisted value when the form is submitted.

.. ready: no
.. revision: e6c21b2d78e6e420b37099fb250122793f5857c2