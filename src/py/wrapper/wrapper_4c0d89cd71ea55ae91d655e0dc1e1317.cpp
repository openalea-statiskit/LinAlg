#include "_linalg.h"

class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & (::Eigen::EigenBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_29ce0efc5fe55763ac1604299774deb6)()= &::Eigen::EigenBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::derived;
class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & (::Eigen::EigenBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_95bd3e11cdfe5087a744c340a0173b97)()const= &::Eigen::EigenBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::derived;
class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & (::Eigen::EigenBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_97f96c9b783755cd9b3d9f4c9b1f0d22)()const= &::Eigen::EigenBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::const_cast_derived;
class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & (::Eigen::EigenBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_fb767cf503fe5ecd9e300759b941b511)()const= &::Eigen::EigenBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::const_derived;
::Eigen::EigenBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Index  (::Eigen::EigenBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_01c67e14f8f25c8d993c55b25bc11ae7)()const= &::Eigen::EigenBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::rows;
::Eigen::EigenBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Index  (::Eigen::EigenBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_e2b207f050d95644b769dbf2d8db49ff)()const= &::Eigen::EigenBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::cols;
::Eigen::EigenBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Index  (::Eigen::EigenBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_721971798f995d4cbf351ed59c0d39fb)()const= &::Eigen::EigenBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::size;

namespace autowig {
    void method_decorator_29ce0efc5fe55763ac1604299774deb6(struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, const class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_out) { instance.derived() = param_out; }
    void method_decorator_97f96c9b783755cd9b3d9f4c9b1f0d22(struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const & instance, const class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_out) { instance.const_cast_derived() = param_out; }
}

void wrapper_4c0d89cd71ea55ae91d655e0dc1e1317(pybind11::module& module)
{

    pybind11::class_<struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >, autowig::HolderType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::Type > class_4c0d89cd71ea55ae91d655e0dc1e1317(module, "_EigenBase_4c0d89cd71ea55ae91d655e0dc1e1317", "");
    class_4c0d89cd71ea55ae91d655e0dc1e1317.def(pybind11::init< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const & >());
    class_4c0d89cd71ea55ae91d655e0dc1e1317.def(pybind11::init<  >());
    class_4c0d89cd71ea55ae91d655e0dc1e1317.def("derived", method_pointer_29ce0efc5fe55763ac1604299774deb6, pybind11::return_value_policy::reference_internal, "");
    class_4c0d89cd71ea55ae91d655e0dc1e1317.def("derived", autowig::method_decorator_29ce0efc5fe55763ac1604299774deb6);
    class_4c0d89cd71ea55ae91d655e0dc1e1317.def("derived", method_pointer_95bd3e11cdfe5087a744c340a0173b97, pybind11::return_value_policy::copy, "");
    class_4c0d89cd71ea55ae91d655e0dc1e1317.def("const_cast_derived", method_pointer_97f96c9b783755cd9b3d9f4c9b1f0d22, pybind11::return_value_policy::reference_internal, "");
    class_4c0d89cd71ea55ae91d655e0dc1e1317.def("const_cast_derived", autowig::method_decorator_97f96c9b783755cd9b3d9f4c9b1f0d22);
    class_4c0d89cd71ea55ae91d655e0dc1e1317.def("const_derived", method_pointer_fb767cf503fe5ecd9e300759b941b511, pybind11::return_value_policy::copy, "");
    class_4c0d89cd71ea55ae91d655e0dc1e1317.def("rows", method_pointer_01c67e14f8f25c8d993c55b25bc11ae7, "");
    class_4c0d89cd71ea55ae91d655e0dc1e1317.def("cols", method_pointer_e2b207f050d95644b769dbf2d8db49ff, "");
    class_4c0d89cd71ea55ae91d655e0dc1e1317.def("__len__", method_pointer_721971798f995d4cbf351ed59c0d39fb, "");

}