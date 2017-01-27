#include "_ieigen.h"


namespace autowig
{
    void method_decorator_5105997e10ee535b85795c7bbff02a92(class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > & instance, float  const & param_in_0, class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_8f5a26c3840d586a9726dff7871a7224(class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_e368d2b375445940a6388375fe4b3878()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_5d4763c8a9a35ae6a98728a39db39ce9)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::matrixLU;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_80eb219b6f6655c684776efa49065bb3)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::nonzeroPivots;
    float  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_d6b34a1481575a5bbf471e6aefbfcadf)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::maxPivot;
    class ::Eigen::PermutationMatrix< 3, 3, int >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_35e905ce1c8c5221a0ee49c52cd1b33d)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::permutationP;
    class ::Eigen::PermutationMatrix< 3, 3, int >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_94b7ca0432395e89866c7ae4e40f35a8)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::permutationQ;
    float  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_88de7ecc577852b7ba6e48a4cc1d9881)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::rcond;
    struct ::std::complex< float >  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_5c5fe2f2e70e5506aa74c58f1da120cc)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::determinant;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >  & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_5105997e10ee535b85795c7bbff02a92)(float  const &) = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::setThreshold;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >  & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_8f5a26c3840d586a9726dff7871a7224)(enum ::Eigen::Default_t ) = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::setThreshold;
    float  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_868d6e1da5425ddda9f84145d83a7ba1)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::threshold;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_3368bb297de65a80a17f814a279350d4)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::rank;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_60d27763ff9f5393b672b826623fe534)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::dimensionOfKernel;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_0284768752b75bd5bd29f61fce912a1c)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::isInjective;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_8621ba9d324d5caba910f13b30aa33cd)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::isSurjective;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_2b7f9bd25f5d5a5a98449ca59fb06e6e)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::isInvertible;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 >  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_acabd7c098d25771af7121683fdd045d)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::reconstructedMatrix;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_c1b4836d4f6459ccb68c6aaf9dd7eba0)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::rows;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 3, 3, 0, 3, 3 > >::*method_pointer_0700d89983785834947034309996548d)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >::cols;
    boost::python::class_< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > >, boost::python::bases< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > > > > class_e368d2b375445940a6388375fe4b3878("_FullPivLU_e368d2b375445940a6388375fe4b3878", "", boost::python::no_init);
    class_e368d2b375445940a6388375fe4b3878.def(boost::python::init<  >(""));
    class_e368d2b375445940a6388375fe4b3878.def(boost::python::init< long int , long int  >(""));
    class_e368d2b375445940a6388375fe4b3878.def("matrix_lu", method_pointer_5d4763c8a9a35ae6a98728a39db39ce9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e368d2b375445940a6388375fe4b3878.def("nonzero_pivots", method_pointer_80eb219b6f6655c684776efa49065bb3, "");
    class_e368d2b375445940a6388375fe4b3878.def("max_pivot", method_pointer_d6b34a1481575a5bbf471e6aefbfcadf, "");
    class_e368d2b375445940a6388375fe4b3878.def("permutation_p", method_pointer_35e905ce1c8c5221a0ee49c52cd1b33d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e368d2b375445940a6388375fe4b3878.def("permutation_q", method_pointer_94b7ca0432395e89866c7ae4e40f35a8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e368d2b375445940a6388375fe4b3878.def("rcond", method_pointer_88de7ecc577852b7ba6e48a4cc1d9881, "");
    class_e368d2b375445940a6388375fe4b3878.def("determinant", method_pointer_5c5fe2f2e70e5506aa74c58f1da120cc, "");
    class_e368d2b375445940a6388375fe4b3878.def("set_threshold", method_pointer_5105997e10ee535b85795c7bbff02a92, boost::python::return_internal_reference<>(), "");
    class_e368d2b375445940a6388375fe4b3878.def("set_threshold", autowig::method_decorator_5105997e10ee535b85795c7bbff02a92);
    class_e368d2b375445940a6388375fe4b3878.def("set_threshold", method_pointer_8f5a26c3840d586a9726dff7871a7224, boost::python::return_internal_reference<>(), "");
    class_e368d2b375445940a6388375fe4b3878.def("set_threshold", autowig::method_decorator_8f5a26c3840d586a9726dff7871a7224);
    class_e368d2b375445940a6388375fe4b3878.def("threshold", method_pointer_868d6e1da5425ddda9f84145d83a7ba1, "");
    class_e368d2b375445940a6388375fe4b3878.def("rank", method_pointer_3368bb297de65a80a17f814a279350d4, "");
    class_e368d2b375445940a6388375fe4b3878.def("dimension_of_kernel", method_pointer_60d27763ff9f5393b672b826623fe534, "");
    class_e368d2b375445940a6388375fe4b3878.def("is_injective", method_pointer_0284768752b75bd5bd29f61fce912a1c, "");
    class_e368d2b375445940a6388375fe4b3878.def("is_surjective", method_pointer_8621ba9d324d5caba910f13b30aa33cd, "");
    class_e368d2b375445940a6388375fe4b3878.def("is_invertible", method_pointer_2b7f9bd25f5d5a5a98449ca59fb06e6e, "");
    class_e368d2b375445940a6388375fe4b3878.def("reconstructed_matrix", method_pointer_acabd7c098d25771af7121683fdd045d, "");
    class_e368d2b375445940a6388375fe4b3878.def("rows", method_pointer_c1b4836d4f6459ccb68c6aaf9dd7eba0, "");
    class_e368d2b375445940a6388375fe4b3878.def("cols", method_pointer_0700d89983785834947034309996548d, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 3, 0, 3, 3 > > > > >();
    }

}