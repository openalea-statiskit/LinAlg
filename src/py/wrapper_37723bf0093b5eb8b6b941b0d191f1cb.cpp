#include "_ieigen.h"


namespace autowig
{
    void method_decorator_06d5511caeaa5697a52716b667398f18(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > > & instance, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_99f61db54e295e98b20d3ae976a2d0d4(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > > & instance, double  const & param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_9790efda92a654ab84811fe072ba09cc(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_37723bf0093b5eb8b6b941b0d191f1cb()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_06d5511caeaa5697a52716b667398f18)() = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > >::derived;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_d84e1eb0a53f535ca111932adab839bf)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_845141fd907d5dcaaa0d4a7f4faa7f65)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > >::matrixU;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_4a3ccf0e914b5163809c0d44f9f7987b)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > >::matrixV;
    class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_dc4931c00f8a5cbb8f7b88383d0e7499)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > >::singularValues;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_42285de223bd5f2bba6e4db2065d43ea)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > >::nonzeroSingularValues;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_a381b69a14d35679a49ec37570bb42d6)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > >::rank;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_99f61db54e295e98b20d3ae976a2d0d4)(double  const &) = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > >::setThreshold;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_9790efda92a654ab84811fe072ba09cc)(enum ::Eigen::Default_t ) = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > >::setThreshold;
    double  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_d62744cf047454a6904cd91ee81a628d)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > >::threshold;
    bool  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_a75e794465e15caa999b89c461380163)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > >::computeU;
    bool  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_f85e0cf95c175abf95ef57c582e86dc9)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > >::computeV;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_27b5aea2045f59fe97153b86a79ed06c)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > >::rows;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_0f38069619b75f3884920ede8001772f)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > >::cols;
    boost::python::class_< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > >, autowig::HeldType< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > > > > class_37723bf0093b5eb8b6b941b0d191f1cb("_SVDBase_37723bf0093b5eb8b6b941b0d191f1cb", "", boost::python::no_init);
    class_37723bf0093b5eb8b6b941b0d191f1cb.def(boost::python::init< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 2 > >  const & >(""));
    class_37723bf0093b5eb8b6b941b0d191f1cb.def("derived", method_pointer_06d5511caeaa5697a52716b667398f18, boost::python::return_internal_reference<>(), "");
    class_37723bf0093b5eb8b6b941b0d191f1cb.def("derived", autowig::method_decorator_06d5511caeaa5697a52716b667398f18);
    class_37723bf0093b5eb8b6b941b0d191f1cb.def("derived", method_pointer_d84e1eb0a53f535ca111932adab839bf, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_37723bf0093b5eb8b6b941b0d191f1cb.def("matrix_u", method_pointer_845141fd907d5dcaaa0d4a7f4faa7f65, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_37723bf0093b5eb8b6b941b0d191f1cb.def("matrix_v", method_pointer_4a3ccf0e914b5163809c0d44f9f7987b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_37723bf0093b5eb8b6b941b0d191f1cb.def("singular_values", method_pointer_dc4931c00f8a5cbb8f7b88383d0e7499, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_37723bf0093b5eb8b6b941b0d191f1cb.def("nonzero_singular_values", method_pointer_42285de223bd5f2bba6e4db2065d43ea, "");
    class_37723bf0093b5eb8b6b941b0d191f1cb.def("rank", method_pointer_a381b69a14d35679a49ec37570bb42d6, "");
    class_37723bf0093b5eb8b6b941b0d191f1cb.def("set_threshold", method_pointer_99f61db54e295e98b20d3ae976a2d0d4, boost::python::return_internal_reference<>(), "");
    class_37723bf0093b5eb8b6b941b0d191f1cb.def("set_threshold", autowig::method_decorator_99f61db54e295e98b20d3ae976a2d0d4);
    class_37723bf0093b5eb8b6b941b0d191f1cb.def("set_threshold", method_pointer_9790efda92a654ab84811fe072ba09cc, boost::python::return_internal_reference<>(), "");
    class_37723bf0093b5eb8b6b941b0d191f1cb.def("set_threshold", autowig::method_decorator_9790efda92a654ab84811fe072ba09cc);
    class_37723bf0093b5eb8b6b941b0d191f1cb.def("threshold", method_pointer_d62744cf047454a6904cd91ee81a628d, "");
    class_37723bf0093b5eb8b6b941b0d191f1cb.def("compute_u", method_pointer_a75e794465e15caa999b89c461380163, "");
    class_37723bf0093b5eb8b6b941b0d191f1cb.def("compute_v", method_pointer_f85e0cf95c175abf95ef57c582e86dc9, "");
    class_37723bf0093b5eb8b6b941b0d191f1cb.def("rows", method_pointer_27b5aea2045f59fe97153b86a79ed06c, "");
    class_37723bf0093b5eb8b6b941b0d191f1cb.def("cols", method_pointer_0f38069619b75f3884920ede8001772f, "");

}