# Passed with `--extra-python`: runs in the namespace of the module.

def make_a(x):
    """Makes an `A` with this `x`."""
    a = A()
    a.x = x
    return a
