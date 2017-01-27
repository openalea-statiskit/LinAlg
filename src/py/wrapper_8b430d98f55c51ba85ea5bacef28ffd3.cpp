#include "_ieigen.h"


namespace autowig
{
    void method_decorator_818fd7a2723d54698a6a4db525c5b314(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_9369ef462d755ed69cbe2548dbef1403(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)     { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_c52472e259dc546db805435af9923255(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)     { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_8357c3a673b8517ca9291f4b5dd32627(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 1 > & instance, long int  param_in_0, const double  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_974c614641c059efa359c497500c1274(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 1 > & instance, long int  param_in_0, const double  & param_out)     { instance.operator[](param_in_0) = param_out; }
    void method_decorator_2695c5b4d2db5b35ac9da983408dd40d(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 1 > & instance, long int  param_in_0, const double  & param_out)     { instance.operator()(param_in_0) = param_out; }
    void method_decorator_66907f09ec09562f842a5795aca0db99(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 1 > & instance, const double  & param_out)     { instance.x() = param_out; }
    void method_decorator_0a62ff20f22a5cd9b3e0af9a2c3ec40d(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 1 > & instance, const double  & param_out)     { instance.y() = param_out; }
    void method_decorator_24eceba9c40055bfbd7f70abf82e2c5e(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 1 > & instance, const double  & param_out)     { instance.z() = param_out; }
    void method_decorator_be872cc5547e5b04952057836f1335fc(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 1 > & instance, const double  & param_out)     { instance.w() = param_out; }
}


void wrapper_8b430d98f55c51ba85ea5bacef28ffd3()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_818fd7a2723d54698a6a4db525c5b314)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 1 >::coeffRef;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_9369ef462d755ed69cbe2548dbef1403)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 1 >::coeffRefByOuterInner;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_c52472e259dc546db805435af9923255)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 1 >::operator();
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_8357c3a673b8517ca9291f4b5dd32627)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 1 >::coeffRef;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_974c614641c059efa359c497500c1274)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 1 >::operator[];
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_2695c5b4d2db5b35ac9da983408dd40d)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 1 >::operator();
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_66907f09ec09562f842a5795aca0db99)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 1 >::x;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_0a62ff20f22a5cd9b3e0af9a2c3ec40d)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 1 >::y;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_24eceba9c40055bfbd7f70abf82e2c5e)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 1 >::z;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 1 >::*method_pointer_be872cc5547e5b04952057836f1335fc)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 0 > > > class_8b430d98f55c51ba85ea5bacef28ffd3("_DenseCoeffsBase_8b430d98f55c51ba85ea5bacef28ffd3", "", boost::python::no_init);
    class_8b430d98f55c51ba85ea5bacef28ffd3.def("coeff_ref", method_pointer_818fd7a2723d54698a6a4db525c5b314, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8b430d98f55c51ba85ea5bacef28ffd3.def("coeff_ref", autowig::method_decorator_818fd7a2723d54698a6a4db525c5b314);
    class_8b430d98f55c51ba85ea5bacef28ffd3.def("coeff_ref_by_outer_inner", method_pointer_9369ef462d755ed69cbe2548dbef1403, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8b430d98f55c51ba85ea5bacef28ffd3.def("coeff_ref_by_outer_inner", autowig::method_decorator_9369ef462d755ed69cbe2548dbef1403);
    class_8b430d98f55c51ba85ea5bacef28ffd3.def("__call__", method_pointer_c52472e259dc546db805435af9923255, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8b430d98f55c51ba85ea5bacef28ffd3.def("__call__", autowig::method_decorator_c52472e259dc546db805435af9923255);
    class_8b430d98f55c51ba85ea5bacef28ffd3.def("coeff_ref", method_pointer_8357c3a673b8517ca9291f4b5dd32627, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8b430d98f55c51ba85ea5bacef28ffd3.def("coeff_ref", autowig::method_decorator_8357c3a673b8517ca9291f4b5dd32627);
    class_8b430d98f55c51ba85ea5bacef28ffd3.def("__getitem__", method_pointer_974c614641c059efa359c497500c1274, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8b430d98f55c51ba85ea5bacef28ffd3.def("__getitem__", autowig::method_decorator_974c614641c059efa359c497500c1274);
    class_8b430d98f55c51ba85ea5bacef28ffd3.def("__call__", method_pointer_2695c5b4d2db5b35ac9da983408dd40d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8b430d98f55c51ba85ea5bacef28ffd3.def("__call__", autowig::method_decorator_2695c5b4d2db5b35ac9da983408dd40d);
    class_8b430d98f55c51ba85ea5bacef28ffd3.def("x", method_pointer_66907f09ec09562f842a5795aca0db99, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8b430d98f55c51ba85ea5bacef28ffd3.def("x", autowig::method_decorator_66907f09ec09562f842a5795aca0db99);
    class_8b430d98f55c51ba85ea5bacef28ffd3.def("y", method_pointer_0a62ff20f22a5cd9b3e0af9a2c3ec40d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8b430d98f55c51ba85ea5bacef28ffd3.def("y", autowig::method_decorator_0a62ff20f22a5cd9b3e0af9a2c3ec40d);
    class_8b430d98f55c51ba85ea5bacef28ffd3.def("z", method_pointer_24eceba9c40055bfbd7f70abf82e2c5e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8b430d98f55c51ba85ea5bacef28ffd3.def("z", autowig::method_decorator_24eceba9c40055bfbd7f70abf82e2c5e);
    class_8b430d98f55c51ba85ea5bacef28ffd3.def("w", method_pointer_be872cc5547e5b04952057836f1335fc, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8b430d98f55c51ba85ea5bacef28ffd3.def("w", autowig::method_decorator_be872cc5547e5b04952057836f1335fc);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 4, 1, 1, 4 >, 0 > > >();
    }

}