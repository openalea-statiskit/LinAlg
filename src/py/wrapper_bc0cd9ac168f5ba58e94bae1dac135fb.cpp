#include "_ieigen.h"


namespace autowig
{
    void method_decorator_4035e5bfed71587f886b3c9a1b3a2950(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_dcddd4de15e454c398e47c835312ad4c(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > const & instance, class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_bc0cd9ac168f5ba58e94bae1dac135fb()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_4035e5bfed71587f886b3c9a1b3a2950)() = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_0ae303d6556c5d5d91507ef8158f3c62)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_dcddd4de15e454c398e47c835312ad4c)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::const_cast_derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_79aa9ab21a5e51178c5c1077efc38089)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_08e48dccffc85ce0b4efdcfbcaf81078)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_45a8cc62702b55d999e9e8ade7048d0b)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_79e0c85d51d35fe1899014230f3900b7)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > > > class_bc0cd9ac168f5ba58e94bae1dac135fb("_EigenBase_bc0cd9ac168f5ba58e94bae1dac135fb", "", boost::python::no_init);
    class_bc0cd9ac168f5ba58e94bae1dac135fb.def("derived", method_pointer_4035e5bfed71587f886b3c9a1b3a2950, boost::python::return_internal_reference<>(), "");
    class_bc0cd9ac168f5ba58e94bae1dac135fb.def("derived", autowig::method_decorator_4035e5bfed71587f886b3c9a1b3a2950);
    class_bc0cd9ac168f5ba58e94bae1dac135fb.def("derived", method_pointer_0ae303d6556c5d5d91507ef8158f3c62, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bc0cd9ac168f5ba58e94bae1dac135fb.def("const_cast_derived", method_pointer_dcddd4de15e454c398e47c835312ad4c, boost::python::return_internal_reference<>(), "");
    class_bc0cd9ac168f5ba58e94bae1dac135fb.def("const_cast_derived", autowig::method_decorator_dcddd4de15e454c398e47c835312ad4c);
    class_bc0cd9ac168f5ba58e94bae1dac135fb.def("const_derived", method_pointer_79aa9ab21a5e51178c5c1077efc38089, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bc0cd9ac168f5ba58e94bae1dac135fb.def("rows", method_pointer_08e48dccffc85ce0b4efdcfbcaf81078, "");
    class_bc0cd9ac168f5ba58e94bae1dac135fb.def("cols", method_pointer_45a8cc62702b55d999e9e8ade7048d0b, "");
    class_bc0cd9ac168f5ba58e94bae1dac135fb.def("size", method_pointer_79e0c85d51d35fe1899014230f3900b7, "");

}