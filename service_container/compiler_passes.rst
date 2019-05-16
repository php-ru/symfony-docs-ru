.. index::
   single: DependencyInjection; Compiler passes
   single: Service Container; Compiler passes

How to Work with Compiler Passes in Bundles
===========================================

Compiler passes give you an opportunity to manipulate other
:doc:`service definitions </service_container/definitions>` that have been
registered with the service container. You can read about how to create them in
the components section ":ref:`components-di-separate-compiler-passes`".

When using :ref:`separate compiler passes <components-di-separate-compiler-passes>`,
you need to register them in the ``build()`` method of the bundle class (this
is not needed when implementing the ``process()`` method in the extension)::

    // src/AppBundle/AppBundle.php
    namespace AppBundle;

    use AppBundle\DependencyInjection\Compiler\CustomPass;
    use Symfony\Component\DependencyInjection\ContainerBuilder;
    use Symfony\Component\HttpKernel\Bundle\Bundle;

    class AppBundle extends Bundle
    {
        public function build(ContainerBuilder $container)
        {
            parent::build($container);

            $container->addCompilerPass(new CustomPass());
        }
    }

One of the most common use-cases of compiler passes is to work with
":doc:`service tags </service_container/tags>`". If you are using
custom tags in a bundle then by convention, tag names consist of the name of
the bundle (lowercase, underscores as separators), followed by a dot, and
finally the "real" name. For example, if you want to introduce some sort of
"transport" tag in your AcmeMailerBundle, you should call it
``acme_mailer.transport``.

.. ready: no
.. revision: 3506a7e8ca6f3fa58f05e1fcfc5c1552094007d1