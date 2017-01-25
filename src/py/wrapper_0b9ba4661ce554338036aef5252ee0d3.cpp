#include "_ieigen.h"


namespace autowig
{
    void method_decorator_fe31e0c99e635d7dacefab0aeb72cc54(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_dd576715f9a15542bf5d844d479bc085(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)
    { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_34aefbbb49d855bea51bef2dbc0e6d4f(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const double  & param_out)
    { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_47d900a7bc6e55258d5ea15e7fef4057(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 1 > & instance, long int  param_in_0, const double  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_3d1e8434d8895a12b8f0e8ce07af1f19(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 1 > & instance, long int  param_in_0, const double  & param_out)
    { instance.operator[](param_in_0) = param_out; }
    void method_decorator_1fa7c7ce7c48548c9adad1aa25c54029(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 1 > & instance, long int  param_in_0, const double  & param_out)
    { instance.operator()(param_in_0) = param_out; }
    void method_decorator_451b08fd142f5bd7bce01ed4fddaaf7e(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 1 > & instance, const double  & param_out)
    { instance.x() = param_out; }
    void method_decorator_0e460852e0145bab9b051237b52e4c2e(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 1 > & instance, const double  & param_out)
    { instance.y() = param_out; }
    void method_decorator_a423d01a9def52ff843e615725a91529(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 1 > & instance, const double  & param_out)
    { instance.z() = param_out; }
    void method_decorator_dcf6d086860e5fab89146b3181c288d0(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 1 > & instance, const double  & param_out)
    { instance.w() = param_out; }
}


void wrapper_0b9ba4661ce554338036aef5252ee0d3()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_fe31e0c99e635d7dacefab0aeb72cc54)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 1 >::coeffRef;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_dd576715f9a15542bf5d844d479bc085)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 1 >::coeffRefByOuterInner;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_34aefbbb49d855bea51bef2dbc0e6d4f)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 1 >::operator();
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_47d900a7bc6e55258d5ea15e7fef4057)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 1 >::coeffRef;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_3d1e8434d8895a12b8f0e8ce07af1f19)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 1 >::operator[];
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_1fa7c7ce7c48548c9adad1aa25c54029)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 1 >::operator();
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_451b08fd142f5bd7bce01ed4fddaaf7e)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 1 >::x;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_0e460852e0145bab9b051237b52e4c2e)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 1 >::y;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_a423d01a9def52ff843e615725a91529)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 1 >::z;
    double  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 1 >::*method_pointer_dcf6d086860e5fab89146b3181c288d0)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 0 > > > class_0b9ba4661ce554338036aef5252ee0d3("_DenseCoeffsBase_0b9ba4661ce554338036aef5252ee0d3", "", boost::python::no_init);
    class_0b9ba4661ce554338036aef5252ee0d3.def("coeff_ref", method_pointer_fe31e0c99e635d7dacefab0aeb72cc54, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0b9ba4661ce554338036aef5252ee0d3.def("coeff_ref", autowig::method_decorator_fe31e0c99e635d7dacefab0aeb72cc54);
    class_0b9ba4661ce554338036aef5252ee0d3.def("coeff_ref_by_outer_inner", method_pointer_dd576715f9a15542bf5d844d479bc085, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0b9ba4661ce554338036aef5252ee0d3.def("coeff_ref_by_outer_inner", autowig::method_decorator_dd576715f9a15542bf5d844d479bc085);
    class_0b9ba4661ce554338036aef5252ee0d3.def("__call__", method_pointer_34aefbbb49d855bea51bef2dbc0e6d4f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0b9ba4661ce554338036aef5252ee0d3.def("__call__", autowig::method_decorator_34aefbbb49d855bea51bef2dbc0e6d4f);
    class_0b9ba4661ce554338036aef5252ee0d3.def("coeff_ref", method_pointer_47d900a7bc6e55258d5ea15e7fef4057, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0b9ba4661ce554338036aef5252ee0d3.def("coeff_ref", autowig::method_decorator_47d900a7bc6e55258d5ea15e7fef4057);
    class_0b9ba4661ce554338036aef5252ee0d3.def("__getitem__", method_pointer_3d1e8434d8895a12b8f0e8ce07af1f19, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0b9ba4661ce554338036aef5252ee0d3.def("__getitem__", autowig::method_decorator_3d1e8434d8895a12b8f0e8ce07af1f19);
    class_0b9ba4661ce554338036aef5252ee0d3.def("__call__", method_pointer_1fa7c7ce7c48548c9adad1aa25c54029, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0b9ba4661ce554338036aef5252ee0d3.def("__call__", autowig::method_decorator_1fa7c7ce7c48548c9adad1aa25c54029);
    class_0b9ba4661ce554338036aef5252ee0d3.def("x", method_pointer_451b08fd142f5bd7bce01ed4fddaaf7e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0b9ba4661ce554338036aef5252ee0d3.def("x", autowig::method_decorator_451b08fd142f5bd7bce01ed4fddaaf7e);
    class_0b9ba4661ce554338036aef5252ee0d3.def("y", method_pointer_0e460852e0145bab9b051237b52e4c2e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0b9ba4661ce554338036aef5252ee0d3.def("y", autowig::method_decorator_0e460852e0145bab9b051237b52e4c2e);
    class_0b9ba4661ce554338036aef5252ee0d3.def("z", method_pointer_a423d01a9def52ff843e615725a91529, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0b9ba4661ce554338036aef5252ee0d3.def("z", autowig::method_decorator_a423d01a9def52ff843e615725a91529);
    class_0b9ba4661ce554338036aef5252ee0d3.def("w", method_pointer_dcf6d086860e5fab89146b3181c288d0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0b9ba4661ce554338036aef5252ee0d3.def("w", autowig::method_decorator_dcf6d086860e5fab89146b3181c288d0);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, 0 > > >();
    }

}