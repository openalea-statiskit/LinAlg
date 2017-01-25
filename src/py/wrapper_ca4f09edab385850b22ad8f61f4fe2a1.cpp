#include "_ieigen.h"


namespace autowig
{
    void method_decorator_d09e9e7090c95ba7aaded406f31380bf(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > & instance, class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & param_out)
    { instance.real() = param_out; }
    void method_decorator_caa1ec0199e355538af3efc6f2e03d0b(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > & instance, class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setIdentity() = param_out; }
    void method_decorator_176d05b5e7b2552fa74139c1dd49750c(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & param_out)
    { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_03cd5194ee865f0b91be0c27fe6ec901(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > & instance, class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & param_out)
    { instance.forceAlignedAccess() = param_out; }
    void method_decorator_8dd13fde03de563cad2524d6bbc1ec6c(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >  & param_out)
    { instance.matrix() = param_out; }
}


void wrapper_ca4f09edab385850b22ad8f61f4fe2a1()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_198d12cde2e253e69b3767a913ed0ff3)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::diagonalSize;
    class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_4b4a89554204523aa00df68363a03089)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::conjugate;
    class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_cb9b6193da945c1597e58714d63eacca)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::real;
    class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_d09e9e7090c95ba7aaded406f31380bf)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::real;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_07337497ddea503eb3e5e848fa6679aa)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::squaredNorm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_1ff38d59fe835b3e81fcf0e65f3b84b7)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::norm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_21236e8a4b15518d8e64b43ed148efe7)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::stableNorm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_62e4d8777e7c5549b9f7a80313c4fdb7)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::blueNorm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_13db4166e51d5657b3e92304ca4ac8d0)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::hypotNorm;
    class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_6534578d4fba5d049c21a985613c30dc)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::normalized;
    class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_ba741dca2a7d5885b521c8b335eb29e8)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_7561bf3382c5552aa59bc4d0333573d6)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_04af9a1b087a546596121b35e5d4e0e5)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_b0b2ffa992d95cc1873a31965049a0d0)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::adjointInPlace;
    class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_caa1ec0199e355538af3efc6f2e03d0b)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::setIdentity;
    class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_176d05b5e7b2552fa74139c1dd49750c)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_c2af7fa451ed5b37aa21ef5a23fcdc16)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_0a4cac86e0be5595a71efc63721e7679)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_c60c362128d85dd6a885edd3b62c0501)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_9cd9759978af5b1fbe8a6227db8da5e7)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_a11ebc9e98e95b0fa40ba108108b4f7e)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::isUnitary;
    class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_ebd7c922b53d5d6d9e83c8be3504e815)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::forceAlignedAccess;
    class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_03cd5194ee865f0b91be0c27fe6ec901)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::forceAlignedAccess;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_9efa3e85fac05a0390eebe3bd2d3013c)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_8dd13fde03de563cad2524d6bbc1ec6c)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_4e8c0f6258d1538081650b9adcbc01a4)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::matrix;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_78b76831119754f3884051d184a2e8d7)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::determinant;
    class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_fa18d70eb8085d04bf13ca56b1923751)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::unitOrthogonal;
    class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_ce335343fcc5548cb96f1d0f23d622c9)(long int , long int , long int ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::eulerAngles;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::*method_pointer_a3f0d7391d315440bc8e0c6c894562c2)(int  &, int  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > > > class_ca4f09edab385850b22ad8f61f4fe2a1("_MatrixBase_ca4f09edab385850b22ad8f61f4fe2a1", "", boost::python::no_init);
    class_ca4f09edab385850b22ad8f61f4fe2a1.def("diagonal_size", method_pointer_198d12cde2e253e69b3767a913ed0ff3, "");
    class_ca4f09edab385850b22ad8f61f4fe2a1.def("conjugate", method_pointer_4b4a89554204523aa00df68363a03089, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ca4f09edab385850b22ad8f61f4fe2a1.def("real", method_pointer_cb9b6193da945c1597e58714d63eacca, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ca4f09edab385850b22ad8f61f4fe2a1.def("real", method_pointer_d09e9e7090c95ba7aaded406f31380bf, boost::python::return_internal_reference<>(), "");
    class_ca4f09edab385850b22ad8f61f4fe2a1.def("real", autowig::method_decorator_d09e9e7090c95ba7aaded406f31380bf);
    class_ca4f09edab385850b22ad8f61f4fe2a1.def("squared_norm", method_pointer_07337497ddea503eb3e5e848fa6679aa, "");
    class_ca4f09edab385850b22ad8f61f4fe2a1.def("norm", method_pointer_1ff38d59fe835b3e81fcf0e65f3b84b7, "");
    class_ca4f09edab385850b22ad8f61f4fe2a1.def("stable_norm", method_pointer_21236e8a4b15518d8e64b43ed148efe7, "");
    class_ca4f09edab385850b22ad8f61f4fe2a1.def("blue_norm", method_pointer_62e4d8777e7c5549b9f7a80313c4fdb7, "");
    class_ca4f09edab385850b22ad8f61f4fe2a1.def("hypot_norm", method_pointer_13db4166e51d5657b3e92304ca4ac8d0, "");
    class_ca4f09edab385850b22ad8f61f4fe2a1.def("normalized", method_pointer_6534578d4fba5d049c21a985613c30dc, "");
    class_ca4f09edab385850b22ad8f61f4fe2a1.def("stable_normalized", method_pointer_ba741dca2a7d5885b521c8b335eb29e8, "");
    class_ca4f09edab385850b22ad8f61f4fe2a1.def("normalize", method_pointer_7561bf3382c5552aa59bc4d0333573d6, "");
    class_ca4f09edab385850b22ad8f61f4fe2a1.def("stable_normalize", method_pointer_04af9a1b087a546596121b35e5d4e0e5, "");
    class_ca4f09edab385850b22ad8f61f4fe2a1.def("adjoint_in_place", method_pointer_b0b2ffa992d95cc1873a31965049a0d0, "");
    class_ca4f09edab385850b22ad8f61f4fe2a1.def("set_identity", method_pointer_caa1ec0199e355538af3efc6f2e03d0b, boost::python::return_internal_reference<>(), "");
    class_ca4f09edab385850b22ad8f61f4fe2a1.def("set_identity", autowig::method_decorator_caa1ec0199e355538af3efc6f2e03d0b);
    class_ca4f09edab385850b22ad8f61f4fe2a1.def("set_identity", method_pointer_176d05b5e7b2552fa74139c1dd49750c, boost::python::return_internal_reference<>(), "");
    class_ca4f09edab385850b22ad8f61f4fe2a1.def("set_identity", autowig::method_decorator_176d05b5e7b2552fa74139c1dd49750c);
    class_ca4f09edab385850b22ad8f61f4fe2a1.def("is_identity", method_pointer_c2af7fa451ed5b37aa21ef5a23fcdc16, "");
    class_ca4f09edab385850b22ad8f61f4fe2a1.def("is_diagonal", method_pointer_0a4cac86e0be5595a71efc63721e7679, "");
    class_ca4f09edab385850b22ad8f61f4fe2a1.def("is_upper_triangular", method_pointer_c60c362128d85dd6a885edd3b62c0501, "");
    class_ca4f09edab385850b22ad8f61f4fe2a1.def("is_lower_triangular", method_pointer_9cd9759978af5b1fbe8a6227db8da5e7, "");
    class_ca4f09edab385850b22ad8f61f4fe2a1.def("is_unitary", method_pointer_a11ebc9e98e95b0fa40ba108108b4f7e, "");
    class_ca4f09edab385850b22ad8f61f4fe2a1.def("force_aligned_access", method_pointer_ebd7c922b53d5d6d9e83c8be3504e815, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ca4f09edab385850b22ad8f61f4fe2a1.def("force_aligned_access", method_pointer_03cd5194ee865f0b91be0c27fe6ec901, boost::python::return_internal_reference<>(), "");
    class_ca4f09edab385850b22ad8f61f4fe2a1.def("force_aligned_access", autowig::method_decorator_03cd5194ee865f0b91be0c27fe6ec901);
    class_ca4f09edab385850b22ad8f61f4fe2a1.def("trace", method_pointer_9efa3e85fac05a0390eebe3bd2d3013c, "");
    class_ca4f09edab385850b22ad8f61f4fe2a1.def("matrix", method_pointer_8dd13fde03de563cad2524d6bbc1ec6c, boost::python::return_internal_reference<>(), "");
    class_ca4f09edab385850b22ad8f61f4fe2a1.def("matrix", autowig::method_decorator_8dd13fde03de563cad2524d6bbc1ec6c);
    class_ca4f09edab385850b22ad8f61f4fe2a1.def("matrix", method_pointer_4e8c0f6258d1538081650b9adcbc01a4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ca4f09edab385850b22ad8f61f4fe2a1.def("determinant", method_pointer_78b76831119754f3884051d184a2e8d7, "");
    class_ca4f09edab385850b22ad8f61f4fe2a1.def("unit_orthogonal", method_pointer_fa18d70eb8085d04bf13ca56b1923751, "");
    class_ca4f09edab385850b22ad8f61f4fe2a1.def("euler_angles", method_pointer_ce335343fcc5548cb96f1d0f23d622c9, "");
    class_ca4f09edab385850b22ad8f61f4fe2a1.def("make_householder_in_place", method_pointer_a3f0d7391d315440bc8e0c6c894562c2, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > > >();
    }

}