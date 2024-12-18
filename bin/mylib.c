#include <caml/mlvalues.h>
#include <caml/memory.h>
#include <caml/alloc.h>
#include <caml/custom.h>
#include <caml/fail.h>

// Example C function
CAMLprim value add_integers(value v1, value v2) {
    CAMLparam2(v1, v2);
    int result = Int_val(v1) + Int_val(v2);
    CAMLreturn(Val_int(result));
}

