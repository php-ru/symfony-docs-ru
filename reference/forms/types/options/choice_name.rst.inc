choice_name
~~~~~~~~~~~

**type**: ``callable`` or ``string`` **default**: ``null``

Controls the internal field name of the choice. You normally don't care about this,
but in some advanced cases, you might. For example, this "name" becomes the index
of the choice views in the template.

This can be a callable or a property path. See `choice_label`_ for similar usage.
If ``null`` is used, an incrementing integer is used as the name.

.. caution::

    The configured value must be a valid form name. Make sure to only return
    valid names when using a callable. Valid form names must be composed of
    letters, digits, underscores, dashes and colons and must not start with
    a dash or a colon.

.. ready: no
.. revision: e4c3795197fb1c058c140aebb3484ea0ab151e8c