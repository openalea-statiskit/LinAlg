#include "_ieigen.h"


namespace autowig
{
    void method_decorator_16934732b825562cbd743f01f60d3dae(class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > & instance, float  const & param_in_0, class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_17f3a14a6f135dea94ceee4b8ef7ba52(class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_132c072a6b845d5989648918c832a1d3()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_93f88db12d615b8b96ec10019947c65d)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::matrixLU;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_cce8b1685da05bc29b279f7dbfe7939c)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::nonzeroPivots;
    float  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_d55711f841dc50eaa5d7255610ccffbe)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::maxPivot;
    class ::Eigen::PermutationMatrix< 2, 2, int >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_8087e52a9c745f6483dc3f61e34cfca7)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::permutationP;
    class ::Eigen::PermutationMatrix< 2, 2, int >  const & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_ce3422843bed5c3b9c280068a6392fc6)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::permutationQ;
    float  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_83a50968b4335df7bf58e790cf7d1f56)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::rcond;
    struct ::std::complex< float >  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_c9703601990250e885c0a23188c2afc1)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::determinant;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >  & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_16934732b825562cbd743f01f60d3dae)(float  const &) = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::setThreshold;
    class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >  & (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_17f3a14a6f135dea94ceee4b8ef7ba52)(enum ::Eigen::Default_t ) = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::setThreshold;
    float  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_4caffb1bbfcd55a0a4917e364ef4f06d)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::threshold;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_a78e4bee02475d819c596f4530b703fa)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::rank;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_27d86ee5dec45d4baf5a4581bbc43ea8)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::dimensionOfKernel;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_e6d70bc4b1935b9e9992a01d3f996b68)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::isInjective;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_c986f05a30a85dcb8d438debde381720)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::isSurjective;
    bool  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_254327e974c85e898b615f717ae31dec)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::isInvertible;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_cf43fc057a1a5a898eb5e80c4a03d51f)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::reconstructedMatrix;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_6d094f44db6a5b00813c865ac4e90e7a)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::rows;
    long int  (::Eigen::FullPivLU< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 > >::*method_pointer_0a6b92473c3856f89ffd3d8052130db4)() const = &::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >::cols;
    boost::python::class_< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > >, boost::python::bases< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > > > > class_132c072a6b845d5989648918c832a1d3("_FullPivLU_132c072a6b845d5989648918c832a1d3", "", boost::python::no_init);
    class_132c072a6b845d5989648918c832a1d3.def(boost::python::init<  >(""));
    class_132c072a6b845d5989648918c832a1d3.def(boost::python::init< long int , long int  >(""));
    class_132c072a6b845d5989648918c832a1d3.def("matrix_lu", method_pointer_93f88db12d615b8b96ec10019947c65d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_132c072a6b845d5989648918c832a1d3.def("nonzero_pivots", method_pointer_cce8b1685da05bc29b279f7dbfe7939c, "");
    class_132c072a6b845d5989648918c832a1d3.def("max_pivot", method_pointer_d55711f841dc50eaa5d7255610ccffbe, "");
    class_132c072a6b845d5989648918c832a1d3.def("permutation_p", method_pointer_8087e52a9c745f6483dc3f61e34cfca7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_132c072a6b845d5989648918c832a1d3.def("permutation_q", method_pointer_ce3422843bed5c3b9c280068a6392fc6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_132c072a6b845d5989648918c832a1d3.def("rcond", method_pointer_83a50968b4335df7bf58e790cf7d1f56, "");
    class_132c072a6b845d5989648918c832a1d3.def("determinant", method_pointer_c9703601990250e885c0a23188c2afc1, "");
    class_132c072a6b845d5989648918c832a1d3.def("set_threshold", method_pointer_16934732b825562cbd743f01f60d3dae, boost::python::return_internal_reference<>(), "");
    class_132c072a6b845d5989648918c832a1d3.def("set_threshold", autowig::method_decorator_16934732b825562cbd743f01f60d3dae);
    class_132c072a6b845d5989648918c832a1d3.def("set_threshold", method_pointer_17f3a14a6f135dea94ceee4b8ef7ba52, boost::python::return_internal_reference<>(), "");
    class_132c072a6b845d5989648918c832a1d3.def("set_threshold", autowig::method_decorator_17f3a14a6f135dea94ceee4b8ef7ba52);
    class_132c072a6b845d5989648918c832a1d3.def("threshold", method_pointer_4caffb1bbfcd55a0a4917e364ef4f06d, "");
    class_132c072a6b845d5989648918c832a1d3.def("rank", method_pointer_a78e4bee02475d819c596f4530b703fa, "");
    class_132c072a6b845d5989648918c832a1d3.def("dimension_of_kernel", method_pointer_27d86ee5dec45d4baf5a4581bbc43ea8, "");
    class_132c072a6b845d5989648918c832a1d3.def("is_injective", method_pointer_e6d70bc4b1935b9e9992a01d3f996b68, "");
    class_132c072a6b845d5989648918c832a1d3.def("is_surjective", method_pointer_c986f05a30a85dcb8d438debde381720, "");
    class_132c072a6b845d5989648918c832a1d3.def("is_invertible", method_pointer_254327e974c85e898b615f717ae31dec, "");
    class_132c072a6b845d5989648918c832a1d3.def("reconstructed_matrix", method_pointer_cf43fc057a1a5a898eb5e80c4a03d51f, "");
    class_132c072a6b845d5989648918c832a1d3.def("rows", method_pointer_6d094f44db6a5b00813c865ac4e90e7a, "");
    class_132c072a6b845d5989648918c832a1d3.def("cols", method_pointer_0a6b92473c3856f89ffd3d8052130db4, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > >, autowig::HeldType< class ::Eigen::SolverBase< class ::Eigen::FullPivLU< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 > > > > >();
    }

}