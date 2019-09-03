.. index::
   single: Form; Form::submit()

How to Use the submit() Function to Handle Form Submissions
===========================================================

The recommended way of :ref:`processing Symfony forms <processing-forms>` is to
use the :method:`Symfony\\Component\\Form\\FormInterface::handleRequest` method
to detect when the form has been submitted. However, you can also use the
:method:`Symfony\\Component\\Form\\FormInterface::submit` method to have better
control over when exactly your form is submitted and what data is passed to it::

    use Symfony\Component\HttpFoundation\Request;
    // ...

    public function new(Request $request)
    {
        $form = $this->createForm(TaskType::class, $task);

        if ($request->isMethod('POST')) {
            $form->submit($request->request->get($form->getName()));

            if ($form->isSubmitted() && $form->isValid()) {
                // perform some action...

                return $this->redirectToRoute('task_success');
            }
        }

        return $this->render('task/new.html.twig', [
            'form' => $form->createView(),
        ]);
    }

.. tip::

    Forms consisting of nested fields expect an array in
    :method:`Symfony\\Component\\Form\\FormInterface::submit`. You can also submit
    individual fields by calling :method:`Symfony\\Component\\Form\\FormInterface::submit`
    directly on the field::

        $form->get('firstName')->submit('Fabien');

.. tip::

    When submitting a form via a "PATCH" request, you may want to update only a few
    submitted fields. To achieve this, you may pass an optional second boolean
    argument to ``submit()``. Passing ``false`` will remove any missing fields
    within the form object. Otherwise, the missing fields will be set to ``null``.

.. caution::

    When the second parameter ``$clearMissing`` is ``false``, like with the
    "PATCH" method, the validation extension will only handle the submitted
    fields. If the underlying data needs to be validated, this should be done
    manually, i.e. using the validator.

.. ready: no
.. revision: 3f0406f0c645544d213efeefe125dbc0bba8902d