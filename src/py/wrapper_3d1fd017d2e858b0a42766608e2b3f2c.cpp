#include "_ieigen.h"


namespace autowig
{
    void method_decorator_dcc493b01b285b3d8fd7242ba099f69d(struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > > & instance, class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_71b86331562a5fd183723ef03b55d650(struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > > const & instance, class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_3d1fd017d2e858b0a42766608e2b3f2c()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >  & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > > >::*method_pointer_dcc493b01b285b3d8fd7242ba099f69d)() = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > >::derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >  const & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > > >::*method_pointer_155da0513f91571fb0b57221a403c89d)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > >::derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >  & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > > >::*method_pointer_71b86331562a5fd183723ef03b55d650)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > >::const_cast_derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >  const & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > > >::*method_pointer_22b37dbbc23f578e8f686de4ca8bc7e2)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > > >::*method_pointer_a0e2e7d163f658ab870ea635b3f3d99a)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > > >::*method_pointer_649b6c142f1d50f599477921319c6e6a)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > > >::*method_pointer_97c86ad288505bddac1382a3b632ba8f)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > > > > class_3d1fd017d2e858b0a42766608e2b3f2c("_EigenBase_3d1fd017d2e858b0a42766608e2b3f2c", "", boost::python::no_init);
    class_3d1fd017d2e858b0a42766608e2b3f2c.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > >  const & >(""));
    class_3d1fd017d2e858b0a42766608e2b3f2c.def("derived", method_pointer_dcc493b01b285b3d8fd7242ba099f69d, boost::python::return_internal_reference<>(), "");
    class_3d1fd017d2e858b0a42766608e2b3f2c.def("derived", autowig::method_decorator_dcc493b01b285b3d8fd7242ba099f69d);
    class_3d1fd017d2e858b0a42766608e2b3f2c.def("derived", method_pointer_155da0513f91571fb0b57221a403c89d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3d1fd017d2e858b0a42766608e2b3f2c.def("const_cast_derived", method_pointer_71b86331562a5fd183723ef03b55d650, boost::python::return_internal_reference<>(), "");
    class_3d1fd017d2e858b0a42766608e2b3f2c.def("const_cast_derived", autowig::method_decorator_71b86331562a5fd183723ef03b55d650);
    class_3d1fd017d2e858b0a42766608e2b3f2c.def("const_derived", method_pointer_22b37dbbc23f578e8f686de4ca8bc7e2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3d1fd017d2e858b0a42766608e2b3f2c.def("rows", method_pointer_a0e2e7d163f658ab870ea635b3f3d99a, "");
    class_3d1fd017d2e858b0a42766608e2b3f2c.def("cols", method_pointer_649b6c142f1d50f599477921319c6e6a, "");
    class_3d1fd017d2e858b0a42766608e2b3f2c.def("size", method_pointer_97c86ad288505bddac1382a3b632ba8f, "");

}