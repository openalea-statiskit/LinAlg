#include "_ieigen.h"


namespace autowig
{
    void method_decorator_3739f9cc02285f43adbab4315ede708f(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_92540b4036af54fc92c23d07e60ae152(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > const & instance, class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_952d547049605c0eaadb7520c09cdf54()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_3739f9cc02285f43adbab4315ede708f)() = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_46a3e7ec370a5937b194252b87969f4f)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_92540b4036af54fc92c23d07e60ae152)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::const_cast_derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_1552064eedfb51b88257d554e0c0e6ec)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_eb2de9739cb8512fa3c76d7878cd059f)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_86bf64edf43b5e7b9aabc02e2b26a419)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_af8da11f620850bc9918de912b94698e)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > > > class_952d547049605c0eaadb7520c09cdf54("_EigenBase_952d547049605c0eaadb7520c09cdf54", "", boost::python::no_init);
    class_952d547049605c0eaadb7520c09cdf54.def("derived", method_pointer_3739f9cc02285f43adbab4315ede708f, boost::python::return_internal_reference<>(), "");
    class_952d547049605c0eaadb7520c09cdf54.def("derived", autowig::method_decorator_3739f9cc02285f43adbab4315ede708f);
    class_952d547049605c0eaadb7520c09cdf54.def("derived", method_pointer_46a3e7ec370a5937b194252b87969f4f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_952d547049605c0eaadb7520c09cdf54.def("const_cast_derived", method_pointer_92540b4036af54fc92c23d07e60ae152, boost::python::return_internal_reference<>(), "");
    class_952d547049605c0eaadb7520c09cdf54.def("const_cast_derived", autowig::method_decorator_92540b4036af54fc92c23d07e60ae152);
    class_952d547049605c0eaadb7520c09cdf54.def("const_derived", method_pointer_1552064eedfb51b88257d554e0c0e6ec, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_952d547049605c0eaadb7520c09cdf54.def("rows", method_pointer_eb2de9739cb8512fa3c76d7878cd059f, "");
    class_952d547049605c0eaadb7520c09cdf54.def("cols", method_pointer_86bf64edf43b5e7b9aabc02e2b26a419, "");
    class_952d547049605c0eaadb7520c09cdf54.def("size", method_pointer_af8da11f620850bc9918de912b94698e, "");

}