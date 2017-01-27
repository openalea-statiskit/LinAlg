#include "_ieigen.h"


namespace autowig
{
    void method_decorator_aaf56fd1c9795a9c9d528d41dbf92d53(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_9c1f354abcea50a9a76cd49b870b7491(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)     { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_9b8b988745dc5b9ea3021c0b291d6e52(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)     { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_963368375f625ccbb411922339f1b644(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 1 > & instance, long int  param_in_0, const int  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_7752760fadd95c5ebb2ce613db13a760(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 1 > & instance, long int  param_in_0, const int  & param_out)     { instance.operator[](param_in_0) = param_out; }
    void method_decorator_6edf5e0e263051c1b369a7ca11a7e8e0(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 1 > & instance, long int  param_in_0, const int  & param_out)     { instance.operator()(param_in_0) = param_out; }
    void method_decorator_ed6621a56ce458db8bff3a9cafe0a7c3(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 1 > & instance, const int  & param_out)     { instance.x() = param_out; }
    void method_decorator_31db6cbb0316541fb7620d99f7c56314(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 1 > & instance, const int  & param_out)     { instance.y() = param_out; }
    void method_decorator_e19eb030af645a8f936166096bc41460(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 1 > & instance, const int  & param_out)     { instance.z() = param_out; }
    void method_decorator_8b3b843cbf7757e18a60075d044280d4(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 1 > & instance, const int  & param_out)     { instance.w() = param_out; }
}


void wrapper_3f14a6580a6d55e1a49c0bf276170186()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_aaf56fd1c9795a9c9d528d41dbf92d53)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 1 >::coeffRef;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_9c1f354abcea50a9a76cd49b870b7491)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 1 >::coeffRefByOuterInner;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_9b8b988745dc5b9ea3021c0b291d6e52)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 1 >::operator();
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_963368375f625ccbb411922339f1b644)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 1 >::coeffRef;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_7752760fadd95c5ebb2ce613db13a760)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 1 >::operator[];
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_6edf5e0e263051c1b369a7ca11a7e8e0)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 1 >::operator();
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_ed6621a56ce458db8bff3a9cafe0a7c3)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 1 >::x;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_31db6cbb0316541fb7620d99f7c56314)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 1 >::y;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_e19eb030af645a8f936166096bc41460)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 1 >::z;
    int  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_8b3b843cbf7757e18a60075d044280d4)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 0 > > > class_3f14a6580a6d55e1a49c0bf276170186("_DenseCoeffsBase_3f14a6580a6d55e1a49c0bf276170186", "", boost::python::no_init);
    class_3f14a6580a6d55e1a49c0bf276170186.def("coeff_ref", method_pointer_aaf56fd1c9795a9c9d528d41dbf92d53, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3f14a6580a6d55e1a49c0bf276170186.def("coeff_ref", autowig::method_decorator_aaf56fd1c9795a9c9d528d41dbf92d53);
    class_3f14a6580a6d55e1a49c0bf276170186.def("coeff_ref_by_outer_inner", method_pointer_9c1f354abcea50a9a76cd49b870b7491, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3f14a6580a6d55e1a49c0bf276170186.def("coeff_ref_by_outer_inner", autowig::method_decorator_9c1f354abcea50a9a76cd49b870b7491);
    class_3f14a6580a6d55e1a49c0bf276170186.def("__call__", method_pointer_9b8b988745dc5b9ea3021c0b291d6e52, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3f14a6580a6d55e1a49c0bf276170186.def("__call__", autowig::method_decorator_9b8b988745dc5b9ea3021c0b291d6e52);
    class_3f14a6580a6d55e1a49c0bf276170186.def("coeff_ref", method_pointer_963368375f625ccbb411922339f1b644, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3f14a6580a6d55e1a49c0bf276170186.def("coeff_ref", autowig::method_decorator_963368375f625ccbb411922339f1b644);
    class_3f14a6580a6d55e1a49c0bf276170186.def("__getitem__", method_pointer_7752760fadd95c5ebb2ce613db13a760, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3f14a6580a6d55e1a49c0bf276170186.def("__getitem__", autowig::method_decorator_7752760fadd95c5ebb2ce613db13a760);
    class_3f14a6580a6d55e1a49c0bf276170186.def("__call__", method_pointer_6edf5e0e263051c1b369a7ca11a7e8e0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3f14a6580a6d55e1a49c0bf276170186.def("__call__", autowig::method_decorator_6edf5e0e263051c1b369a7ca11a7e8e0);
    class_3f14a6580a6d55e1a49c0bf276170186.def("x", method_pointer_ed6621a56ce458db8bff3a9cafe0a7c3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3f14a6580a6d55e1a49c0bf276170186.def("x", autowig::method_decorator_ed6621a56ce458db8bff3a9cafe0a7c3);
    class_3f14a6580a6d55e1a49c0bf276170186.def("y", method_pointer_31db6cbb0316541fb7620d99f7c56314, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3f14a6580a6d55e1a49c0bf276170186.def("y", autowig::method_decorator_31db6cbb0316541fb7620d99f7c56314);
    class_3f14a6580a6d55e1a49c0bf276170186.def("z", method_pointer_e19eb030af645a8f936166096bc41460, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3f14a6580a6d55e1a49c0bf276170186.def("z", autowig::method_decorator_e19eb030af645a8f936166096bc41460);
    class_3f14a6580a6d55e1a49c0bf276170186.def("w", method_pointer_8b3b843cbf7757e18a60075d044280d4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3f14a6580a6d55e1a49c0bf276170186.def("w", autowig::method_decorator_8b3b843cbf7757e18a60075d044280d4);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, 0 > > >();
    }

}