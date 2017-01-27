#include "_ieigen.h"


namespace autowig
{
    void method_decorator_69e2ffb8f0e65b5f9d67d94141db3db2(class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > & instance, float  const & param_in_0, class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_e1ea220bd1735a7e8ae5990f8556520d(class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_62c3d078763056798c597b17bafa52db()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_e61ba03479d651ca93480e0fd1d86432)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::matrixQR;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_b41835aee16f522d97fc476fdebd3f14)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::matrixR;
    class ::Eigen::PermutationMatrix< -1, -1, int >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_7d8ecf30eb0451acbb34898c93ce7141)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::colsPermutation;
    float  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_71429b902ce0523db188a56eff669cb4)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::absDeterminant;
    float  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_d7e609fe5701576d9bbd37ce0af73def)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::logAbsDeterminant;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_d05bebe9815a5650ba5c7f598a9f3b51)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::rank;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_849587cf1d8a51b09972f0fa519c9a4d)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::dimensionOfKernel;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_47d47ceabdfd59c49d361240b835f054)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::isInjective;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_505ceeccb8e15337bd0561bd4dccdf41)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::isSurjective;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_dc6ed880efd15b4a9e986977f1ee27d5)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::isInvertible;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_437b782530c85ba59fc3294e85739069)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::rows;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_6350d9a343745b43a9c05ee67b8b7a75)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::cols;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_07b1c09c0ad656448a3af836728c7ee1)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::hCoeffs;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >  & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_69e2ffb8f0e65b5f9d67d94141db3db2)(float  const &) = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::setThreshold;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >  & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_e1ea220bd1735a7e8ae5990f8556520d)(enum ::Eigen::Default_t ) = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::setThreshold;
    float  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_85823c1173395d6397a0da4e07a380dc)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::threshold;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_4b3c22497399550db39cf7de2b8827bc)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::nonzeroPivots;
    float  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_72bfd000c4b556618b7870a9a736ddef)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::maxPivot;
    enum ::Eigen::ComputationInfo  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, -1, -1, 0, -1, -1 > >::*method_pointer_465982ba094c5994a62b9fba9e1a1620)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >::info;
    boost::python::class_< class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >, autowig::HeldType< class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > > > > class_62c3d078763056798c597b17bafa52db("_ColPivHouseholderQR_62c3d078763056798c597b17bafa52db", "", boost::python::no_init);
    class_62c3d078763056798c597b17bafa52db.def(boost::python::init<  >(""));
    class_62c3d078763056798c597b17bafa52db.def(boost::python::init< long int , long int  >(""));
    class_62c3d078763056798c597b17bafa52db.def(boost::python::init< class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, -1, -1, 0, -1, -1 > >  const & >(""));
    class_62c3d078763056798c597b17bafa52db.def("matrix_qr", method_pointer_e61ba03479d651ca93480e0fd1d86432, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_62c3d078763056798c597b17bafa52db.def("matrix_r", method_pointer_b41835aee16f522d97fc476fdebd3f14, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_62c3d078763056798c597b17bafa52db.def("cols_permutation", method_pointer_7d8ecf30eb0451acbb34898c93ce7141, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_62c3d078763056798c597b17bafa52db.def("abs_determinant", method_pointer_71429b902ce0523db188a56eff669cb4, "");
    class_62c3d078763056798c597b17bafa52db.def("log_abs_determinant", method_pointer_d7e609fe5701576d9bbd37ce0af73def, "");
    class_62c3d078763056798c597b17bafa52db.def("rank", method_pointer_d05bebe9815a5650ba5c7f598a9f3b51, "");
    class_62c3d078763056798c597b17bafa52db.def("dimension_of_kernel", method_pointer_849587cf1d8a51b09972f0fa519c9a4d, "");
    class_62c3d078763056798c597b17bafa52db.def("is_injective", method_pointer_47d47ceabdfd59c49d361240b835f054, "");
    class_62c3d078763056798c597b17bafa52db.def("is_surjective", method_pointer_505ceeccb8e15337bd0561bd4dccdf41, "");
    class_62c3d078763056798c597b17bafa52db.def("is_invertible", method_pointer_dc6ed880efd15b4a9e986977f1ee27d5, "");
    class_62c3d078763056798c597b17bafa52db.def("rows", method_pointer_437b782530c85ba59fc3294e85739069, "");
    class_62c3d078763056798c597b17bafa52db.def("cols", method_pointer_6350d9a343745b43a9c05ee67b8b7a75, "");
    class_62c3d078763056798c597b17bafa52db.def("h_coeffs", method_pointer_07b1c09c0ad656448a3af836728c7ee1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_62c3d078763056798c597b17bafa52db.def("set_threshold", method_pointer_69e2ffb8f0e65b5f9d67d94141db3db2, boost::python::return_internal_reference<>(), "");
    class_62c3d078763056798c597b17bafa52db.def("set_threshold", autowig::method_decorator_69e2ffb8f0e65b5f9d67d94141db3db2);
    class_62c3d078763056798c597b17bafa52db.def("set_threshold", method_pointer_e1ea220bd1735a7e8ae5990f8556520d, boost::python::return_internal_reference<>(), "");
    class_62c3d078763056798c597b17bafa52db.def("set_threshold", autowig::method_decorator_e1ea220bd1735a7e8ae5990f8556520d);
    class_62c3d078763056798c597b17bafa52db.def("threshold", method_pointer_85823c1173395d6397a0da4e07a380dc, "");
    class_62c3d078763056798c597b17bafa52db.def("nonzero_pivots", method_pointer_4b3c22497399550db39cf7de2b8827bc, "");
    class_62c3d078763056798c597b17bafa52db.def("max_pivot", method_pointer_72bfd000c4b556618b7870a9a736ddef, "");
    class_62c3d078763056798c597b17bafa52db.def("info", method_pointer_465982ba094c5994a62b9fba9e1a1620, "");

}