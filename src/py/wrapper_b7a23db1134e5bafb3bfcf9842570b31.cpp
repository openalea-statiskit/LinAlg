#include "_ieigen.h"


namespace autowig
{
    void method_decorator_ef4ea63805ad5dfa942bfffc667b319e(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_936126597498571d931b8cf958af7cf7(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > const & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_b7a23db1134e5bafb3bfcf9842570b31()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_ef4ea63805ad5dfa942bfffc667b319e)() = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_536c5d4a16f55811a24837280593ce05)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_936126597498571d931b8cf958af7cf7)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::const_cast_derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_810cd0b322f85e39b51b3999a582029a)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_0e8136ea7cae5b5eab403c290a4db7f6)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_46cedef2b55f543f90b2060e6ffc8bd9)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, 1, 4, 1, 1, 4 > >::*method_pointer_22f4c4c75e555d72a599bca8469e086d)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 4, 1, 1, 4 > > > > class_b7a23db1134e5bafb3bfcf9842570b31("_EigenBase_b7a23db1134e5bafb3bfcf9842570b31", "", boost::python::no_init);
    class_b7a23db1134e5bafb3bfcf9842570b31.def("derived", method_pointer_ef4ea63805ad5dfa942bfffc667b319e, boost::python::return_internal_reference<>(), "");
    class_b7a23db1134e5bafb3bfcf9842570b31.def("derived", autowig::method_decorator_ef4ea63805ad5dfa942bfffc667b319e);
    class_b7a23db1134e5bafb3bfcf9842570b31.def("derived", method_pointer_536c5d4a16f55811a24837280593ce05, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b7a23db1134e5bafb3bfcf9842570b31.def("const_cast_derived", method_pointer_936126597498571d931b8cf958af7cf7, boost::python::return_internal_reference<>(), "");
    class_b7a23db1134e5bafb3bfcf9842570b31.def("const_cast_derived", autowig::method_decorator_936126597498571d931b8cf958af7cf7);
    class_b7a23db1134e5bafb3bfcf9842570b31.def("const_derived", method_pointer_810cd0b322f85e39b51b3999a582029a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b7a23db1134e5bafb3bfcf9842570b31.def("rows", method_pointer_0e8136ea7cae5b5eab403c290a4db7f6, "");
    class_b7a23db1134e5bafb3bfcf9842570b31.def("cols", method_pointer_46cedef2b55f543f90b2060e6ffc8bd9, "");
    class_b7a23db1134e5bafb3bfcf9842570b31.def("size", method_pointer_22f4c4c75e555d72a599bca8469e086d, "");

}