#include "_ieigen.h"


namespace autowig
{
    void method_decorator_6230d6d8bf3f57cc81dbdfdb78551c31(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > > & instance, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_f00367d7ed095c5faef17bb5b428c371(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > > & instance, double  const & param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_4f9a24c24c8452ac82de4503dd432ce4(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_268d5f6056b05163a7a17776a4697d96()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_6230d6d8bf3f57cc81dbdfdb78551c31)() = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > >::derived;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_f1b4ec5ffb2a5e35bb31b9634e5d095f)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_c2a9e07092785cdc871489c925adaff8)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > >::matrixU;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_4689e6eac1d0574196f6736e75edfe0b)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > >::matrixV;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_9607be87aa9651aaab6423531a1681a7)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > >::singularValues;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_0c7e37b1ecd35f848cf3b0aa130c61f8)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > >::nonzeroSingularValues;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_03c11c22ee33583db34e1b50aa9b5926)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > >::rank;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_f00367d7ed095c5faef17bb5b428c371)(double  const &) = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > >::setThreshold;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_4f9a24c24c8452ac82de4503dd432ce4)(enum ::Eigen::Default_t ) = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > >::setThreshold;
    double  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_e877964cc50954e18cfdd8b310e71eed)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > >::threshold;
    bool  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_baf7dd3e9618548e8df543f04a3f34f8)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > >::computeU;
    bool  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_f55180316beb5abcb65a7c6195e26494)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > >::computeV;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_0bc0009217c45892ac40715a29870804)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > >::rows;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > >::*method_pointer_861ff3937205582fb2b9e4ca665c93d8)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > >::cols;
    boost::python::class_< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > >, autowig::HeldType< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > > > > class_268d5f6056b05163a7a17776a4697d96("_SVDBase_268d5f6056b05163a7a17776a4697d96", "", boost::python::no_init);
    class_268d5f6056b05163a7a17776a4697d96.def(boost::python::init< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 2 > >  const & >(""));
    class_268d5f6056b05163a7a17776a4697d96.def("derived", method_pointer_6230d6d8bf3f57cc81dbdfdb78551c31, boost::python::return_internal_reference<>(), "");
    class_268d5f6056b05163a7a17776a4697d96.def("derived", autowig::method_decorator_6230d6d8bf3f57cc81dbdfdb78551c31);
    class_268d5f6056b05163a7a17776a4697d96.def("derived", method_pointer_f1b4ec5ffb2a5e35bb31b9634e5d095f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_268d5f6056b05163a7a17776a4697d96.def("matrix_u", method_pointer_c2a9e07092785cdc871489c925adaff8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_268d5f6056b05163a7a17776a4697d96.def("matrix_v", method_pointer_4689e6eac1d0574196f6736e75edfe0b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_268d5f6056b05163a7a17776a4697d96.def("singular_values", method_pointer_9607be87aa9651aaab6423531a1681a7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_268d5f6056b05163a7a17776a4697d96.def("nonzero_singular_values", method_pointer_0c7e37b1ecd35f848cf3b0aa130c61f8, "");
    class_268d5f6056b05163a7a17776a4697d96.def("rank", method_pointer_03c11c22ee33583db34e1b50aa9b5926, "");
    class_268d5f6056b05163a7a17776a4697d96.def("set_threshold", method_pointer_f00367d7ed095c5faef17bb5b428c371, boost::python::return_internal_reference<>(), "");
    class_268d5f6056b05163a7a17776a4697d96.def("set_threshold", autowig::method_decorator_f00367d7ed095c5faef17bb5b428c371);
    class_268d5f6056b05163a7a17776a4697d96.def("set_threshold", method_pointer_4f9a24c24c8452ac82de4503dd432ce4, boost::python::return_internal_reference<>(), "");
    class_268d5f6056b05163a7a17776a4697d96.def("set_threshold", autowig::method_decorator_4f9a24c24c8452ac82de4503dd432ce4);
    class_268d5f6056b05163a7a17776a4697d96.def("threshold", method_pointer_e877964cc50954e18cfdd8b310e71eed, "");
    class_268d5f6056b05163a7a17776a4697d96.def("compute_u", method_pointer_baf7dd3e9618548e8df543f04a3f34f8, "");
    class_268d5f6056b05163a7a17776a4697d96.def("compute_v", method_pointer_f55180316beb5abcb65a7c6195e26494, "");
    class_268d5f6056b05163a7a17776a4697d96.def("rows", method_pointer_0bc0009217c45892ac40715a29870804, "");
    class_268d5f6056b05163a7a17776a4697d96.def("cols", method_pointer_861ff3937205582fb2b9e4ca665c93d8, "");

}