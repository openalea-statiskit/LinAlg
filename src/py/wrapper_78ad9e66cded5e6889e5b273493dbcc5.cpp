#include "_ieigen.h"


namespace autowig
{
    void method_decorator_d7f4b9e75fc955ff9f8a4c490e270945(class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > & instance, float  const & param_in_0, class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_2f78ff898a2d5c5bbd6d5e418c45d8de(class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_78ad9e66cded5e6889e5b273493dbcc5()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_0f1b6cab7d815277ac629fa3674a59a6)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::matrixQR;
    class ::Eigen::PermutationMatrix< -1, -1, int >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_e8dfb71f03a4516c9c9714abe29146fd)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::colsPermutation;
    class ::Eigen::Matrix< long int, 1, -1, 1, 1, -1 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_47045871d50d5cc08270df65f106d7ae)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::rowsTranspositions;
    float  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_6b6cfcbdb4e259049e7ee0be812b9ee4)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::absDeterminant;
    float  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_9a27b89c09fd5b0596f5b668c6ed644e)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::logAbsDeterminant;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_e93775f47b1b525fa39f95cc12923ce9)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::rank;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_997c8e01de7f5e569422f583dbaba2f4)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::dimensionOfKernel;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_79924e6675885a219042ad47fdf6876b)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::isInjective;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_e2696cb49d9f5900968018acd9a52442)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::isSurjective;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_def14af0b91751939144679c1389eaf9)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::isInvertible;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_07a0fb39892950fa9705b62aa2e07aa1)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::rows;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_bd3e6896cb4555e6a963ba72da0ac0a2)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::cols;
    class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_a42a8250265d52cda5ef20e4515993d6)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::hCoeffs;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >  & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_d7f4b9e75fc955ff9f8a4c490e270945)(float  const &) = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::setThreshold;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >  & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_2f78ff898a2d5c5bbd6d5e418c45d8de)(enum ::Eigen::Default_t ) = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::setThreshold;
    float  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_44480b7db0f55d08ba0699ff7bdcac89)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::threshold;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_6de153971263502eb1e77dc8e6e46b3d)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::nonzeroPivots;
    float  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_0c79c42c37e45edd9e4b5394c62ffbd3)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::maxPivot;
    boost::python::class_< class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >, autowig::HeldType< class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > > > class_78ad9e66cded5e6889e5b273493dbcc5("_FullPivHouseholderQR_78ad9e66cded5e6889e5b273493dbcc5", "", boost::python::no_init);
    class_78ad9e66cded5e6889e5b273493dbcc5.def("matrix_qr", method_pointer_0f1b6cab7d815277ac629fa3674a59a6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_78ad9e66cded5e6889e5b273493dbcc5.def("cols_permutation", method_pointer_e8dfb71f03a4516c9c9714abe29146fd, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_78ad9e66cded5e6889e5b273493dbcc5.def("rows_transpositions", method_pointer_47045871d50d5cc08270df65f106d7ae, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_78ad9e66cded5e6889e5b273493dbcc5.def("abs_determinant", method_pointer_6b6cfcbdb4e259049e7ee0be812b9ee4, "");
    class_78ad9e66cded5e6889e5b273493dbcc5.def("log_abs_determinant", method_pointer_9a27b89c09fd5b0596f5b668c6ed644e, "");
    class_78ad9e66cded5e6889e5b273493dbcc5.def("rank", method_pointer_e93775f47b1b525fa39f95cc12923ce9, "");
    class_78ad9e66cded5e6889e5b273493dbcc5.def("dimension_of_kernel", method_pointer_997c8e01de7f5e569422f583dbaba2f4, "");
    class_78ad9e66cded5e6889e5b273493dbcc5.def("is_injective", method_pointer_79924e6675885a219042ad47fdf6876b, "");
    class_78ad9e66cded5e6889e5b273493dbcc5.def("is_surjective", method_pointer_e2696cb49d9f5900968018acd9a52442, "");
    class_78ad9e66cded5e6889e5b273493dbcc5.def("is_invertible", method_pointer_def14af0b91751939144679c1389eaf9, "");
    class_78ad9e66cded5e6889e5b273493dbcc5.def("rows", method_pointer_07a0fb39892950fa9705b62aa2e07aa1, "");
    class_78ad9e66cded5e6889e5b273493dbcc5.def("cols", method_pointer_bd3e6896cb4555e6a963ba72da0ac0a2, "");
    class_78ad9e66cded5e6889e5b273493dbcc5.def("h_coeffs", method_pointer_a42a8250265d52cda5ef20e4515993d6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_78ad9e66cded5e6889e5b273493dbcc5.def("set_threshold", method_pointer_d7f4b9e75fc955ff9f8a4c490e270945, boost::python::return_internal_reference<>(), "");
    class_78ad9e66cded5e6889e5b273493dbcc5.def("set_threshold", autowig::method_decorator_d7f4b9e75fc955ff9f8a4c490e270945);
    class_78ad9e66cded5e6889e5b273493dbcc5.def("set_threshold", method_pointer_2f78ff898a2d5c5bbd6d5e418c45d8de, boost::python::return_internal_reference<>(), "");
    class_78ad9e66cded5e6889e5b273493dbcc5.def("set_threshold", autowig::method_decorator_2f78ff898a2d5c5bbd6d5e418c45d8de);
    class_78ad9e66cded5e6889e5b273493dbcc5.def("threshold", method_pointer_44480b7db0f55d08ba0699ff7bdcac89, "");
    class_78ad9e66cded5e6889e5b273493dbcc5.def("nonzero_pivots", method_pointer_6de153971263502eb1e77dc8e6e46b3d, "");
    class_78ad9e66cded5e6889e5b273493dbcc5.def("max_pivot", method_pointer_0c79c42c37e45edd9e4b5394c62ffbd3, "");

}