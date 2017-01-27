#include "_ieigen.h"


namespace autowig
{
    void method_decorator_cfae867ad6715aa5a465159dcc022949(class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > & instance, double  const & param_in_0, class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_08427ee52c93543f819c635868c6997a(class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_77dd9ee3c46e59f29c78d2dfdf039f11()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_d875b534cde457db9b958bf8a9d22196)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::matrixQR;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_f078a9cb98865d35b70b0645120296c8)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::matrixR;
    class ::Eigen::PermutationMatrix< -1, -1, int >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_23d227f7af165d91ac2a7243a4725288)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::colsPermutation;
    double  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_73576ac1e99c518a99097fc8dca4706f)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::absDeterminant;
    double  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_3a06bc6fcd1b5b4b959de357f97a0710)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::logAbsDeterminant;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_d14669361a05539b8b71e689d4c26ff2)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::rank;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_2168348b65b657cbb702d2f099cd5003)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::dimensionOfKernel;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_e27357bb0c1c554fafaddef090985948)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::isInjective;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_cb5c224070d55337bd61fd6f85f8632a)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::isSurjective;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_f0b3c4ff15735a4c803ba119d9a3d26c)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::isInvertible;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_cdfb0d536eb9565db8cca95c81a8551c)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::rows;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_b3a057986efc5b57bb03ed157853f872)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::cols;
    class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_c4a4cd44d88950bf98fcf9c72d1345ea)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::hCoeffs;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >  & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_cfae867ad6715aa5a465159dcc022949)(double  const &) = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::setThreshold;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >  & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_08427ee52c93543f819c635868c6997a)(enum ::Eigen::Default_t ) = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::setThreshold;
    double  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_82259f46ef1a5da3b8c04bd42e22163a)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::threshold;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_9b954c118c5d55858d9043b3e6a6ef09)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::nonzeroPivots;
    double  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_48629526ab525fc3b083364254d57a55)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::maxPivot;
    enum ::Eigen::ComputationInfo  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 > >::*method_pointer_d79e8a217ed05da9aafb2203dda8fa35)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >::info;
    boost::python::class_< class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >, autowig::HeldType< class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > > > > class_77dd9ee3c46e59f29c78d2dfdf039f11("_ColPivHouseholderQR_77dd9ee3c46e59f29c78d2dfdf039f11", "", boost::python::no_init);
    class_77dd9ee3c46e59f29c78d2dfdf039f11.def(boost::python::init<  >(""));
    class_77dd9ee3c46e59f29c78d2dfdf039f11.def(boost::python::init< long int , long int  >(""));
    class_77dd9ee3c46e59f29c78d2dfdf039f11.def(boost::python::init< class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 > >  const & >(""));
    class_77dd9ee3c46e59f29c78d2dfdf039f11.def("matrix_qr", method_pointer_d875b534cde457db9b958bf8a9d22196, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_77dd9ee3c46e59f29c78d2dfdf039f11.def("matrix_r", method_pointer_f078a9cb98865d35b70b0645120296c8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_77dd9ee3c46e59f29c78d2dfdf039f11.def("cols_permutation", method_pointer_23d227f7af165d91ac2a7243a4725288, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_77dd9ee3c46e59f29c78d2dfdf039f11.def("abs_determinant", method_pointer_73576ac1e99c518a99097fc8dca4706f, "");
    class_77dd9ee3c46e59f29c78d2dfdf039f11.def("log_abs_determinant", method_pointer_3a06bc6fcd1b5b4b959de357f97a0710, "");
    class_77dd9ee3c46e59f29c78d2dfdf039f11.def("rank", method_pointer_d14669361a05539b8b71e689d4c26ff2, "");
    class_77dd9ee3c46e59f29c78d2dfdf039f11.def("dimension_of_kernel", method_pointer_2168348b65b657cbb702d2f099cd5003, "");
    class_77dd9ee3c46e59f29c78d2dfdf039f11.def("is_injective", method_pointer_e27357bb0c1c554fafaddef090985948, "");
    class_77dd9ee3c46e59f29c78d2dfdf039f11.def("is_surjective", method_pointer_cb5c224070d55337bd61fd6f85f8632a, "");
    class_77dd9ee3c46e59f29c78d2dfdf039f11.def("is_invertible", method_pointer_f0b3c4ff15735a4c803ba119d9a3d26c, "");
    class_77dd9ee3c46e59f29c78d2dfdf039f11.def("rows", method_pointer_cdfb0d536eb9565db8cca95c81a8551c, "");
    class_77dd9ee3c46e59f29c78d2dfdf039f11.def("cols", method_pointer_b3a057986efc5b57bb03ed157853f872, "");
    class_77dd9ee3c46e59f29c78d2dfdf039f11.def("h_coeffs", method_pointer_c4a4cd44d88950bf98fcf9c72d1345ea, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_77dd9ee3c46e59f29c78d2dfdf039f11.def("set_threshold", method_pointer_cfae867ad6715aa5a465159dcc022949, boost::python::return_internal_reference<>(), "");
    class_77dd9ee3c46e59f29c78d2dfdf039f11.def("set_threshold", autowig::method_decorator_cfae867ad6715aa5a465159dcc022949);
    class_77dd9ee3c46e59f29c78d2dfdf039f11.def("set_threshold", method_pointer_08427ee52c93543f819c635868c6997a, boost::python::return_internal_reference<>(), "");
    class_77dd9ee3c46e59f29c78d2dfdf039f11.def("set_threshold", autowig::method_decorator_08427ee52c93543f819c635868c6997a);
    class_77dd9ee3c46e59f29c78d2dfdf039f11.def("threshold", method_pointer_82259f46ef1a5da3b8c04bd42e22163a, "");
    class_77dd9ee3c46e59f29c78d2dfdf039f11.def("nonzero_pivots", method_pointer_9b954c118c5d55858d9043b3e6a6ef09, "");
    class_77dd9ee3c46e59f29c78d2dfdf039f11.def("max_pivot", method_pointer_48629526ab525fc3b083364254d57a55, "");
    class_77dd9ee3c46e59f29c78d2dfdf039f11.def("info", method_pointer_d79e8a217ed05da9aafb2203dda8fa35, "");

}