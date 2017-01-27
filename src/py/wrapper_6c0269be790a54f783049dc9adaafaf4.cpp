#include "_ieigen.h"


namespace autowig
{
    void method_decorator_1417afee3d835ecea7353382968a6cfa(struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > > & instance, class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_46731fcfc5155808b0c01b648ad40648(struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > > const & instance, class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_6c0269be790a54f783049dc9adaafaf4()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >  & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > > >::*method_pointer_1417afee3d835ecea7353382968a6cfa)() = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > >::derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >  const & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > > >::*method_pointer_695966c3c00956429b7c2b048a6c0c83)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > >::derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >  & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > > >::*method_pointer_46731fcfc5155808b0c01b648ad40648)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > >::const_cast_derived;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >  const & (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > > >::*method_pointer_fd3b42cb705a56cc8b06a19f53c6f62d)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > > >::*method_pointer_0c0459e7652458038b3e64c3535039e1)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > > >::*method_pointer_b9528dd441445198ada06196a02480eb)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > > >::*method_pointer_faa907843e1c58159b0ac72413ba9c26)() const = &::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > > > > class_6c0269be790a54f783049dc9adaafaf4("_EigenBase_6c0269be790a54f783049dc9adaafaf4", "", boost::python::no_init);
    class_6c0269be790a54f783049dc9adaafaf4.def(boost::python::init< struct ::Eigen::EigenBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > >  const & >(""));
    class_6c0269be790a54f783049dc9adaafaf4.def("derived", method_pointer_1417afee3d835ecea7353382968a6cfa, boost::python::return_internal_reference<>(), "");
    class_6c0269be790a54f783049dc9adaafaf4.def("derived", autowig::method_decorator_1417afee3d835ecea7353382968a6cfa);
    class_6c0269be790a54f783049dc9adaafaf4.def("derived", method_pointer_695966c3c00956429b7c2b048a6c0c83, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6c0269be790a54f783049dc9adaafaf4.def("const_cast_derived", method_pointer_46731fcfc5155808b0c01b648ad40648, boost::python::return_internal_reference<>(), "");
    class_6c0269be790a54f783049dc9adaafaf4.def("const_cast_derived", autowig::method_decorator_46731fcfc5155808b0c01b648ad40648);
    class_6c0269be790a54f783049dc9adaafaf4.def("const_derived", method_pointer_fd3b42cb705a56cc8b06a19f53c6f62d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6c0269be790a54f783049dc9adaafaf4.def("rows", method_pointer_0c0459e7652458038b3e64c3535039e1, "");
    class_6c0269be790a54f783049dc9adaafaf4.def("cols", method_pointer_b9528dd441445198ada06196a02480eb, "");
    class_6c0269be790a54f783049dc9adaafaf4.def("size", method_pointer_faa907843e1c58159b0ac72413ba9c26, "");

}