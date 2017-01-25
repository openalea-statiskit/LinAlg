#include "_ieigen.h"


namespace autowig
{
    void method_decorator_c861fb348f485444a1a1d94764d36678(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & param_out)
    { instance.real() = param_out; }
    void method_decorator_262c7bdb17ce52158bf3c3264d8ae191(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & param_out)
    { instance.setIdentity() = param_out; }
    void method_decorator_d75387a493f75b89bbeafbc5f8cde0eb(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & param_out)
    { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_00264ea5bf1c51c8af4d6cbdca248dec(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & param_out)
    { instance.forceAlignedAccess() = param_out; }
    void method_decorator_8a8e68457bb3557fb39619e5b0f44442(class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >  & param_out)
    { instance.matrix() = param_out; }
}


void wrapper_6117695b6512577589d08a82617c3213()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_8d5c992d695959fb86d0a89603877fc9)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::diagonalSize;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_e7a45af668de5cb4bf9557930fb9031d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::conjugate;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_a48aa76a60c254ddb88cc982007c58cf)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::real;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_c861fb348f485444a1a1d94764d36678)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::real;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_297883136edf5c368a0670035310ff39)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::squaredNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_497506729a2d5057907eab2198b6fb6f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::norm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_e962b4e49d4d5b31aaf4ad7b96abedc1)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::stableNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_7d0d37f285da599cbff2476ce370e25f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::blueNorm;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_87e7df4d3d86525ab14df66ef472c506)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::hypotNorm;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_d7aa080d259b5ce091facf4269c0a071)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::normalized;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_63df2dfdb0bf51de90de9dc9152e8fb3)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_f03f5ab896115bbf89f2794046469212)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_148bb799fd0f53158002dbd6b5709faf)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_01f91bbd5b805537b1aef36111ab27e6)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::adjointInPlace;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_262c7bdb17ce52158bf3c3264d8ae191)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::setIdentity;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_d75387a493f75b89bbeafbc5f8cde0eb)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_139f01e86824569f81e7a2884c44b5a1)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_c39e2b2f63025068ad8c897967cdc697)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_2d96fecfe3c05ff4b09b7934c4caaf41)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_c3c860a6d0bb58988fd970102e103cad)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_5b9716171b9d58d089408504cc3faec5)(float  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::isUnitary;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_8d58899b3f3e59adbd5fbb726a5866ea)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::forceAlignedAccess;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_00264ea5bf1c51c8af4d6cbdca248dec)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::forceAlignedAccess;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_aa8b638a8a0d5069bdc22983c3ec553a)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_8a8e68457bb3557fb39619e5b0f44442)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_a11addd5b3f9550488db2933e9bcd831)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::matrix;
    float  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_7efd8fef3f115767b6d04512f1cf441b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::determinant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_04beb89281795a07929a3e58b6f5055d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::eigenvalues;
    class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 >  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_bdb28daf4f5f553c809c3cefb751bc4b)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::unitOrthogonal;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_ac874ea291c45fd985a68f26f2893a17)(long int , long int , long int ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::eulerAngles;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::*method_pointer_e09bf0c5f93355f18147ab2753118b27)(float  &, float  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > > > class_6117695b6512577589d08a82617c3213("_MatrixBase_6117695b6512577589d08a82617c3213", "", boost::python::no_init);
    class_6117695b6512577589d08a82617c3213.def("diagonal_size", method_pointer_8d5c992d695959fb86d0a89603877fc9, "");
    class_6117695b6512577589d08a82617c3213.def("conjugate", method_pointer_e7a45af668de5cb4bf9557930fb9031d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6117695b6512577589d08a82617c3213.def("real", method_pointer_a48aa76a60c254ddb88cc982007c58cf, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6117695b6512577589d08a82617c3213.def("real", method_pointer_c861fb348f485444a1a1d94764d36678, boost::python::return_internal_reference<>(), "");
    class_6117695b6512577589d08a82617c3213.def("real", autowig::method_decorator_c861fb348f485444a1a1d94764d36678);
    class_6117695b6512577589d08a82617c3213.def("squared_norm", method_pointer_297883136edf5c368a0670035310ff39, "");
    class_6117695b6512577589d08a82617c3213.def("norm", method_pointer_497506729a2d5057907eab2198b6fb6f, "");
    class_6117695b6512577589d08a82617c3213.def("stable_norm", method_pointer_e962b4e49d4d5b31aaf4ad7b96abedc1, "");
    class_6117695b6512577589d08a82617c3213.def("blue_norm", method_pointer_7d0d37f285da599cbff2476ce370e25f, "");
    class_6117695b6512577589d08a82617c3213.def("hypot_norm", method_pointer_87e7df4d3d86525ab14df66ef472c506, "");
    class_6117695b6512577589d08a82617c3213.def("normalized", method_pointer_d7aa080d259b5ce091facf4269c0a071, "");
    class_6117695b6512577589d08a82617c3213.def("stable_normalized", method_pointer_63df2dfdb0bf51de90de9dc9152e8fb3, "");
    class_6117695b6512577589d08a82617c3213.def("normalize", method_pointer_f03f5ab896115bbf89f2794046469212, "");
    class_6117695b6512577589d08a82617c3213.def("stable_normalize", method_pointer_148bb799fd0f53158002dbd6b5709faf, "");
    class_6117695b6512577589d08a82617c3213.def("adjoint_in_place", method_pointer_01f91bbd5b805537b1aef36111ab27e6, "");
    class_6117695b6512577589d08a82617c3213.def("set_identity", method_pointer_262c7bdb17ce52158bf3c3264d8ae191, boost::python::return_internal_reference<>(), "");
    class_6117695b6512577589d08a82617c3213.def("set_identity", autowig::method_decorator_262c7bdb17ce52158bf3c3264d8ae191);
    class_6117695b6512577589d08a82617c3213.def("set_identity", method_pointer_d75387a493f75b89bbeafbc5f8cde0eb, boost::python::return_internal_reference<>(), "");
    class_6117695b6512577589d08a82617c3213.def("set_identity", autowig::method_decorator_d75387a493f75b89bbeafbc5f8cde0eb);
    class_6117695b6512577589d08a82617c3213.def("is_identity", method_pointer_139f01e86824569f81e7a2884c44b5a1, "");
    class_6117695b6512577589d08a82617c3213.def("is_diagonal", method_pointer_c39e2b2f63025068ad8c897967cdc697, "");
    class_6117695b6512577589d08a82617c3213.def("is_upper_triangular", method_pointer_2d96fecfe3c05ff4b09b7934c4caaf41, "");
    class_6117695b6512577589d08a82617c3213.def("is_lower_triangular", method_pointer_c3c860a6d0bb58988fd970102e103cad, "");
    class_6117695b6512577589d08a82617c3213.def("is_unitary", method_pointer_5b9716171b9d58d089408504cc3faec5, "");
    class_6117695b6512577589d08a82617c3213.def("force_aligned_access", method_pointer_8d58899b3f3e59adbd5fbb726a5866ea, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6117695b6512577589d08a82617c3213.def("force_aligned_access", method_pointer_00264ea5bf1c51c8af4d6cbdca248dec, boost::python::return_internal_reference<>(), "");
    class_6117695b6512577589d08a82617c3213.def("force_aligned_access", autowig::method_decorator_00264ea5bf1c51c8af4d6cbdca248dec);
    class_6117695b6512577589d08a82617c3213.def("trace", method_pointer_aa8b638a8a0d5069bdc22983c3ec553a, "");
    class_6117695b6512577589d08a82617c3213.def("matrix", method_pointer_8a8e68457bb3557fb39619e5b0f44442, boost::python::return_internal_reference<>(), "");
    class_6117695b6512577589d08a82617c3213.def("matrix", autowig::method_decorator_8a8e68457bb3557fb39619e5b0f44442);
    class_6117695b6512577589d08a82617c3213.def("matrix", method_pointer_a11addd5b3f9550488db2933e9bcd831, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6117695b6512577589d08a82617c3213.def("determinant", method_pointer_7efd8fef3f115767b6d04512f1cf441b, "");
    class_6117695b6512577589d08a82617c3213.def("eigenvalues", method_pointer_04beb89281795a07929a3e58b6f5055d, "");
    class_6117695b6512577589d08a82617c3213.def("unit_orthogonal", method_pointer_bdb28daf4f5f553c809c3cefb751bc4b, "");
    class_6117695b6512577589d08a82617c3213.def("euler_angles", method_pointer_ac874ea291c45fd985a68f26f2893a17, "");
    class_6117695b6512577589d08a82617c3213.def("make_householder_in_place", method_pointer_e09bf0c5f93355f18147ab2753118b27, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 2, 2, 0, 2, 2 > > > >();
    }

}