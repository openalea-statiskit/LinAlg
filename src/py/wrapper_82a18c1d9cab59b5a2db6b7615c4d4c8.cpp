#include "_ieigen.h"


namespace autowig
{
    void method_decorator_01e3575fed005c78b95335bdce44cf1d(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  const & param_in_0, unsigned int  param_in_1, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 >  & param_out)     { instance.compute(param_in_0, param_in_1) = param_out; }
    void method_decorator_467af0b2850359599c05e860b2268b26(class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  const & param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 >  & param_out)     { instance.compute(param_in_0) = param_out; }
}


void wrapper_82a18c1d9cab59b5a2db6b7615c4d4c8()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 >  & (::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 >::*method_pointer_01e3575fed005c78b95335bdce44cf1d)(class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  const &, unsigned int ) = &::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 >::compute;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 >  & (::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 >::*method_pointer_467af0b2850359599c05e860b2268b26)(class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  const &) = &::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 >::compute;
    boost::python::class_< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 >, autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > >, boost::python::bases< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > > > > class_82a18c1d9cab59b5a2db6b7615c4d4c8("_JacobiSVD_82a18c1d9cab59b5a2db6b7615c4d4c8", "", boost::python::no_init);
    class_82a18c1d9cab59b5a2db6b7615c4d4c8.def("compute", method_pointer_01e3575fed005c78b95335bdce44cf1d, boost::python::return_internal_reference<>(), "");
    class_82a18c1d9cab59b5a2db6b7615c4d4c8.def("compute", autowig::method_decorator_01e3575fed005c78b95335bdce44cf1d);
    class_82a18c1d9cab59b5a2db6b7615c4d4c8.def("compute", method_pointer_467af0b2850359599c05e860b2268b26, boost::python::return_internal_reference<>(), "");
    class_82a18c1d9cab59b5a2db6b7615c4d4c8.def("compute", autowig::method_decorator_467af0b2850359599c05e860b2268b26);

    if(std::is_class< autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > >, autowig::HeldType< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 2 > > > >();
    }

}