#include "_linalg.h"

class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_75e385c9409f5665be3cc295752cbe9c)()= &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::derived;
class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_d6168f453aad5eb78568cd9d26b96d63)()const= &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::derived;
class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_3bf257cd57fa53c1b4b86fb3b32bbd51)()const= &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::const_cast_derived;
class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_4f1ecfdd623653459de65cb3563e6d0b)()const= &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::const_derived;
::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::Index  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_58a1672238995d22b3640bc1160216bd)()const= &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::rows;
::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::Index  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_f425178db5b757ebbda9b04a340a38d8)()const= &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::cols;
::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::Index  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_1aedcda04480500e913ca5cf909f41c5)()const= &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::size;

namespace autowig {
    void method_decorator_75e385c9409f5665be3cc295752cbe9c(struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > & instance, const class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & param_out) { instance.derived() = param_out; }
    void method_decorator_3bf257cd57fa53c1b4b86fb3b32bbd51(struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > const & instance, const class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & param_out) { instance.const_cast_derived() = param_out; }
}

void wrapper_ba842f1f143455d780ab0a38939a9234(pybind11::module& module)
{

    pybind11::class_<struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >, autowig::HolderType< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > >::Type > class_ba842f1f143455d780ab0a38939a9234(module, "_EigenBase_ba842f1f143455d780ab0a38939a9234", "");
    class_ba842f1f143455d780ab0a38939a9234.def(pybind11::init< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > const & >());
    class_ba842f1f143455d780ab0a38939a9234.def(pybind11::init<  >());
    class_ba842f1f143455d780ab0a38939a9234.def("derived", method_pointer_75e385c9409f5665be3cc295752cbe9c, pybind11::return_value_policy::reference_internal, "");
    class_ba842f1f143455d780ab0a38939a9234.def("derived", autowig::method_decorator_75e385c9409f5665be3cc295752cbe9c);
    class_ba842f1f143455d780ab0a38939a9234.def("derived", method_pointer_d6168f453aad5eb78568cd9d26b96d63, pybind11::return_value_policy::copy, "");
    class_ba842f1f143455d780ab0a38939a9234.def("const_cast_derived", method_pointer_3bf257cd57fa53c1b4b86fb3b32bbd51, pybind11::return_value_policy::reference_internal, "");
    class_ba842f1f143455d780ab0a38939a9234.def("const_cast_derived", autowig::method_decorator_3bf257cd57fa53c1b4b86fb3b32bbd51);
    class_ba842f1f143455d780ab0a38939a9234.def("const_derived", method_pointer_4f1ecfdd623653459de65cb3563e6d0b, pybind11::return_value_policy::copy, "");
    class_ba842f1f143455d780ab0a38939a9234.def("rows", method_pointer_58a1672238995d22b3640bc1160216bd, "");
    class_ba842f1f143455d780ab0a38939a9234.def("cols", method_pointer_f425178db5b757ebbda9b04a340a38d8, "");
    class_ba842f1f143455d780ab0a38939a9234.def("__len__", method_pointer_1aedcda04480500e913ca5cf909f41c5, "");

}