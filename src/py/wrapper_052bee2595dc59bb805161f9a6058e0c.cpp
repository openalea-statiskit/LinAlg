#include "_ieigen.h"


namespace autowig
{
    void method_decorator_38a4c51b78055139a5aa7d452648b307(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > & instance, class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & param_out)
    { instance.real() = param_out; }
    void method_decorator_0b80791851df5b7e9bfa8872f7ac4701(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > & instance, class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setIdentity() = param_out; }
    void method_decorator_cfa6e2abc2445326af227193eb63a78e(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_0578f1edaa745d6e83f20ec9eb36d3ad(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > & instance, class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & param_out)
    { instance.forceAlignedAccess() = param_out; }
    void method_decorator_0e5bd88dd2875c13b07eac10e6285a88(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >  & param_out)
    { instance.matrix() = param_out; }
}


void wrapper_052bee2595dc59bb805161f9a6058e0c()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_4e1f4dc79a105b679893346b9f7c2bec)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::diagonalSize;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_3558513e43da5957953a8cfea9bc18c0)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::conjugate;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_19b86fcb79cb58aa9fd91664dbebeff3)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::real;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_38a4c51b78055139a5aa7d452648b307)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::real;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_919f70d7de25549b8dbb9da74a000c8f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::squaredNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_bb36c1aecbf458609a31d7a79b1ed11b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::norm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_59ae86e4d4355aeebf58b297b525356c)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::stableNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_1e7acaf570d85400ab379c388815bead)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::blueNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_7908b8aa0c08547eba3b5ac075d95e67)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::hypotNorm;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_568e4f94c4cc52dbbe041fb7e0b59e9f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::normalized;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_7f1cf4c7bd2257dc907eb2ffd644abff)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_d80074247e5e5e3fab9b16319021332a)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_b50537b4df565c4488e4e151f3cb1094)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_c49d149bacea5b3cb562d7b420cd8e19)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::adjointInPlace;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_0b80791851df5b7e9bfa8872f7ac4701)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::setIdentity;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_cfa6e2abc2445326af227193eb63a78e)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_695104805bc052d2b71a109163bf421c)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_2e8888b3a74e564db1bb129b5d690c92)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_10f86ea5fc155b2f9afc1dc7f9cebd66)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_0ef28d04453a5058a6858199aa6ed9c5)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_6e19278aab3956ac929e5c04ca8467cf)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::isUnitary;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_7232731fefef57a792106289a7eba914)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::forceAlignedAccess;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_0578f1edaa745d6e83f20ec9eb36d3ad)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::forceAlignedAccess;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_5c10fc06cae75d8a95cf05cdf2912b18)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_0e5bd88dd2875c13b07eac10e6285a88)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_ab30dce48577572aa54fc54bd7c3c38d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::matrix;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_5b3debb0d5585f1cbf309cac8fb7081d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::determinant;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_4c89e734887b5a14825184ed7d1fbb97)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::eigenvalues;
    class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_72f6929400d3591cacfd0f0a0d1c5e3d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::unitOrthogonal;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_34d929a913405cd694e660427a1f5ada)(long int , long int , long int ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::eulerAngles;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::*method_pointer_c25dd2f6d5c359d78ff4192402cc3c00)(float  &, float  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > > > class_052bee2595dc59bb805161f9a6058e0c("_MatrixBase_052bee2595dc59bb805161f9a6058e0c", "", boost::python::no_init);
    class_052bee2595dc59bb805161f9a6058e0c.def("diagonal_size", method_pointer_4e1f4dc79a105b679893346b9f7c2bec, "");
    class_052bee2595dc59bb805161f9a6058e0c.def("conjugate", method_pointer_3558513e43da5957953a8cfea9bc18c0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_052bee2595dc59bb805161f9a6058e0c.def("real", method_pointer_19b86fcb79cb58aa9fd91664dbebeff3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_052bee2595dc59bb805161f9a6058e0c.def("real", method_pointer_38a4c51b78055139a5aa7d452648b307, boost::python::return_internal_reference<>(), "");
    class_052bee2595dc59bb805161f9a6058e0c.def("real", autowig::method_decorator_38a4c51b78055139a5aa7d452648b307);
    class_052bee2595dc59bb805161f9a6058e0c.def("squared_norm", method_pointer_919f70d7de25549b8dbb9da74a000c8f, "");
    class_052bee2595dc59bb805161f9a6058e0c.def("norm", method_pointer_bb36c1aecbf458609a31d7a79b1ed11b, "");
    class_052bee2595dc59bb805161f9a6058e0c.def("stable_norm", method_pointer_59ae86e4d4355aeebf58b297b525356c, "");
    class_052bee2595dc59bb805161f9a6058e0c.def("blue_norm", method_pointer_1e7acaf570d85400ab379c388815bead, "");
    class_052bee2595dc59bb805161f9a6058e0c.def("hypot_norm", method_pointer_7908b8aa0c08547eba3b5ac075d95e67, "");
    class_052bee2595dc59bb805161f9a6058e0c.def("normalized", method_pointer_568e4f94c4cc52dbbe041fb7e0b59e9f, "");
    class_052bee2595dc59bb805161f9a6058e0c.def("stable_normalized", method_pointer_7f1cf4c7bd2257dc907eb2ffd644abff, "");
    class_052bee2595dc59bb805161f9a6058e0c.def("normalize", method_pointer_d80074247e5e5e3fab9b16319021332a, "");
    class_052bee2595dc59bb805161f9a6058e0c.def("stable_normalize", method_pointer_b50537b4df565c4488e4e151f3cb1094, "");
    class_052bee2595dc59bb805161f9a6058e0c.def("adjoint_in_place", method_pointer_c49d149bacea5b3cb562d7b420cd8e19, "");
    class_052bee2595dc59bb805161f9a6058e0c.def("set_identity", method_pointer_0b80791851df5b7e9bfa8872f7ac4701, boost::python::return_internal_reference<>(), "");
    class_052bee2595dc59bb805161f9a6058e0c.def("set_identity", autowig::method_decorator_0b80791851df5b7e9bfa8872f7ac4701);
    class_052bee2595dc59bb805161f9a6058e0c.def("set_identity", method_pointer_cfa6e2abc2445326af227193eb63a78e, boost::python::return_internal_reference<>(), "");
    class_052bee2595dc59bb805161f9a6058e0c.def("set_identity", autowig::method_decorator_cfa6e2abc2445326af227193eb63a78e);
    class_052bee2595dc59bb805161f9a6058e0c.def("is_identity", method_pointer_695104805bc052d2b71a109163bf421c, "");
    class_052bee2595dc59bb805161f9a6058e0c.def("is_diagonal", method_pointer_2e8888b3a74e564db1bb129b5d690c92, "");
    class_052bee2595dc59bb805161f9a6058e0c.def("is_upper_triangular", method_pointer_10f86ea5fc155b2f9afc1dc7f9cebd66, "");
    class_052bee2595dc59bb805161f9a6058e0c.def("is_lower_triangular", method_pointer_0ef28d04453a5058a6858199aa6ed9c5, "");
    class_052bee2595dc59bb805161f9a6058e0c.def("is_unitary", method_pointer_6e19278aab3956ac929e5c04ca8467cf, "");
    class_052bee2595dc59bb805161f9a6058e0c.def("force_aligned_access", method_pointer_7232731fefef57a792106289a7eba914, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_052bee2595dc59bb805161f9a6058e0c.def("force_aligned_access", method_pointer_0578f1edaa745d6e83f20ec9eb36d3ad, boost::python::return_internal_reference<>(), "");
    class_052bee2595dc59bb805161f9a6058e0c.def("force_aligned_access", autowig::method_decorator_0578f1edaa745d6e83f20ec9eb36d3ad);
    class_052bee2595dc59bb805161f9a6058e0c.def("trace", method_pointer_5c10fc06cae75d8a95cf05cdf2912b18, "");
    class_052bee2595dc59bb805161f9a6058e0c.def("matrix", method_pointer_0e5bd88dd2875c13b07eac10e6285a88, boost::python::return_internal_reference<>(), "");
    class_052bee2595dc59bb805161f9a6058e0c.def("matrix", autowig::method_decorator_0e5bd88dd2875c13b07eac10e6285a88);
    class_052bee2595dc59bb805161f9a6058e0c.def("matrix", method_pointer_ab30dce48577572aa54fc54bd7c3c38d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_052bee2595dc59bb805161f9a6058e0c.def("determinant", method_pointer_5b3debb0d5585f1cbf309cac8fb7081d, "");
    class_052bee2595dc59bb805161f9a6058e0c.def("eigenvalues", method_pointer_4c89e734887b5a14825184ed7d1fbb97, "");
    class_052bee2595dc59bb805161f9a6058e0c.def("unit_orthogonal", method_pointer_72f6929400d3591cacfd0f0a0d1c5e3d, "");
    class_052bee2595dc59bb805161f9a6058e0c.def("euler_angles", method_pointer_34d929a913405cd694e660427a1f5ada, "");
    class_052bee2595dc59bb805161f9a6058e0c.def("make_householder_in_place", method_pointer_c25dd2f6d5c359d78ff4192402cc3c00, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > > >();
    }

}