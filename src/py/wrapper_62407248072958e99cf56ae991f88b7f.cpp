#include "_ieigen.h"


namespace autowig
{
    void method_decorator_e8f160af1e805989a5f0070f4c15da6b(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_06edd9c61150512c827259fae864735c(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)
    { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_b260c70919b252b08c47be045dd5c957(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)
    { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_a3fcf5cfb4ad5d8b946e5a08e6271804(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 1 > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_5cb638867b7357ee8bdf25e92be18b51(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 1 > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)
    { instance.operator[](param_in_0) = param_out; }
    void method_decorator_df1fa4c0cb0352b28973380be32c9974(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 1 > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)
    { instance.operator()(param_in_0) = param_out; }
    void method_decorator_7dae7f3c4c0d57309d10091bb7584f1b(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 1 > & instance, struct ::std::complex< float >  & param_out)
    { instance.x() = param_out; }
    void method_decorator_c0dd5b0cd6fc5b0daa8eebcf4ad19b01(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 1 > & instance, struct ::std::complex< float >  & param_out)
    { instance.y() = param_out; }
    void method_decorator_f4901f885f3454dfa0bfd291feb6f987(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 1 > & instance, struct ::std::complex< float >  & param_out)
    { instance.z() = param_out; }
    void method_decorator_9681e452d4dd59bc9a43452dea699dc1(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 1 > & instance, struct ::std::complex< float >  & param_out)
    { instance.w() = param_out; }
}


void wrapper_62407248072958e99cf56ae991f88b7f()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_e8f160af1e805989a5f0070f4c15da6b)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 1 >::coeffRef;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_06edd9c61150512c827259fae864735c)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 1 >::coeffRefByOuterInner;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_b260c70919b252b08c47be045dd5c957)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 1 >::operator();
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_a3fcf5cfb4ad5d8b946e5a08e6271804)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 1 >::coeffRef;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_5cb638867b7357ee8bdf25e92be18b51)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 1 >::operator[];
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_df1fa4c0cb0352b28973380be32c9974)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 1 >::operator();
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_7dae7f3c4c0d57309d10091bb7584f1b)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 1 >::x;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_c0dd5b0cd6fc5b0daa8eebcf4ad19b01)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 1 >::y;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_f4901f885f3454dfa0bfd291feb6f987)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 1 >::z;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 >, 1 >::*method_pointer_9681e452d4dd59bc9a43452dea699dc1)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 0 > > > class_62407248072958e99cf56ae991f88b7f("_DenseCoeffsBase_62407248072958e99cf56ae991f88b7f", "", boost::python::no_init);
    class_62407248072958e99cf56ae991f88b7f.def("coeff_ref", method_pointer_e8f160af1e805989a5f0070f4c15da6b, boost::python::return_internal_reference<>(), "");
    class_62407248072958e99cf56ae991f88b7f.def("coeff_ref", autowig::method_decorator_e8f160af1e805989a5f0070f4c15da6b);
    class_62407248072958e99cf56ae991f88b7f.def("coeff_ref_by_outer_inner", method_pointer_06edd9c61150512c827259fae864735c, boost::python::return_internal_reference<>(), "");
    class_62407248072958e99cf56ae991f88b7f.def("coeff_ref_by_outer_inner", autowig::method_decorator_06edd9c61150512c827259fae864735c);
    class_62407248072958e99cf56ae991f88b7f.def("__call__", method_pointer_b260c70919b252b08c47be045dd5c957, boost::python::return_internal_reference<>(), "");
    class_62407248072958e99cf56ae991f88b7f.def("__call__", autowig::method_decorator_b260c70919b252b08c47be045dd5c957);
    class_62407248072958e99cf56ae991f88b7f.def("coeff_ref", method_pointer_a3fcf5cfb4ad5d8b946e5a08e6271804, boost::python::return_internal_reference<>(), "");
    class_62407248072958e99cf56ae991f88b7f.def("coeff_ref", autowig::method_decorator_a3fcf5cfb4ad5d8b946e5a08e6271804);
    class_62407248072958e99cf56ae991f88b7f.def("__getitem__", method_pointer_5cb638867b7357ee8bdf25e92be18b51, boost::python::return_internal_reference<>(), "");
    class_62407248072958e99cf56ae991f88b7f.def("__getitem__", autowig::method_decorator_5cb638867b7357ee8bdf25e92be18b51);
    class_62407248072958e99cf56ae991f88b7f.def("__call__", method_pointer_df1fa4c0cb0352b28973380be32c9974, boost::python::return_internal_reference<>(), "");
    class_62407248072958e99cf56ae991f88b7f.def("__call__", autowig::method_decorator_df1fa4c0cb0352b28973380be32c9974);
    class_62407248072958e99cf56ae991f88b7f.def("x", method_pointer_7dae7f3c4c0d57309d10091bb7584f1b, boost::python::return_internal_reference<>(), "");
    class_62407248072958e99cf56ae991f88b7f.def("x", autowig::method_decorator_7dae7f3c4c0d57309d10091bb7584f1b);
    class_62407248072958e99cf56ae991f88b7f.def("y", method_pointer_c0dd5b0cd6fc5b0daa8eebcf4ad19b01, boost::python::return_internal_reference<>(), "");
    class_62407248072958e99cf56ae991f88b7f.def("y", autowig::method_decorator_c0dd5b0cd6fc5b0daa8eebcf4ad19b01);
    class_62407248072958e99cf56ae991f88b7f.def("z", method_pointer_f4901f885f3454dfa0bfd291feb6f987, boost::python::return_internal_reference<>(), "");
    class_62407248072958e99cf56ae991f88b7f.def("z", autowig::method_decorator_f4901f885f3454dfa0bfd291feb6f987);
    class_62407248072958e99cf56ae991f88b7f.def("w", method_pointer_9681e452d4dd59bc9a43452dea699dc1, boost::python::return_internal_reference<>(), "");
    class_62407248072958e99cf56ae991f88b7f.def("w", autowig::method_decorator_9681e452d4dd59bc9a43452dea699dc1);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, 0 > > >();
    }

}