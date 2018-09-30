.. note::

    As with most of the other constraints, ``null`` values and empty strings
    are considered valid values. Otherwise, in addition to validating this value,
    you would also be requiring it, making it impossible to be optional. That's
    why it's common to combine this constraint with
    :doc:`NotBlank </reference/constraints/NotBlank>`.

.. ready: no
.. revision: 24ed17e4dfc18e8a1c4f7b818eaa9934fc1779b5