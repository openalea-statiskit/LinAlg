#include "_linalg.h"

class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_f43732f846a8545c9ed00719034ff108)()= &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::derived;
class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_246258cef7c45ea79ce67a1111303f20)()const= &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::derived;
class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_c6ed876e455d54c0ae9818b8b4f9380e)()const= &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::const_cast_derived;
class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_926913bd76985ef78586d2563c568a15)()const= &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::const_derived;
::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::Index  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_23d36a47e6f85206a667e80613448df8)()const= &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::rows;
::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::Index  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_875f087a26985ce2acf5337917042e59)()const= &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::cols;
::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::Index  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::*method_pointer_5cbaf2c47730517bbba13c8fe222a962)()const= &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::size;

namespace autowig {
    void method_decorator_f43732f846a8545c9ed00719034ff108(struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > & instance, const class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & param_out) { instance.derived() = param_out; }
    void method_decorator_c6ed876e455d54c0ae9818b8b4f9380e(struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > const & instance, const class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & param_out) { instance.const_cast_derived() = param_out; }
}

void wrapper_32d9268c82ed5cc19bc33d4ee72a3380(pybind11::module& module)
{

    pybind11::class_<struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >, autowig::HolderType< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > >::Type > class_32d9268c82ed5cc19bc33d4ee72a3380(module, "_EigenBase_32d9268c82ed5cc19bc33d4ee72a3380", "");
    class_32d9268c82ed5cc19bc33d4ee72a3380.def(pybind11::init< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > > const & >());
    class_32d9268c82ed5cc19bc33d4ee72a3380.def(pybind11::init<  >());
    class_32d9268c82ed5cc19bc33d4ee72a3380.def("derived", method_pointer_f43732f846a8545c9ed00719034ff108, pybind11::return_value_policy::reference_internal, "");
    class_32d9268c82ed5cc19bc33d4ee72a3380.def("derived", autowig::method_decorator_f43732f846a8545c9ed00719034ff108);
    class_32d9268c82ed5cc19bc33d4ee72a3380.def("derived", method_pointer_246258cef7c45ea79ce67a1111303f20, pybind11::return_value_policy::copy, "");
    class_32d9268c82ed5cc19bc33d4ee72a3380.def("const_cast_derived", method_pointer_c6ed876e455d54c0ae9818b8b4f9380e, pybind11::return_value_policy::reference_internal, "");
    class_32d9268c82ed5cc19bc33d4ee72a3380.def("const_cast_derived", autowig::method_decorator_c6ed876e455d54c0ae9818b8b4f9380e);
    class_32d9268c82ed5cc19bc33d4ee72a3380.def("const_derived", method_pointer_926913bd76985ef78586d2563c568a15, pybind11::return_value_policy::copy, "");
    class_32d9268c82ed5cc19bc33d4ee72a3380.def("rows", method_pointer_23d36a47e6f85206a667e80613448df8, "");
    class_32d9268c82ed5cc19bc33d4ee72a3380.def("cols", method_pointer_875f087a26985ce2acf5337917042e59, "");
    class_32d9268c82ed5cc19bc33d4ee72a3380.def("__len__", method_pointer_5cbaf2c47730517bbba13c8fe222a962, "");

}