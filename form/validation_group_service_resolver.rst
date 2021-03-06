How to Dynamically Configure Form Validation Groups
===================================================

Sometimes you need advanced logic to determine the validation groups. If they
can't be determined by a simple callback, you can use a service. Create a
service that implements ``__invoke()`` which accepts a ``FormInterface`` as a
parameter::

    // src/Validation/ValidationGroupResolver.php
    namespace App\Validation;

    use Symfony\Component\Form\FormInterface;

    class ValidationGroupResolver
    {
        private $service1;

        private $service2;

        public function __construct($service1, $service2)
        {
            $this->service1 = $service1;
            $this->service2 = $service2;
        }

        /**
         * @param FormInterface $form
         * @return array
         */
        public function __invoke(FormInterface $form)
        {
            $groups = [];

            // ... determine which groups to apply and return an array

            return $groups;
        }
    }

Then in your form, inject the resolver and set it as the ``validation_groups``::

    // src/Form/MyClassType.php;
    namespace App\Form;

    use App\Validator\ValidationGroupResolver;
    use Symfony\Component\Form\AbstractType
    use Symfony\Component\OptionsResolver\OptionsResolver;

    class MyClassType extends AbstractType
    {
        private $groupResolver;

        public function __construct(ValidationGroupResolver $groupResolver)
        {
            $this->groupResolver = $groupResolver;
        }

        // ...
        public function configureOptions(OptionsResolver $resolver)
        {
            $resolver->setDefaults([
                'validation_groups' => $this->groupResolver,
            ]);
        }
    }

This will result in the form validator invoking your group resolver to set the
validation groups returned when validating.

.. ready: no
.. revision: f2e6e1acc75b3e461e95a8a6a6940cc2289225bd