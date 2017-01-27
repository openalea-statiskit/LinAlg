#include "_ieigen.h"


namespace autowig
{
    void method_decorator_81dc249d792e568faf32c7d8ed791400(struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > > & instance, class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_c4b05a2fe72453ddbceb8515d0046033(struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > > const & instance, class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_773005826b6e58808645e100ce49e06c()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >  & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >::*method_pointer_81dc249d792e568faf32c7d8ed791400)() = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >::derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >  const & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >::*method_pointer_6408ebb18c8f54d6a2ed8c6cb5f9ff08)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >::derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >  & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >::*method_pointer_c4b05a2fe72453ddbceb8515d0046033)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >::const_cast_derived;
    class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >  const & (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >::*method_pointer_36177b4aa7ef5bbe977814cfd46fee93)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >::*method_pointer_98a8c3e582e7580e8250fa8429998f8b)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >::*method_pointer_838597d0e1185986a8140afcce420056)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::PartialPivLU< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >::*method_pointer_8f2406bdcec95052bfe53285f3c7737c)() const = &::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > > > > class_773005826b6e58808645e100ce49e06c("_EigenBase_773005826b6e58808645e100ce49e06c", "", boost::python::no_init);
    class_773005826b6e58808645e100ce49e06c.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::PartialPivLU< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >  const & >(""));
    class_773005826b6e58808645e100ce49e06c.def("derived", method_pointer_81dc249d792e568faf32c7d8ed791400, boost::python::return_internal_reference<>(), "");
    class_773005826b6e58808645e100ce49e06c.def("derived", autowig::method_decorator_81dc249d792e568faf32c7d8ed791400);
    class_773005826b6e58808645e100ce49e06c.def("derived", method_pointer_6408ebb18c8f54d6a2ed8c6cb5f9ff08, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_773005826b6e58808645e100ce49e06c.def("const_cast_derived", method_pointer_c4b05a2fe72453ddbceb8515d0046033, boost::python::return_internal_reference<>(), "");
    class_773005826b6e58808645e100ce49e06c.def("const_cast_derived", autowig::method_decorator_c4b05a2fe72453ddbceb8515d0046033);
    class_773005826b6e58808645e100ce49e06c.def("const_derived", method_pointer_36177b4aa7ef5bbe977814cfd46fee93, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_773005826b6e58808645e100ce49e06c.def("rows", method_pointer_98a8c3e582e7580e8250fa8429998f8b, "");
    class_773005826b6e58808645e100ce49e06c.def("cols", method_pointer_838597d0e1185986a8140afcce420056, "");
    class_773005826b6e58808645e100ce49e06c.def("size", method_pointer_8f2406bdcec95052bfe53285f3c7737c, "");

}