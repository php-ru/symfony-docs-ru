How to Hide Console Commands
============================

By default, all console commands are listed when executing the console application
script without arguments or when using the ``list`` command.

However, sometimes commands are not intended to be executed by end-users; for
example, commands for the legacy parts of the application, commands exclusively
executed through scheduled tasks, etc.

In those cases, you can define the command as **hidden** by setting the
``setHidden()`` method to ``true`` in the command configuration::

    // src/AppBundle/Command/LegacyCommand.php
    namespace AppBundle\Command;

    use Symfony\Component\Console\Command\Command;

    class LegacyCommand extends Command
    {
        protected static $defaultName = 'app:legacy';

        protected function configure()
        {
            $this
                ->setHidden(true)
                // ...
            ;
        }
    }

Hidden commands behave the same as normal commands but they are no longer displayed
in command listings, so end-users are not aware of their existence.

.. note::

    Hidden commands are still available using the JSON or XML descriptor.

.. ready: no
.. revision: 1e50fcf7cbf730344ce5179a26aa0b4d5927766a