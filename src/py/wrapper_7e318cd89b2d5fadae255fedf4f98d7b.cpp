#include "_ieigen.h"


namespace autowig
{
    void method_decorator_32b1916c61be598daeac0c28350aeccc(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_8b6ef1a03f9a578187e01c051dc34f1b(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)
    { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_68a5d0c2d4855bf7819b4b67e35a2f9b(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 > & instance, long int  param_in_0, long int  param_in_1, const float  & param_out)
    { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_718629dedee8557a8e3853436392295f(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 > & instance, long int  param_in_0, const float  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_9a3547fbddcc5638800324cfc515c08d(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 > & instance, long int  param_in_0, const float  & param_out)
    { instance.operator[](param_in_0) = param_out; }
    void method_decorator_58616ca6af115dce91c2b397fa625682(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 > & instance, long int  param_in_0, const float  & param_out)
    { instance.operator()(param_in_0) = param_out; }
    void method_decorator_fa301cee799853df9637328c0eed8d7b(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 > & instance, const float  & param_out)
    { instance.x() = param_out; }
    void method_decorator_b4907444177257dcb7563a2a1facfe2b(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 > & instance, const float  & param_out)
    { instance.y() = param_out; }
    void method_decorator_12e6b944923154dd880c06a148936ccb(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 > & instance, const float  & param_out)
    { instance.z() = param_out; }
    void method_decorator_66e0086362285a0ca0c178311bcc15b0(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 > & instance, const float  & param_out)
    { instance.w() = param_out; }
}


void wrapper_7e318cd89b2d5fadae255fedf4f98d7b()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_32b1916c61be598daeac0c28350aeccc)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::coeffRef;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_8b6ef1a03f9a578187e01c051dc34f1b)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::coeffRefByOuterInner;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_68a5d0c2d4855bf7819b4b67e35a2f9b)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::operator();
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_718629dedee8557a8e3853436392295f)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::coeffRef;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_9a3547fbddcc5638800324cfc515c08d)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::operator[];
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_58616ca6af115dce91c2b397fa625682)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::operator();
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_fa301cee799853df9637328c0eed8d7b)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::x;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_b4907444177257dcb7563a2a1facfe2b)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::y;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_12e6b944923154dd880c06a148936ccb)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::z;
    float  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::*method_pointer_66e0086362285a0ca0c178311bcc15b0)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 > > > class_7e318cd89b2d5fadae255fedf4f98d7b("_DenseCoeffsBase_7e318cd89b2d5fadae255fedf4f98d7b", "", boost::python::no_init);
    class_7e318cd89b2d5fadae255fedf4f98d7b.def("coeff_ref", method_pointer_32b1916c61be598daeac0c28350aeccc, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7e318cd89b2d5fadae255fedf4f98d7b.def("coeff_ref", autowig::method_decorator_32b1916c61be598daeac0c28350aeccc);
    class_7e318cd89b2d5fadae255fedf4f98d7b.def("coeff_ref_by_outer_inner", method_pointer_8b6ef1a03f9a578187e01c051dc34f1b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7e318cd89b2d5fadae255fedf4f98d7b.def("coeff_ref_by_outer_inner", autowig::method_decorator_8b6ef1a03f9a578187e01c051dc34f1b);
    class_7e318cd89b2d5fadae255fedf4f98d7b.def("__call__", method_pointer_68a5d0c2d4855bf7819b4b67e35a2f9b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7e318cd89b2d5fadae255fedf4f98d7b.def("__call__", autowig::method_decorator_68a5d0c2d4855bf7819b4b67e35a2f9b);
    class_7e318cd89b2d5fadae255fedf4f98d7b.def("coeff_ref", method_pointer_718629dedee8557a8e3853436392295f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7e318cd89b2d5fadae255fedf4f98d7b.def("coeff_ref", autowig::method_decorator_718629dedee8557a8e3853436392295f);
    class_7e318cd89b2d5fadae255fedf4f98d7b.def("__getitem__", method_pointer_9a3547fbddcc5638800324cfc515c08d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7e318cd89b2d5fadae255fedf4f98d7b.def("__getitem__", autowig::method_decorator_9a3547fbddcc5638800324cfc515c08d);
    class_7e318cd89b2d5fadae255fedf4f98d7b.def("__call__", method_pointer_58616ca6af115dce91c2b397fa625682, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7e318cd89b2d5fadae255fedf4f98d7b.def("__call__", autowig::method_decorator_58616ca6af115dce91c2b397fa625682);
    class_7e318cd89b2d5fadae255fedf4f98d7b.def("x", method_pointer_fa301cee799853df9637328c0eed8d7b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7e318cd89b2d5fadae255fedf4f98d7b.def("x", autowig::method_decorator_fa301cee799853df9637328c0eed8d7b);
    class_7e318cd89b2d5fadae255fedf4f98d7b.def("y", method_pointer_b4907444177257dcb7563a2a1facfe2b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7e318cd89b2d5fadae255fedf4f98d7b.def("y", autowig::method_decorator_b4907444177257dcb7563a2a1facfe2b);
    class_7e318cd89b2d5fadae255fedf4f98d7b.def("z", method_pointer_12e6b944923154dd880c06a148936ccb, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7e318cd89b2d5fadae255fedf4f98d7b.def("z", autowig::method_decorator_12e6b944923154dd880c06a148936ccb);
    class_7e318cd89b2d5fadae255fedf4f98d7b.def("w", method_pointer_66e0086362285a0ca0c178311bcc15b0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7e318cd89b2d5fadae255fedf4f98d7b.def("w", autowig::method_decorator_66e0086362285a0ca0c178311bcc15b0);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >, 0 > > >();
    }

}