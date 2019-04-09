Timezone
========

.. versionadded:: 4.3

    The ``Timezone`` constraint was introduced in Symfony 4.3.

Validates that a value is a valid timezone identifier (e.g. ``Europe/Paris``).

==========  ======================================================================
Applies to  :ref:`property or method <validation-property-target>`
Options     - `groups`_
            - `message`_
            - `payload`_
            - `zone`_
            - `countryCode`_
Class       :class:`Symfony\\Component\\Validator\\Constraints\\Timezone`
Validator   :class:`Symfony\\Component\\Validator\\Constraints\\TimezoneValidator`
==========  ======================================================================

Basic Usage
-----------

Suppose you have a ``UserSettings`` class, with a ``timezone`` field that is a
string meant to contain a timezone identifier (e.g. ``America/New_York``):

.. configuration-block::

    .. code-block:: php-annotations

        // src/Entity/UserSettings.php
        namespace App\Entity;

        use Symfony\Component\Validator\Constraints as Assert;

        class UserSettings
        {
            /**
             * @Assert\Timezone
             */
             protected $timezone;
        }

    .. code-block:: yaml

        # config/validator/validation.yaml
        App\Entity\UserSettings:
            properties:
                timezone:
                    - Timezone: ~

    .. code-block:: xml

        <!-- config/validator/validation.xml -->
        <?xml version="1.0" encoding="UTF-8" ?>
        <constraint-mapping xmlns="http://symfony.com/schema/dic/constraint-mapping"
            xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
            xsi:schemaLocation="http://symfony.com/schema/dic/constraint-mapping https://symfony.com/schema/dic/constraint-mapping/constraint-mapping-1.0.xsd">

            <class name="App\Entity\UserSettings">
                <property name="timezone">
                    <constraint name="Timezone"/>
                </property>
            </class>
        </constraint-mapping>

    .. code-block:: php

        // src/Entity/UserSettings.php
        namespace App\Entity;

        use Symfony\Component\Validator\Mapping\ClassMetadata;
        use Symfony\Component\Validator\Constraints as Assert;

        class UserSettings
        {
            protected $timezone;

            public static function loadValidatorMetadata(ClassMetadata $metadata)
            {
                $metadata->addPropertyConstraint('timezone', new Assert\Timezone());
            }
        }

.. include:: /reference/constraints/_empty-values-are-valid.rst.inc

Options
-------

.. include:: /reference/constraints/_groups-option.rst.inc

message
~~~~~~~

**type**: ``string`` **default**: ``This value is not a valid timezone.``

This message is shown if the underlying data is not a valid timezone identifier.

You can use the following parameters in this message:

===============  ==============================================================
Parameter        Description
===============  ==============================================================
``{{ value }}``  The current (invalid) value
===============  ==============================================================

.. include:: /reference/constraints/_payload-option.rst.inc

zone
~~~~

**type**: ``string`` **default**: ``\DateTimeZone::ALL``

Set this option to any of the following constants to restrict the valid timezone
identifiers to the ones that belong to that geographical zone:

* ``\DateTimeZone::AFRICA``
* ``\DateTimeZone::AMERICA``
* ``\DateTimeZone::ANTARCTICA``
* ``\DateTimeZone::ARCTIC``
* ``\DateTimeZone::ASIA``
* ``\DateTimeZone::ATLANTIC``
* ``\DateTimeZone::AUSTRALIA``
* ``\DateTimeZone::EUROPE``
* ``\DateTimeZone::INDIAN``
* ``\DateTimeZone::PACIFIC``

The special ``\DateTimeZone::ALL`` zone accepts any timezone excluding deprecated timezones.

The special ``\DateTimeZone::ALL_WITH_BC`` zone accepts any timezone including deprecated timezones.

The special ``\DateTimeZone::PER_COUNTRY`` zone limits the timezones to a certain country. This zone
value must be used in combination with the ``countryCode`` option.

countryCode
~~~~~~~~~~~

**type**: ``string`` **default**: ``null``

If the ``zone`` option is set to ``\DateTimeZone::PER_COUNTRY``, this option
restricts the valid timezone identifiers to the ones that belong to the given
country.

The value of this option must be a valid `ISO 3166-1 alpha-2`_ country code
(e.g. ``CN`` for China).

.. _`DateTimeZone`: https://www.php.net/datetimezone
.. _`ISO 3166-1 alpha-2`: https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2

.. ready: no
.. revision: 0cba12ea6e3636ede738d588faf9f7b6b627743e