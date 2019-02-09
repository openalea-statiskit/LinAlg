#include "_linalg.h"

class ::Eigen::SparseMatrix< double, 0, int > & (::Eigen::EigenBase< ::Eigen::SparseMatrix< double, 0, int > >::*method_pointer_eb66260b65395336b6c00ebb6424a2ec)()= &::Eigen::EigenBase< class ::Eigen::SparseMatrix< double, 0, int > >::derived;
class ::Eigen::SparseMatrix< double, 0, int > const & (::Eigen::EigenBase< ::Eigen::SparseMatrix< double, 0, int > >::*method_pointer_fb75e8c7bcbc576d9a96791d419ee965)()const= &::Eigen::EigenBase< class ::Eigen::SparseMatrix< double, 0, int > >::derived;
class ::Eigen::SparseMatrix< double, 0, int > & (::Eigen::EigenBase< ::Eigen::SparseMatrix< double, 0, int > >::*method_pointer_7b6a992f6027598ba96da8da6f9214eb)()const= &::Eigen::EigenBase< class ::Eigen::SparseMatrix< double, 0, int > >::const_cast_derived;
class ::Eigen::SparseMatrix< double, 0, int > const & (::Eigen::EigenBase< ::Eigen::SparseMatrix< double, 0, int > >::*method_pointer_77ecf7c2b26e54899fe8d16a44f6255a)()const= &::Eigen::EigenBase< class ::Eigen::SparseMatrix< double, 0, int > >::const_derived;
::Eigen::EigenBase< class ::Eigen::SparseMatrix< double, 0, int > >::Index  (::Eigen::EigenBase< ::Eigen::SparseMatrix< double, 0, int > >::*method_pointer_995eed1e0fcb57bc915039f6660d8b33)()const= &::Eigen::EigenBase< class ::Eigen::SparseMatrix< double, 0, int > >::rows;
::Eigen::EigenBase< class ::Eigen::SparseMatrix< double, 0, int > >::Index  (::Eigen::EigenBase< ::Eigen::SparseMatrix< double, 0, int > >::*method_pointer_b7b88472952d524e9aa68fa67db4a4f9)()const= &::Eigen::EigenBase< class ::Eigen::SparseMatrix< double, 0, int > >::cols;
::Eigen::EigenBase< class ::Eigen::SparseMatrix< double, 0, int > >::Index  (::Eigen::EigenBase< ::Eigen::SparseMatrix< double, 0, int > >::*method_pointer_b50718ce8692547f92fe6f696a2a65f1)()const= &::Eigen::EigenBase< class ::Eigen::SparseMatrix< double, 0, int > >::size;

namespace autowig {
    void method_decorator_eb66260b65395336b6c00ebb6424a2ec(struct ::Eigen::EigenBase< class ::Eigen::SparseMatrix< double, 0, int > > & instance, const class ::Eigen::SparseMatrix< double, 0, int > & param_out) { instance.derived() = param_out; }
    void method_decorator_7b6a992f6027598ba96da8da6f9214eb(struct ::Eigen::EigenBase< class ::Eigen::SparseMatrix< double, 0, int > > const & instance, const class ::Eigen::SparseMatrix< double, 0, int > & param_out) { instance.const_cast_derived() = param_out; }
}

void wrapper_9621756684cd514fb12cb6625abf6b14(pybind11::module& module)
{

    pybind11::class_<struct ::Eigen::EigenBase< class ::Eigen::SparseMatrix< double, 0, int > >, autowig::HolderType< struct ::Eigen::EigenBase< class ::Eigen::SparseMatrix< double, 0, int > > >::Type > class_9621756684cd514fb12cb6625abf6b14(module, "_EigenBase_9621756684cd514fb12cb6625abf6b14", "");
    class_9621756684cd514fb12cb6625abf6b14.def(pybind11::init< struct ::Eigen::EigenBase< class ::Eigen::SparseMatrix< double, 0, int > > const & >());
    class_9621756684cd514fb12cb6625abf6b14.def(pybind11::init<  >());
    class_9621756684cd514fb12cb6625abf6b14.def("derived", method_pointer_eb66260b65395336b6c00ebb6424a2ec, pybind11::return_value_policy::reference_internal, "");
    class_9621756684cd514fb12cb6625abf6b14.def("derived", autowig::method_decorator_eb66260b65395336b6c00ebb6424a2ec);
    class_9621756684cd514fb12cb6625abf6b14.def("derived", method_pointer_fb75e8c7bcbc576d9a96791d419ee965, pybind11::return_value_policy::copy, "");
    class_9621756684cd514fb12cb6625abf6b14.def("const_cast_derived", method_pointer_7b6a992f6027598ba96da8da6f9214eb, pybind11::return_value_policy::reference_internal, "");
    class_9621756684cd514fb12cb6625abf6b14.def("const_cast_derived", autowig::method_decorator_7b6a992f6027598ba96da8da6f9214eb);
    class_9621756684cd514fb12cb6625abf6b14.def("const_derived", method_pointer_77ecf7c2b26e54899fe8d16a44f6255a, pybind11::return_value_policy::copy, "");
    class_9621756684cd514fb12cb6625abf6b14.def("rows", method_pointer_995eed1e0fcb57bc915039f6660d8b33, "");
    class_9621756684cd514fb12cb6625abf6b14.def("cols", method_pointer_b7b88472952d524e9aa68fa67db4a4f9, "");
    class_9621756684cd514fb12cb6625abf6b14.def("__len__", method_pointer_b50718ce8692547f92fe6f696a2a65f1, "");

}