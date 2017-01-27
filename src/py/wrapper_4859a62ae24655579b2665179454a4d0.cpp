#include "_ieigen.h"


namespace autowig
{
    void method_decorator_faf1a2ef3eff5b7f8d69b881d30109b9(class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > & instance, double  const & param_in_0, class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_1a6e137b5c355ecab36125730dd57c0c(class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_4859a62ae24655579b2665179454a4d0()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_de5abff90fbf54498e63cf5953cb8000)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::matrixQR;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_75c7482431ca513a85d5d14bf3f2e79e)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::matrixR;
    class ::Eigen::PermutationMatrix< 3, 3, int >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_a77b1a5f109b5d83913755fb0e19f1f7)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::colsPermutation;
    double  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_4cc6edc81ac3527d808a13ed9dc96772)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::absDeterminant;
    double  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_a8a346ddd69e5fe9ad2631635c9f055a)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::logAbsDeterminant;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_52ad978f7b8c5c19a9b57c3f06c5f22e)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::rank;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_b43e1310064a50dfafefa27ca04233ba)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::dimensionOfKernel;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_310ea06de0f557ab80c58b855527654b)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::isInjective;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_c6ab06a7eaa95c8ba4b79d8a65f7cfd0)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::isSurjective;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_05b45cc06aec5219b44bb2932de92a83)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::isInvertible;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_495b0561e50e58f08e8f1b706973f4f9)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::rows;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_9f9489c5657b5adf9fb72ec10bede75c)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::cols;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_4d5bb42be80a547c86d145b6919787d9)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::hCoeffs;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >  & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_faf1a2ef3eff5b7f8d69b881d30109b9)(double  const &) = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::setThreshold;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >  & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_1a6e137b5c355ecab36125730dd57c0c)(enum ::Eigen::Default_t ) = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::setThreshold;
    double  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_641ee56ff61053eea38a8084fc65eabc)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::threshold;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_34eab9212fd259c4985da48159471dde)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::nonzeroPivots;
    double  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_9df59be846225b2db96627856df0226f)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::maxPivot;
    enum ::Eigen::ComputationInfo  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 > >::*method_pointer_0ae7977a8f095d869111c9db93c55d8b)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >::info;
    boost::python::class_< class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > > > class_4859a62ae24655579b2665179454a4d0("_ColPivHouseholderQR_4859a62ae24655579b2665179454a4d0", "", boost::python::no_init);
    class_4859a62ae24655579b2665179454a4d0.def("matrix_qr", method_pointer_de5abff90fbf54498e63cf5953cb8000, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4859a62ae24655579b2665179454a4d0.def("matrix_r", method_pointer_75c7482431ca513a85d5d14bf3f2e79e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4859a62ae24655579b2665179454a4d0.def("cols_permutation", method_pointer_a77b1a5f109b5d83913755fb0e19f1f7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4859a62ae24655579b2665179454a4d0.def("abs_determinant", method_pointer_4cc6edc81ac3527d808a13ed9dc96772, "");
    class_4859a62ae24655579b2665179454a4d0.def("log_abs_determinant", method_pointer_a8a346ddd69e5fe9ad2631635c9f055a, "");
    class_4859a62ae24655579b2665179454a4d0.def("rank", method_pointer_52ad978f7b8c5c19a9b57c3f06c5f22e, "");
    class_4859a62ae24655579b2665179454a4d0.def("dimension_of_kernel", method_pointer_b43e1310064a50dfafefa27ca04233ba, "");
    class_4859a62ae24655579b2665179454a4d0.def("is_injective", method_pointer_310ea06de0f557ab80c58b855527654b, "");
    class_4859a62ae24655579b2665179454a4d0.def("is_surjective", method_pointer_c6ab06a7eaa95c8ba4b79d8a65f7cfd0, "");
    class_4859a62ae24655579b2665179454a4d0.def("is_invertible", method_pointer_05b45cc06aec5219b44bb2932de92a83, "");
    class_4859a62ae24655579b2665179454a4d0.def("rows", method_pointer_495b0561e50e58f08e8f1b706973f4f9, "");
    class_4859a62ae24655579b2665179454a4d0.def("cols", method_pointer_9f9489c5657b5adf9fb72ec10bede75c, "");
    class_4859a62ae24655579b2665179454a4d0.def("h_coeffs", method_pointer_4d5bb42be80a547c86d145b6919787d9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4859a62ae24655579b2665179454a4d0.def("set_threshold", method_pointer_faf1a2ef3eff5b7f8d69b881d30109b9, boost::python::return_internal_reference<>(), "");
    class_4859a62ae24655579b2665179454a4d0.def("set_threshold", autowig::method_decorator_faf1a2ef3eff5b7f8d69b881d30109b9);
    class_4859a62ae24655579b2665179454a4d0.def("set_threshold", method_pointer_1a6e137b5c355ecab36125730dd57c0c, boost::python::return_internal_reference<>(), "");
    class_4859a62ae24655579b2665179454a4d0.def("set_threshold", autowig::method_decorator_1a6e137b5c355ecab36125730dd57c0c);
    class_4859a62ae24655579b2665179454a4d0.def("threshold", method_pointer_641ee56ff61053eea38a8084fc65eabc, "");
    class_4859a62ae24655579b2665179454a4d0.def("nonzero_pivots", method_pointer_34eab9212fd259c4985da48159471dde, "");
    class_4859a62ae24655579b2665179454a4d0.def("max_pivot", method_pointer_9df59be846225b2db96627856df0226f, "");
    class_4859a62ae24655579b2665179454a4d0.def("info", method_pointer_0ae7977a8f095d869111c9db93c55d8b, "");

}