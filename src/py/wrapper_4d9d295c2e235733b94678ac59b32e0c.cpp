#include "_ieigen.h"


namespace autowig
{
    void method_decorator_cd8ca03a076e58e8a2633ae499411c08(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & param_out)     { instance.real() = param_out; }
    void method_decorator_a604a7b1e5dd5c94aa36968c02dae6b4(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & param_out)     { instance.setIdentity() = param_out; }
    void method_decorator_a532033f85a7546bbd2833088a81f3f9(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & param_out)     { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_3d934a17e57554199454616f98b86561(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & param_out)     { instance.forceAlignedAccess() = param_out; }
    void method_decorator_41d9fc4484ac5958a1fede9cb167565c(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >  & param_out)     { instance.matrix() = param_out; }
}


void wrapper_4d9d295c2e235733b94678ac59b32e0c()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_3ad03ba8d87551e19db3b86b725ff139)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::diagonalSize;
    class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_1b7b4df505bf51c48130e4091a5c02a6)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::conjugate;
    class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_ee6b675df67059f48cd25064ea947143)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::real;
    class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_cd8ca03a076e58e8a2633ae499411c08)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::real;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_2ff21f395ef552ca854dd3dc15ffc8ce)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::squaredNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_0a3765db993c5283afa90ec9dfb9c503)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::norm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_4dc2b5c599dc5dae99df4576af7f8ec9)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::stableNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_74fd4cf4a93d5bc6939829647855bc41)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::blueNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_f23b0167ffd05c22806809784aa83a5d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::hypotNorm;
    class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_af8b3b8f6bc55c96a09eae489a1ae706)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::normalized;
    class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_ef8279ee988c54948dc45e178572e701)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_f7737e3585795e7a9bf3b54f22aaa382)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_1f5662a77a8a518a95342fd5231c7a5b)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_ecdadc282a2a5331b81b3d724315cf35)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::adjointInPlace;
    class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_a604a7b1e5dd5c94aa36968c02dae6b4)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::setIdentity;
    class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_a532033f85a7546bbd2833088a81f3f9)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_def10f2c182d5cfbbb08b09ccaa48f04)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_f125dad1a0a95af8bc36a7f263ede1a4)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_fc32e34dcc095c949e2029a75735b766)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_a5d97113f7a058029125258f88f3bede)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_2c9f2d8276c85350b3ee6de8e57aa0cb)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::isUnitary;
    class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_58f36b786dce535f8f267dbebaeba409)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::forceAlignedAccess;
    class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_3d934a17e57554199454616f98b86561)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::forceAlignedAccess;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_c554f612f211594cb0ab22860f7c6496)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_41d9fc4484ac5958a1fede9cb167565c)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_658432c9900c5a5bb1cef592bf53a179)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::matrix;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_83018906f6f45140a809aee24fe8aa42)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::determinant;
    class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_d8f6f988803055aab1d9e200f225b9fc)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::eigenvalues;
    class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_a645b3fd955355cbb3f0f901929f239c)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::unitOrthogonal;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::*method_pointer_04736b491284561b8d1838b5d5cea3c2)(float  &, float  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > > > class_4d9d295c2e235733b94678ac59b32e0c("_MatrixBase_4d9d295c2e235733b94678ac59b32e0c", "", boost::python::no_init);
    class_4d9d295c2e235733b94678ac59b32e0c.def("diagonal_size", method_pointer_3ad03ba8d87551e19db3b86b725ff139, "");
    class_4d9d295c2e235733b94678ac59b32e0c.def("conjugate", method_pointer_1b7b4df505bf51c48130e4091a5c02a6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4d9d295c2e235733b94678ac59b32e0c.def("real", method_pointer_ee6b675df67059f48cd25064ea947143, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4d9d295c2e235733b94678ac59b32e0c.def("real", method_pointer_cd8ca03a076e58e8a2633ae499411c08, boost::python::return_internal_reference<>(), "");
    class_4d9d295c2e235733b94678ac59b32e0c.def("real", autowig::method_decorator_cd8ca03a076e58e8a2633ae499411c08);
    class_4d9d295c2e235733b94678ac59b32e0c.def("squared_norm", method_pointer_2ff21f395ef552ca854dd3dc15ffc8ce, "");
    class_4d9d295c2e235733b94678ac59b32e0c.def("norm", method_pointer_0a3765db993c5283afa90ec9dfb9c503, "");
    class_4d9d295c2e235733b94678ac59b32e0c.def("stable_norm", method_pointer_4dc2b5c599dc5dae99df4576af7f8ec9, "");
    class_4d9d295c2e235733b94678ac59b32e0c.def("blue_norm", method_pointer_74fd4cf4a93d5bc6939829647855bc41, "");
    class_4d9d295c2e235733b94678ac59b32e0c.def("hypot_norm", method_pointer_f23b0167ffd05c22806809784aa83a5d, "");
    class_4d9d295c2e235733b94678ac59b32e0c.def("normalized", method_pointer_af8b3b8f6bc55c96a09eae489a1ae706, "");
    class_4d9d295c2e235733b94678ac59b32e0c.def("stable_normalized", method_pointer_ef8279ee988c54948dc45e178572e701, "");
    class_4d9d295c2e235733b94678ac59b32e0c.def("normalize", method_pointer_f7737e3585795e7a9bf3b54f22aaa382, "");
    class_4d9d295c2e235733b94678ac59b32e0c.def("stable_normalize", method_pointer_1f5662a77a8a518a95342fd5231c7a5b, "");
    class_4d9d295c2e235733b94678ac59b32e0c.def("adjoint_in_place", method_pointer_ecdadc282a2a5331b81b3d724315cf35, "");
    class_4d9d295c2e235733b94678ac59b32e0c.def("set_identity", method_pointer_a604a7b1e5dd5c94aa36968c02dae6b4, boost::python::return_internal_reference<>(), "");
    class_4d9d295c2e235733b94678ac59b32e0c.def("set_identity", autowig::method_decorator_a604a7b1e5dd5c94aa36968c02dae6b4);
    class_4d9d295c2e235733b94678ac59b32e0c.def("set_identity", method_pointer_a532033f85a7546bbd2833088a81f3f9, boost::python::return_internal_reference<>(), "");
    class_4d9d295c2e235733b94678ac59b32e0c.def("set_identity", autowig::method_decorator_a532033f85a7546bbd2833088a81f3f9);
    class_4d9d295c2e235733b94678ac59b32e0c.def("is_identity", method_pointer_def10f2c182d5cfbbb08b09ccaa48f04, "");
    class_4d9d295c2e235733b94678ac59b32e0c.def("is_diagonal", method_pointer_f125dad1a0a95af8bc36a7f263ede1a4, "");
    class_4d9d295c2e235733b94678ac59b32e0c.def("is_upper_triangular", method_pointer_fc32e34dcc095c949e2029a75735b766, "");
    class_4d9d295c2e235733b94678ac59b32e0c.def("is_lower_triangular", method_pointer_a5d97113f7a058029125258f88f3bede, "");
    class_4d9d295c2e235733b94678ac59b32e0c.def("is_unitary", method_pointer_2c9f2d8276c85350b3ee6de8e57aa0cb, "");
    class_4d9d295c2e235733b94678ac59b32e0c.def("force_aligned_access", method_pointer_58f36b786dce535f8f267dbebaeba409, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4d9d295c2e235733b94678ac59b32e0c.def("force_aligned_access", method_pointer_3d934a17e57554199454616f98b86561, boost::python::return_internal_reference<>(), "");
    class_4d9d295c2e235733b94678ac59b32e0c.def("force_aligned_access", autowig::method_decorator_3d934a17e57554199454616f98b86561);
    class_4d9d295c2e235733b94678ac59b32e0c.def("trace", method_pointer_c554f612f211594cb0ab22860f7c6496, "");
    class_4d9d295c2e235733b94678ac59b32e0c.def("matrix", method_pointer_41d9fc4484ac5958a1fede9cb167565c, boost::python::return_internal_reference<>(), "");
    class_4d9d295c2e235733b94678ac59b32e0c.def("matrix", autowig::method_decorator_41d9fc4484ac5958a1fede9cb167565c);
    class_4d9d295c2e235733b94678ac59b32e0c.def("matrix", method_pointer_658432c9900c5a5bb1cef592bf53a179, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4d9d295c2e235733b94678ac59b32e0c.def("determinant", method_pointer_83018906f6f45140a809aee24fe8aa42, "");
    class_4d9d295c2e235733b94678ac59b32e0c.def("eigenvalues", method_pointer_d8f6f988803055aab1d9e200f225b9fc, "");
    class_4d9d295c2e235733b94678ac59b32e0c.def("unit_orthogonal", method_pointer_a645b3fd955355cbb3f0f901929f239c, "");
    class_4d9d295c2e235733b94678ac59b32e0c.def("make_householder_in_place", method_pointer_04736b491284561b8d1838b5d5cea3c2, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > > >();
    }

}