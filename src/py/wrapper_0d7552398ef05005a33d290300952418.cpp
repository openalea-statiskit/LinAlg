#include "_ieigen.h"


namespace autowig
{
    void method_decorator_c1a12cb359ec5d988dc5ca777933d98d(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & param_out)
    { instance.real() = param_out; }
    void method_decorator_9f27486d0b465d018496cc5e3dcb8cd2(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setIdentity() = param_out; }
    void method_decorator_44d79478cca55aa390a5e16112bd1942(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_6aa243c1aeb45d13981092fbcf27d8e3(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & param_out)
    { instance.forceAlignedAccess() = param_out; }
    void method_decorator_f0a83b3ff9735c1798bdd0511c4b1f0c(class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >  & param_out)
    { instance.matrix() = param_out; }
}


void wrapper_0d7552398ef05005a33d290300952418()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_02e1811968f05a8fbc96782d89ed0d9c)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::diagonalSize;
    class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_a49c57ec5edd5912b7f04947696bb1df)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::conjugate;
    class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_512b5c0e6c3655f2a70602182ea8fbca)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::real;
    class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_c1a12cb359ec5d988dc5ca777933d98d)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::real;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_71653a150a785b08a30bbc0629cfe82f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::squaredNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_3f645f48a3745154bf5cf78b65d8bd50)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::norm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_955fe79a58585afeb1bafd7cea127f4c)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::stableNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_ad228610c5815d8ea44f39256e27ba61)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::blueNorm;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_2ddb7f03db4f57f583fbc01e77abb56f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::hypotNorm;
    class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_671bfdc53af25b42bbcc34d823eb8619)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::normalized;
    class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_0629a8349b675381be27a24d9635527f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_3a1a68e66e3b588392aa2ccf9f9c5840)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_5b1813ec3a3c51f9aaf7ee37f67562b5)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_6800609699b5562293d45b22cadffa2d)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::adjointInPlace;
    class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_9f27486d0b465d018496cc5e3dcb8cd2)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::setIdentity;
    class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_44d79478cca55aa390a5e16112bd1942)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_509bed58a2945df7b42e4530920605ee)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_75f0552c090154d3aa6f087262891b56)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_c4a7ead2474d52efb110e769da76bbd7)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_29537a2822d255078d0711301ce84b0f)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_1c1632d759cd53528a0650253e507198)(double  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::isUnitary;
    class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_4188af54ca27521cb2630b0feed8f6e0)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::forceAlignedAccess;
    class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_6aa243c1aeb45d13981092fbcf27d8e3)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::forceAlignedAccess;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_525f48f7f0b95e188d378d615ba99002)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_f0a83b3ff9735c1798bdd0511c4b1f0c)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_21c25822ba285560b0c3242e5ef71ac3)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::matrix;
    double  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_c96a398fb0a553459884e09e362cc674)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::determinant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_4c5bd5f802f8570a8573a2791fd5c3ba)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::eigenvalues;
    class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 >  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_4682db4588af58bc9e2935e79e802adb)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::unitOrthogonal;
    class ::Eigen::Matrix< double, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_ca2068f68408594db7b086680909f1e4)(long int , long int , long int ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::eulerAngles;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::*method_pointer_9e41a7ffeed75573a1e784f8432aeb59)(double  &, double  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > > > class_0d7552398ef05005a33d290300952418("_MatrixBase_0d7552398ef05005a33d290300952418", "", boost::python::no_init);
    class_0d7552398ef05005a33d290300952418.def("diagonal_size", method_pointer_02e1811968f05a8fbc96782d89ed0d9c, "");
    class_0d7552398ef05005a33d290300952418.def("conjugate", method_pointer_a49c57ec5edd5912b7f04947696bb1df, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0d7552398ef05005a33d290300952418.def("real", method_pointer_512b5c0e6c3655f2a70602182ea8fbca, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0d7552398ef05005a33d290300952418.def("real", method_pointer_c1a12cb359ec5d988dc5ca777933d98d, boost::python::return_internal_reference<>(), "");
    class_0d7552398ef05005a33d290300952418.def("real", autowig::method_decorator_c1a12cb359ec5d988dc5ca777933d98d);
    class_0d7552398ef05005a33d290300952418.def("squared_norm", method_pointer_71653a150a785b08a30bbc0629cfe82f, "");
    class_0d7552398ef05005a33d290300952418.def("norm", method_pointer_3f645f48a3745154bf5cf78b65d8bd50, "");
    class_0d7552398ef05005a33d290300952418.def("stable_norm", method_pointer_955fe79a58585afeb1bafd7cea127f4c, "");
    class_0d7552398ef05005a33d290300952418.def("blue_norm", method_pointer_ad228610c5815d8ea44f39256e27ba61, "");
    class_0d7552398ef05005a33d290300952418.def("hypot_norm", method_pointer_2ddb7f03db4f57f583fbc01e77abb56f, "");
    class_0d7552398ef05005a33d290300952418.def("normalized", method_pointer_671bfdc53af25b42bbcc34d823eb8619, "");
    class_0d7552398ef05005a33d290300952418.def("stable_normalized", method_pointer_0629a8349b675381be27a24d9635527f, "");
    class_0d7552398ef05005a33d290300952418.def("normalize", method_pointer_3a1a68e66e3b588392aa2ccf9f9c5840, "");
    class_0d7552398ef05005a33d290300952418.def("stable_normalize", method_pointer_5b1813ec3a3c51f9aaf7ee37f67562b5, "");
    class_0d7552398ef05005a33d290300952418.def("adjoint_in_place", method_pointer_6800609699b5562293d45b22cadffa2d, "");
    class_0d7552398ef05005a33d290300952418.def("set_identity", method_pointer_9f27486d0b465d018496cc5e3dcb8cd2, boost::python::return_internal_reference<>(), "");
    class_0d7552398ef05005a33d290300952418.def("set_identity", autowig::method_decorator_9f27486d0b465d018496cc5e3dcb8cd2);
    class_0d7552398ef05005a33d290300952418.def("set_identity", method_pointer_44d79478cca55aa390a5e16112bd1942, boost::python::return_internal_reference<>(), "");
    class_0d7552398ef05005a33d290300952418.def("set_identity", autowig::method_decorator_44d79478cca55aa390a5e16112bd1942);
    class_0d7552398ef05005a33d290300952418.def("is_identity", method_pointer_509bed58a2945df7b42e4530920605ee, "");
    class_0d7552398ef05005a33d290300952418.def("is_diagonal", method_pointer_75f0552c090154d3aa6f087262891b56, "");
    class_0d7552398ef05005a33d290300952418.def("is_upper_triangular", method_pointer_c4a7ead2474d52efb110e769da76bbd7, "");
    class_0d7552398ef05005a33d290300952418.def("is_lower_triangular", method_pointer_29537a2822d255078d0711301ce84b0f, "");
    class_0d7552398ef05005a33d290300952418.def("is_unitary", method_pointer_1c1632d759cd53528a0650253e507198, "");
    class_0d7552398ef05005a33d290300952418.def("force_aligned_access", method_pointer_4188af54ca27521cb2630b0feed8f6e0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0d7552398ef05005a33d290300952418.def("force_aligned_access", method_pointer_6aa243c1aeb45d13981092fbcf27d8e3, boost::python::return_internal_reference<>(), "");
    class_0d7552398ef05005a33d290300952418.def("force_aligned_access", autowig::method_decorator_6aa243c1aeb45d13981092fbcf27d8e3);
    class_0d7552398ef05005a33d290300952418.def("trace", method_pointer_525f48f7f0b95e188d378d615ba99002, "");
    class_0d7552398ef05005a33d290300952418.def("matrix", method_pointer_f0a83b3ff9735c1798bdd0511c4b1f0c, boost::python::return_internal_reference<>(), "");
    class_0d7552398ef05005a33d290300952418.def("matrix", autowig::method_decorator_f0a83b3ff9735c1798bdd0511c4b1f0c);
    class_0d7552398ef05005a33d290300952418.def("matrix", method_pointer_21c25822ba285560b0c3242e5ef71ac3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0d7552398ef05005a33d290300952418.def("determinant", method_pointer_c96a398fb0a553459884e09e362cc674, "");
    class_0d7552398ef05005a33d290300952418.def("eigenvalues", method_pointer_4c5bd5f802f8570a8573a2791fd5c3ba, "");
    class_0d7552398ef05005a33d290300952418.def("unit_orthogonal", method_pointer_4682db4588af58bc9e2935e79e802adb, "");
    class_0d7552398ef05005a33d290300952418.def("euler_angles", method_pointer_ca2068f68408594db7b086680909f1e4, "");
    class_0d7552398ef05005a33d290300952418.def("make_householder_in_place", method_pointer_9e41a7ffeed75573a1e784f8432aeb59, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, 3, 1, 1, 3 > > > >();
    }

}