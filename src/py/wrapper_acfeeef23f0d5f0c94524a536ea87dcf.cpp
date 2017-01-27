#include "_ieigen.h"


namespace autowig
{
    void method_decorator_9851ff996837536eb4abdc882ac65eb1(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & param_out)     { instance.real() = param_out; }
    void method_decorator_bd564514b648565f96e80d2ef2fcdedb(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & param_out)     { instance.setIdentity() = param_out; }
    void method_decorator_e65e23c0b2c4517d8d1af5b097daeba6(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & param_out)     { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_f5f6547d94ff579d827a83299f8ce65e(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & param_out)     { instance.forceAlignedAccess() = param_out; }
    void method_decorator_722b91280c8055a681a57106ac055a24(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >  & param_out)     { instance.matrix() = param_out; }
}


void wrapper_acfeeef23f0d5f0c94524a536ea87dcf()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_811e5a98655a5b369a6cf70b847329e7)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::diagonalSize;
    class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_aa6a295273d75dc28137d0f273947ed8)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::conjugate;
    class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_352811b348f858a69fdf8cb567619636)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::real;
    class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_9851ff996837536eb4abdc882ac65eb1)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::real;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_dce33e54c025518588e2ab356260a0fc)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::squaredNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_92ede684ee66529aaea3bd615943bb0f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::norm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_2cee6cf9e3645ccfb035ced09ca1cc75)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::stableNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_f285cd475d415bd4bcad47ab60d68fff)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::blueNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_b455f52cd77f58119a2307d483368875)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::hypotNorm;
    class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_34892fbc996d542296fa9ab5a84fe0fd)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::normalized;
    class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_4898c4a5a1aa568b89b5a3cbc693c9e5)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_fa2f1c7c4fdc54f7ad518b0b5fd5f911)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_e103633d7e63551985227f47ed8f9a6f)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_42c399b029cb5704a2a73ed23f3f8b6e)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::adjointInPlace;
    class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_bd564514b648565f96e80d2ef2fcdedb)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::setIdentity;
    class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_e65e23c0b2c4517d8d1af5b097daeba6)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_256714de0fc6572db05be9cc2c3cff62)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_93820ef0d61e528fb35400ae7848c564)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_24a770163b2959c5aa2f4563634a7dc7)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_6593f07d812a53398af5b1e35e14fe52)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_4297241b76b6531da363feb0aec215c9)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::isUnitary;
    class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_954243c291045fd4b994e39cc39d4af6)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::forceAlignedAccess;
    class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_f5f6547d94ff579d827a83299f8ce65e)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::forceAlignedAccess;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_926fb5bc330e59ac87853a265da0d797)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_722b91280c8055a681a57106ac055a24)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_e4bbc92ac2ca59469a88d368536b95df)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::matrix;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_0e6414cb22c05019a5fcd68189cd8f00)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::determinant;
    class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_528612488a545d7aa9bf868731966d6d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::unitOrthogonal;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::*method_pointer_4ed4802306f45444807345cec9ed692d)(double  &, double  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > > > class_acfeeef23f0d5f0c94524a536ea87dcf("_MatrixBase_acfeeef23f0d5f0c94524a536ea87dcf", "", boost::python::no_init);
    class_acfeeef23f0d5f0c94524a536ea87dcf.def("diagonal_size", method_pointer_811e5a98655a5b369a6cf70b847329e7, "");
    class_acfeeef23f0d5f0c94524a536ea87dcf.def("conjugate", method_pointer_aa6a295273d75dc28137d0f273947ed8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_acfeeef23f0d5f0c94524a536ea87dcf.def("real", method_pointer_352811b348f858a69fdf8cb567619636, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_acfeeef23f0d5f0c94524a536ea87dcf.def("real", method_pointer_9851ff996837536eb4abdc882ac65eb1, boost::python::return_internal_reference<>(), "");
    class_acfeeef23f0d5f0c94524a536ea87dcf.def("real", autowig::method_decorator_9851ff996837536eb4abdc882ac65eb1);
    class_acfeeef23f0d5f0c94524a536ea87dcf.def("squared_norm", method_pointer_dce33e54c025518588e2ab356260a0fc, "");
    class_acfeeef23f0d5f0c94524a536ea87dcf.def("norm", method_pointer_92ede684ee66529aaea3bd615943bb0f, "");
    class_acfeeef23f0d5f0c94524a536ea87dcf.def("stable_norm", method_pointer_2cee6cf9e3645ccfb035ced09ca1cc75, "");
    class_acfeeef23f0d5f0c94524a536ea87dcf.def("blue_norm", method_pointer_f285cd475d415bd4bcad47ab60d68fff, "");
    class_acfeeef23f0d5f0c94524a536ea87dcf.def("hypot_norm", method_pointer_b455f52cd77f58119a2307d483368875, "");
    class_acfeeef23f0d5f0c94524a536ea87dcf.def("normalized", method_pointer_34892fbc996d542296fa9ab5a84fe0fd, "");
    class_acfeeef23f0d5f0c94524a536ea87dcf.def("stable_normalized", method_pointer_4898c4a5a1aa568b89b5a3cbc693c9e5, "");
    class_acfeeef23f0d5f0c94524a536ea87dcf.def("normalize", method_pointer_fa2f1c7c4fdc54f7ad518b0b5fd5f911, "");
    class_acfeeef23f0d5f0c94524a536ea87dcf.def("stable_normalize", method_pointer_e103633d7e63551985227f47ed8f9a6f, "");
    class_acfeeef23f0d5f0c94524a536ea87dcf.def("adjoint_in_place", method_pointer_42c399b029cb5704a2a73ed23f3f8b6e, "");
    class_acfeeef23f0d5f0c94524a536ea87dcf.def("set_identity", method_pointer_bd564514b648565f96e80d2ef2fcdedb, boost::python::return_internal_reference<>(), "");
    class_acfeeef23f0d5f0c94524a536ea87dcf.def("set_identity", autowig::method_decorator_bd564514b648565f96e80d2ef2fcdedb);
    class_acfeeef23f0d5f0c94524a536ea87dcf.def("set_identity", method_pointer_e65e23c0b2c4517d8d1af5b097daeba6, boost::python::return_internal_reference<>(), "");
    class_acfeeef23f0d5f0c94524a536ea87dcf.def("set_identity", autowig::method_decorator_e65e23c0b2c4517d8d1af5b097daeba6);
    class_acfeeef23f0d5f0c94524a536ea87dcf.def("is_identity", method_pointer_256714de0fc6572db05be9cc2c3cff62, "");
    class_acfeeef23f0d5f0c94524a536ea87dcf.def("is_diagonal", method_pointer_93820ef0d61e528fb35400ae7848c564, "");
    class_acfeeef23f0d5f0c94524a536ea87dcf.def("is_upper_triangular", method_pointer_24a770163b2959c5aa2f4563634a7dc7, "");
    class_acfeeef23f0d5f0c94524a536ea87dcf.def("is_lower_triangular", method_pointer_6593f07d812a53398af5b1e35e14fe52, "");
    class_acfeeef23f0d5f0c94524a536ea87dcf.def("is_unitary", method_pointer_4297241b76b6531da363feb0aec215c9, "");
    class_acfeeef23f0d5f0c94524a536ea87dcf.def("force_aligned_access", method_pointer_954243c291045fd4b994e39cc39d4af6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_acfeeef23f0d5f0c94524a536ea87dcf.def("force_aligned_access", method_pointer_f5f6547d94ff579d827a83299f8ce65e, boost::python::return_internal_reference<>(), "");
    class_acfeeef23f0d5f0c94524a536ea87dcf.def("force_aligned_access", autowig::method_decorator_f5f6547d94ff579d827a83299f8ce65e);
    class_acfeeef23f0d5f0c94524a536ea87dcf.def("trace", method_pointer_926fb5bc330e59ac87853a265da0d797, "");
    class_acfeeef23f0d5f0c94524a536ea87dcf.def("matrix", method_pointer_722b91280c8055a681a57106ac055a24, boost::python::return_internal_reference<>(), "");
    class_acfeeef23f0d5f0c94524a536ea87dcf.def("matrix", autowig::method_decorator_722b91280c8055a681a57106ac055a24);
    class_acfeeef23f0d5f0c94524a536ea87dcf.def("matrix", method_pointer_e4bbc92ac2ca59469a88d368536b95df, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_acfeeef23f0d5f0c94524a536ea87dcf.def("determinant", method_pointer_0e6414cb22c05019a5fcd68189cd8f00, "");
    class_acfeeef23f0d5f0c94524a536ea87dcf.def("unit_orthogonal", method_pointer_528612488a545d7aa9bf868731966d6d, "");
    class_acfeeef23f0d5f0c94524a536ea87dcf.def("make_householder_in_place", method_pointer_4ed4802306f45444807345cec9ed692d, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > > >();
    }

}