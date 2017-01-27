#include "_ieigen.h"


namespace autowig
{
    void method_decorator_f8a35bd17d7e5d92a4c5865d64d28ea1(class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > & instance, float  const & param_in_0, class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_3396b6bfeafa51588a4a306f56e3067d(class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_7ab0741ef1ce5b38ba69bdb5125ae2ea()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_561512c4d1e050e9b238a16fe297587c)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::matrixQR;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_6ef44b5c7eb3508e93196152459558b4)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::matrixR;
    class ::Eigen::PermutationMatrix< 2, 2, int >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_3269999ff9ad5dc39588eecd902cdb3f)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::colsPermutation;
    float  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_7d2dd7858ddd5a1c90ca57bc5ea6cfc8)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::absDeterminant;
    float  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_734a97da3655506a94c606d788d6de73)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::logAbsDeterminant;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_34ae33323bc859f2abea7ebb424a8b63)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::rank;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_f079b3a688205d0c99c74f4653c6ff8b)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::dimensionOfKernel;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_9851a474936f5c6d827a5529ec6bb064)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::isInjective;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_99c236ebdd1d51d6a21751d2bc3daa5d)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::isSurjective;
    bool  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_98151358a430538495c288329ef103b5)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::isInvertible;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_5d7ca436081452bba322bff56d7f061d)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::rows;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_e2851c863f195c2882a77aaad4b0c476)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::cols;
    class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  const & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_2746698dc45456f08659c018b0218382)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::hCoeffs;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >  & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_f8a35bd17d7e5d92a4c5865d64d28ea1)(float  const &) = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::setThreshold;
    class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >  & (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_3396b6bfeafa51588a4a306f56e3067d)(enum ::Eigen::Default_t ) = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::setThreshold;
    float  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_ca8e87f716745c55a72795080adbbff7)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::threshold;
    long int  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_a051ca493fd258159bfb8f1735bf203f)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::nonzeroPivots;
    float  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_0f6c7ee56d1a56d98b7606d1b4987d3c)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::maxPivot;
    enum ::Eigen::ComputationInfo  (::Eigen::ColPivHouseholderQR< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_bc05d908bbe058de8f2f8441db33dc8b)() const = &::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::info;
    boost::python::class_< class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::ColPivHouseholderQR< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > > > class_7ab0741ef1ce5b38ba69bdb5125ae2ea("_ColPivHouseholderQR_7ab0741ef1ce5b38ba69bdb5125ae2ea", "", boost::python::no_init);
    class_7ab0741ef1ce5b38ba69bdb5125ae2ea.def("matrix_qr", method_pointer_561512c4d1e050e9b238a16fe297587c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7ab0741ef1ce5b38ba69bdb5125ae2ea.def("matrix_r", method_pointer_6ef44b5c7eb3508e93196152459558b4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7ab0741ef1ce5b38ba69bdb5125ae2ea.def("cols_permutation", method_pointer_3269999ff9ad5dc39588eecd902cdb3f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7ab0741ef1ce5b38ba69bdb5125ae2ea.def("abs_determinant", method_pointer_7d2dd7858ddd5a1c90ca57bc5ea6cfc8, "");
    class_7ab0741ef1ce5b38ba69bdb5125ae2ea.def("log_abs_determinant", method_pointer_734a97da3655506a94c606d788d6de73, "");
    class_7ab0741ef1ce5b38ba69bdb5125ae2ea.def("rank", method_pointer_34ae33323bc859f2abea7ebb424a8b63, "");
    class_7ab0741ef1ce5b38ba69bdb5125ae2ea.def("dimension_of_kernel", method_pointer_f079b3a688205d0c99c74f4653c6ff8b, "");
    class_7ab0741ef1ce5b38ba69bdb5125ae2ea.def("is_injective", method_pointer_9851a474936f5c6d827a5529ec6bb064, "");
    class_7ab0741ef1ce5b38ba69bdb5125ae2ea.def("is_surjective", method_pointer_99c236ebdd1d51d6a21751d2bc3daa5d, "");
    class_7ab0741ef1ce5b38ba69bdb5125ae2ea.def("is_invertible", method_pointer_98151358a430538495c288329ef103b5, "");
    class_7ab0741ef1ce5b38ba69bdb5125ae2ea.def("rows", method_pointer_5d7ca436081452bba322bff56d7f061d, "");
    class_7ab0741ef1ce5b38ba69bdb5125ae2ea.def("cols", method_pointer_e2851c863f195c2882a77aaad4b0c476, "");
    class_7ab0741ef1ce5b38ba69bdb5125ae2ea.def("h_coeffs", method_pointer_2746698dc45456f08659c018b0218382, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7ab0741ef1ce5b38ba69bdb5125ae2ea.def("set_threshold", method_pointer_f8a35bd17d7e5d92a4c5865d64d28ea1, boost::python::return_internal_reference<>(), "");
    class_7ab0741ef1ce5b38ba69bdb5125ae2ea.def("set_threshold", autowig::method_decorator_f8a35bd17d7e5d92a4c5865d64d28ea1);
    class_7ab0741ef1ce5b38ba69bdb5125ae2ea.def("set_threshold", method_pointer_3396b6bfeafa51588a4a306f56e3067d, boost::python::return_internal_reference<>(), "");
    class_7ab0741ef1ce5b38ba69bdb5125ae2ea.def("set_threshold", autowig::method_decorator_3396b6bfeafa51588a4a306f56e3067d);
    class_7ab0741ef1ce5b38ba69bdb5125ae2ea.def("threshold", method_pointer_ca8e87f716745c55a72795080adbbff7, "");
    class_7ab0741ef1ce5b38ba69bdb5125ae2ea.def("nonzero_pivots", method_pointer_a051ca493fd258159bfb8f1735bf203f, "");
    class_7ab0741ef1ce5b38ba69bdb5125ae2ea.def("max_pivot", method_pointer_0f6c7ee56d1a56d98b7606d1b4987d3c, "");
    class_7ab0741ef1ce5b38ba69bdb5125ae2ea.def("info", method_pointer_bc05d908bbe058de8f2f8441db33dc8b, "");

}