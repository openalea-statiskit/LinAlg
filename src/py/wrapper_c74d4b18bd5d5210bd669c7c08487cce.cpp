#include "_ieigen.h"


namespace autowig
{
    void method_decorator_fe2e10eca521584c8e8b9a39150abbfd(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_eb26f45e8dde507e85f7d888908d70db(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)
    { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_8a2330cfca805ad094b87af73b89128a(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)
    { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_c2cb6e35c7b8548b9a75f9f7d7247785(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_0c0363265ada5a0987c1be887b062f46(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)
    { instance.operator[](param_in_0) = param_out; }
    void method_decorator_a71a216818e25f7a9f3d09d3589f57e8(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)
    { instance.operator()(param_in_0) = param_out; }
    void method_decorator_04c9e4f68e24566883c25b7781e8be86(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 > & instance, struct ::std::complex< float >  & param_out)
    { instance.x() = param_out; }
    void method_decorator_8a55aa3a22af557aa1c00c707f75e0a7(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 > & instance, struct ::std::complex< float >  & param_out)
    { instance.y() = param_out; }
    void method_decorator_4266bb5fa167502197045e71cc4bb099(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 > & instance, struct ::std::complex< float >  & param_out)
    { instance.z() = param_out; }
    void method_decorator_781fd982942c555ba0705cedee202608(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 > & instance, struct ::std::complex< float >  & param_out)
    { instance.w() = param_out; }
}


void wrapper_c74d4b18bd5d5210bd669c7c08487cce()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_fe2e10eca521584c8e8b9a39150abbfd)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::coeffRef;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_eb26f45e8dde507e85f7d888908d70db)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::coeffRefByOuterInner;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_8a2330cfca805ad094b87af73b89128a)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::operator();
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_c2cb6e35c7b8548b9a75f9f7d7247785)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::coeffRef;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_0c0363265ada5a0987c1be887b062f46)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::operator[];
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_a71a216818e25f7a9f3d09d3589f57e8)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::operator();
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_04c9e4f68e24566883c25b7781e8be86)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::x;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_8a55aa3a22af557aa1c00c707f75e0a7)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::y;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_4266bb5fa167502197045e71cc4bb099)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::z;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::*method_pointer_781fd982942c555ba0705cedee202608)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 0 > > > class_c74d4b18bd5d5210bd669c7c08487cce("_DenseCoeffsBase_c74d4b18bd5d5210bd669c7c08487cce", "", boost::python::no_init);
    class_c74d4b18bd5d5210bd669c7c08487cce.def("coeff_ref", method_pointer_fe2e10eca521584c8e8b9a39150abbfd, boost::python::return_internal_reference<>(), "");
    class_c74d4b18bd5d5210bd669c7c08487cce.def("coeff_ref", autowig::method_decorator_fe2e10eca521584c8e8b9a39150abbfd);
    class_c74d4b18bd5d5210bd669c7c08487cce.def("coeff_ref_by_outer_inner", method_pointer_eb26f45e8dde507e85f7d888908d70db, boost::python::return_internal_reference<>(), "");
    class_c74d4b18bd5d5210bd669c7c08487cce.def("coeff_ref_by_outer_inner", autowig::method_decorator_eb26f45e8dde507e85f7d888908d70db);
    class_c74d4b18bd5d5210bd669c7c08487cce.def("__call__", method_pointer_8a2330cfca805ad094b87af73b89128a, boost::python::return_internal_reference<>(), "");
    class_c74d4b18bd5d5210bd669c7c08487cce.def("__call__", autowig::method_decorator_8a2330cfca805ad094b87af73b89128a);
    class_c74d4b18bd5d5210bd669c7c08487cce.def("coeff_ref", method_pointer_c2cb6e35c7b8548b9a75f9f7d7247785, boost::python::return_internal_reference<>(), "");
    class_c74d4b18bd5d5210bd669c7c08487cce.def("coeff_ref", autowig::method_decorator_c2cb6e35c7b8548b9a75f9f7d7247785);
    class_c74d4b18bd5d5210bd669c7c08487cce.def("__getitem__", method_pointer_0c0363265ada5a0987c1be887b062f46, boost::python::return_internal_reference<>(), "");
    class_c74d4b18bd5d5210bd669c7c08487cce.def("__getitem__", autowig::method_decorator_0c0363265ada5a0987c1be887b062f46);
    class_c74d4b18bd5d5210bd669c7c08487cce.def("__call__", method_pointer_a71a216818e25f7a9f3d09d3589f57e8, boost::python::return_internal_reference<>(), "");
    class_c74d4b18bd5d5210bd669c7c08487cce.def("__call__", autowig::method_decorator_a71a216818e25f7a9f3d09d3589f57e8);
    class_c74d4b18bd5d5210bd669c7c08487cce.def("x", method_pointer_04c9e4f68e24566883c25b7781e8be86, boost::python::return_internal_reference<>(), "");
    class_c74d4b18bd5d5210bd669c7c08487cce.def("x", autowig::method_decorator_04c9e4f68e24566883c25b7781e8be86);
    class_c74d4b18bd5d5210bd669c7c08487cce.def("y", method_pointer_8a55aa3a22af557aa1c00c707f75e0a7, boost::python::return_internal_reference<>(), "");
    class_c74d4b18bd5d5210bd669c7c08487cce.def("y", autowig::method_decorator_8a55aa3a22af557aa1c00c707f75e0a7);
    class_c74d4b18bd5d5210bd669c7c08487cce.def("z", method_pointer_4266bb5fa167502197045e71cc4bb099, boost::python::return_internal_reference<>(), "");
    class_c74d4b18bd5d5210bd669c7c08487cce.def("z", autowig::method_decorator_4266bb5fa167502197045e71cc4bb099);
    class_c74d4b18bd5d5210bd669c7c08487cce.def("w", method_pointer_781fd982942c555ba0705cedee202608, boost::python::return_internal_reference<>(), "");
    class_c74d4b18bd5d5210bd669c7c08487cce.def("w", autowig::method_decorator_781fd982942c555ba0705cedee202608);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >, 0 > > >();
    }

}