#include "_ieigen.h"


namespace autowig
{
}


void wrapper_9fba1e2929575bb1906325ce9ee2d561()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_f110939b62555548b3f2869af2210ddc)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_0cd562dc28be55bd8e63f9de5a222928)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 0 >::colIndexByOuterInner;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_e807ecf8a506588bb87cdebc4d0aff34)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 0 >::coeff;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_750f0351947a5415973dad79ff9a8522)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 0 >::coeffByOuterInner;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_c3d1ccf6c8ac5dcc8ffcfdb974407033)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 0 >::operator();
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_2fe7b75f5f085f09889874461a95eaa0)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 0 >::coeff;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_bc7f356f24f85b06ba30ed83546888a7)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 0 >::operator[];
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_0ef1774a27f35d489a00d6f3d42926ee)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 0 >::operator();
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_2928031ecf795a0e87c6df6157fedf28)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 0 >::x;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_52d3660aec215ea3ab5f8c5f1a9a5d7c)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 0 >::y;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_57a7062e5bc65b6c908400d7bddb6b2f)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 0 >::z;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_98c099e38be15158a00690c9a4843d15)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > > > class_9fba1e2929575bb1906325ce9ee2d561("_DenseCoeffsBase_9fba1e2929575bb1906325ce9ee2d561", "", boost::python::no_init);
    class_9fba1e2929575bb1906325ce9ee2d561.def("row_index_by_outer_inner", method_pointer_f110939b62555548b3f2869af2210ddc, "");
    class_9fba1e2929575bb1906325ce9ee2d561.def("col_index_by_outer_inner", method_pointer_0cd562dc28be55bd8e63f9de5a222928, "");
    class_9fba1e2929575bb1906325ce9ee2d561.def("coeff", method_pointer_e807ecf8a506588bb87cdebc4d0aff34, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_9fba1e2929575bb1906325ce9ee2d561.def("coeff_by_outer_inner", method_pointer_750f0351947a5415973dad79ff9a8522, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_9fba1e2929575bb1906325ce9ee2d561.def("__call__", method_pointer_c3d1ccf6c8ac5dcc8ffcfdb974407033, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_9fba1e2929575bb1906325ce9ee2d561.def("coeff", method_pointer_2fe7b75f5f085f09889874461a95eaa0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_9fba1e2929575bb1906325ce9ee2d561.def("__getitem__", method_pointer_bc7f356f24f85b06ba30ed83546888a7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_9fba1e2929575bb1906325ce9ee2d561.def("__call__", method_pointer_0ef1774a27f35d489a00d6f3d42926ee, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_9fba1e2929575bb1906325ce9ee2d561.def("x", method_pointer_2928031ecf795a0e87c6df6157fedf28, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_9fba1e2929575bb1906325ce9ee2d561.def("y", method_pointer_52d3660aec215ea3ab5f8c5f1a9a5d7c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_9fba1e2929575bb1906325ce9ee2d561.def("z", method_pointer_57a7062e5bc65b6c908400d7bddb6b2f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_9fba1e2929575bb1906325ce9ee2d561.def("w", method_pointer_98c099e38be15158a00690c9a4843d15, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > > >();
    }

}