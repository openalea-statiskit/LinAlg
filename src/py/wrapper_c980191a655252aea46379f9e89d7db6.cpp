#include "_ieigen.h"


namespace autowig
{
    void method_decorator_6bdc167f6ea956c68804938c55ae2130(class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > & instance, double  const & param_in_0, class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_d0b4afc645e5544096f1bd3ce6dd0a8c(class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_c980191a655252aea46379f9e89d7db6()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_275ed9a3282d5149b9b6de55f634de32)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::matrixLU;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_5cb8a27cf21d53e187065ccf9619e4c9)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::nonzeroPivots;
    double  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_ebd5403887c35bf99d07da375dec5d3a)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::maxPivot;
    class ::Eigen::PermutationMatrix< 2, 2, int >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_481abd8c52435475a8bbeaea2ac0e050)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::permutationP;
    class ::Eigen::PermutationMatrix< 2, 2, int >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_9eb82ead1ed05eb9a08306d3e9329507)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::permutationQ;
    double  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_6b705b7a65b854ca86020907848d5e23)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::rcond;
    struct ::std::complex< double >  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_0a23ac4616395f84b4808c2e3405744d)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::determinant;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >  & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_6bdc167f6ea956c68804938c55ae2130)(double  const &) = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::setThreshold;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >  & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_d0b4afc645e5544096f1bd3ce6dd0a8c)(enum ::Eigen::Default_t ) = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::setThreshold;
    double  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_23c650a81b705d41912ccaf04cdf111b)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::threshold;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_68ab398d9c3e54fca8acfe3c494ccd26)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::rank;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_31ca439e2cdb56519e3b68369693ef93)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::dimensionOfKernel;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_22acc930293b5d1fa6557a20cf7d2809)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::isInjective;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_f53a5f50c90f5d88a3d2fcd0392a241a)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::isSurjective;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_5096656d0bce5421beb28edadd3eb336)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::isInvertible;
    class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_1925171eec2556158610d6d3d01c25ba)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::reconstructedMatrix;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_24b02a8456d55208bed8618d4196aee0)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::rows;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 > >::*method_pointer_8e45a42ed6135c16b2ed4f4aac32652e)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >::cols;
    boost::python::class_< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > >, boost::python::bases< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > > > > class_c980191a655252aea46379f9e89d7db6("_FullPivLU_c980191a655252aea46379f9e89d7db6", "", boost::python::no_init);
    class_c980191a655252aea46379f9e89d7db6.def(boost::python::init<  >(""));
    class_c980191a655252aea46379f9e89d7db6.def(boost::python::init< long int , long int  >(""));
    class_c980191a655252aea46379f9e89d7db6.def("matrix_lu", method_pointer_275ed9a3282d5149b9b6de55f634de32, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c980191a655252aea46379f9e89d7db6.def("nonzero_pivots", method_pointer_5cb8a27cf21d53e187065ccf9619e4c9, "");
    class_c980191a655252aea46379f9e89d7db6.def("max_pivot", method_pointer_ebd5403887c35bf99d07da375dec5d3a, "");
    class_c980191a655252aea46379f9e89d7db6.def("permutation_p", method_pointer_481abd8c52435475a8bbeaea2ac0e050, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c980191a655252aea46379f9e89d7db6.def("permutation_q", method_pointer_9eb82ead1ed05eb9a08306d3e9329507, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c980191a655252aea46379f9e89d7db6.def("rcond", method_pointer_6b705b7a65b854ca86020907848d5e23, "");
    class_c980191a655252aea46379f9e89d7db6.def("determinant", method_pointer_0a23ac4616395f84b4808c2e3405744d, "");
    class_c980191a655252aea46379f9e89d7db6.def("set_threshold", method_pointer_6bdc167f6ea956c68804938c55ae2130, boost::python::return_internal_reference<>(), "");
    class_c980191a655252aea46379f9e89d7db6.def("set_threshold", autowig::method_decorator_6bdc167f6ea956c68804938c55ae2130);
    class_c980191a655252aea46379f9e89d7db6.def("set_threshold", method_pointer_d0b4afc645e5544096f1bd3ce6dd0a8c, boost::python::return_internal_reference<>(), "");
    class_c980191a655252aea46379f9e89d7db6.def("set_threshold", autowig::method_decorator_d0b4afc645e5544096f1bd3ce6dd0a8c);
    class_c980191a655252aea46379f9e89d7db6.def("threshold", method_pointer_23c650a81b705d41912ccaf04cdf111b, "");
    class_c980191a655252aea46379f9e89d7db6.def("rank", method_pointer_68ab398d9c3e54fca8acfe3c494ccd26, "");
    class_c980191a655252aea46379f9e89d7db6.def("dimension_of_kernel", method_pointer_31ca439e2cdb56519e3b68369693ef93, "");
    class_c980191a655252aea46379f9e89d7db6.def("is_injective", method_pointer_22acc930293b5d1fa6557a20cf7d2809, "");
    class_c980191a655252aea46379f9e89d7db6.def("is_surjective", method_pointer_f53a5f50c90f5d88a3d2fcd0392a241a, "");
    class_c980191a655252aea46379f9e89d7db6.def("is_invertible", method_pointer_5096656d0bce5421beb28edadd3eb336, "");
    class_c980191a655252aea46379f9e89d7db6.def("reconstructed_matrix", method_pointer_1925171eec2556158610d6d3d01c25ba, "");
    class_c980191a655252aea46379f9e89d7db6.def("rows", method_pointer_24b02a8456d55208bed8618d4196aee0, "");
    class_c980191a655252aea46379f9e89d7db6.def("cols", method_pointer_8e45a42ed6135c16b2ed4f4aac32652e, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > > > >();
    }

}