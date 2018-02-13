#include "_linalg.h"



namespace autowig
{

    void method_decorator_443a13d2c88c59abb16cf816d5723369(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, const ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Base & param_out) { instance.base() = param_out; }
    void method_decorator_dce9abbc25375169804f200736929ce2(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, double param_out) { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_725df41316cc59cda6758f798e99a721(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, ::Eigen::Index  param_in_0, double param_out) { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_e7d47e7822045d11af3bc9ce5b9d1881(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const & param_in_1, const class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_out) { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_75e7701962765352b58411e0546d1594(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const & param_in_2, const class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_out) { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_7e4e7337527e5175bc5edff290f1b4da(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, ::Eigen::Index  param_in_0, const class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_out) { instance.setZero(param_in_0) = param_out; }
    void method_decorator_2231a8dcef9f5d3c86874d6dd616f626(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, const class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_out) { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_e014eb584e1a57f0a836046baa4f51ff(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, ::Eigen::Index  param_in_0, const class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_out) { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_ce258a91d1ab5016bd26685c5130eec3(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, const class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_out) { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_0c53554a2e59551baf2bf2c14a43ddab(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, ::Eigen::Index  param_in_0, const class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_out) { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_f1605e83e36d5846914dca007cad0a06(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, const class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_out) { instance.setRandom(param_in_0, param_in_1) = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const volatile * get_pointer<class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const volatile >(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_69a4a110a0015866946de130cdeee56b()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Base & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_443a13d2c88c59abb16cf816d5723369)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::base;
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Base const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_26b6528391175def83fba0118ee116a6)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::base;
    ::Eigen::Index  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_558009f81c94559a8cfc44a1ecf6da42)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::rows;
    ::Eigen::Index  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_e222fcec41a05925bd00cca8fab79ddf)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::cols;
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_e2ea012318a85cbb91f86afcde198ba7)(::Eigen::Index , ::Eigen::Index ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::coeff;
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_142f57f4ffd05bf8a54c2adfe5c7f48c)(::Eigen::Index ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::coeff;
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_dce9abbc25375169804f200736929ce2)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::coeffRef;
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_725df41316cc59cda6758f798e99a721)(::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::coeffRef;
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_7098939abe6752d9a6a4f53fb2fe0352)(::Eigen::Index , ::Eigen::Index ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::coeffRef;
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_60543cd3ab1e5c86897c851e06323a2c)(::Eigen::Index ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_f155c2a665c85b91b63e1d2b3ddaa5ff)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_7907b327b9135886aa1bc10d7d7497a4)(::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_f6a72b765cc157f184fcc99ec83eab4f)(enum ::Eigen::NoChange_t , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_64816c2928fb5c9ca4f7edd471f6ccca)(::Eigen::Index , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_efb0932f60c35fdcb4bf284f9a5646ec)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_e9d2eafdc6fd536bab0d909961848118)(::Eigen::Index , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_9e745b17a33b5b2390dfd1eef81050ca)(enum ::Eigen::NoChange_t , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::conservativeResize;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_e7d47e7822045d11af3bc9ce5b9d1881)(::Eigen::Index , ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setConstant;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_75e7701962765352b58411e0546d1594)(::Eigen::Index , ::Eigen::Index , ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::Scalar const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setConstant;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_7e4e7337527e5175bc5edff290f1b4da)(::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setZero;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_2231a8dcef9f5d3c86874d6dd616f626)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setZero;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_e014eb584e1a57f0a836046baa4f51ff)(::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setOnes;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_ce258a91d1ab5016bd26685c5130eec3)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setOnes;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_0c53554a2e59551baf2bf2c14a43ddab)(::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setRandom;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_f1605e83e36d5846914dca007cad0a06)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::setRandom;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_d8733ac03b1d523b8abce20c522ff742)(struct ::Eigen::EigenBase< class ::Eigen::Product< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::Eigen::TriangularView< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const, 2 >, 0 > > const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::resizeLike;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_8db5a3e8c09153edaf5f64eb1949c3ac)(struct ::Eigen::EigenBase< class ::Eigen::Product< class ::Eigen::TriangularView< class ::Eigen::Transpose< class ::Eigen::Block< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, -1, -1, false > const > const, 6 >, class ::Eigen::Block< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, -1, -1, false >, 0 > > const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::resizeLike;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_d633b1e5113751dabc19e7c5ef650529)(struct ::Eigen::EigenBase< class ::Eigen::Product< class ::Eigen::TriangularView< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const, 1 >, class ::Eigen::Matrix< double, -1, -1, 1, -1, -1 >, 0 > > const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::resizeLike;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_aab63efbd04959b2972b401444adbac3)(class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::swap;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_1da0d8b1eeb658939137a9c85c90410e)(struct ::Eigen::EigenBase< class ::Eigen::TriangularView< class ::Eigen::Transpose< class ::Eigen::Block< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const, -1, -1, false > const > const, 1 > > const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::resizeLike;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_38532bff78ba50eba324355e27262b85)(struct ::Eigen::EigenBase< class ::Eigen::PermutationMatrix< -1, -1, int > > const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::resizeLike;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::*method_pointer_c0f47ff8490055989aa8cdddf29fa065)(struct ::Eigen::EigenBase< class ::Eigen::TriangularView< class ::Eigen::Block< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const, -1, -1, false > const, 2 > > const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >::resizeLike;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >, autowig::Held< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::Type, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >, boost::noncopyable > class_69a4a110a0015866946de130cdeee56b("_PlainObjectBase_69a4a110a0015866946de130cdeee56b", "", boost::python::no_init);
    class_69a4a110a0015866946de130cdeee56b.def("base", method_pointer_443a13d2c88c59abb16cf816d5723369, boost::python::return_internal_reference<>(), "");
    class_69a4a110a0015866946de130cdeee56b.def("base", autowig::method_decorator_443a13d2c88c59abb16cf816d5723369);
    class_69a4a110a0015866946de130cdeee56b.def("base", method_pointer_26b6528391175def83fba0118ee116a6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_69a4a110a0015866946de130cdeee56b.def("rows", method_pointer_558009f81c94559a8cfc44a1ecf6da42, "");
    class_69a4a110a0015866946de130cdeee56b.def("cols", method_pointer_e222fcec41a05925bd00cca8fab79ddf, "");
    class_69a4a110a0015866946de130cdeee56b.def("coeff", method_pointer_e2ea012318a85cbb91f86afcde198ba7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_69a4a110a0015866946de130cdeee56b.def("coeff", method_pointer_142f57f4ffd05bf8a54c2adfe5c7f48c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_69a4a110a0015866946de130cdeee56b.def("coeff_ref", method_pointer_dce9abbc25375169804f200736929ce2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_69a4a110a0015866946de130cdeee56b.def("coeff_ref", autowig::method_decorator_dce9abbc25375169804f200736929ce2);
    class_69a4a110a0015866946de130cdeee56b.def("coeff_ref", method_pointer_725df41316cc59cda6758f798e99a721, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_69a4a110a0015866946de130cdeee56b.def("coeff_ref", autowig::method_decorator_725df41316cc59cda6758f798e99a721);
    class_69a4a110a0015866946de130cdeee56b.def("coeff_ref", method_pointer_7098939abe6752d9a6a4f53fb2fe0352, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_69a4a110a0015866946de130cdeee56b.def("coeff_ref", method_pointer_60543cd3ab1e5c86897c851e06323a2c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_69a4a110a0015866946de130cdeee56b.def("resize", method_pointer_f155c2a665c85b91b63e1d2b3ddaa5ff, "");
    class_69a4a110a0015866946de130cdeee56b.def("resize", method_pointer_7907b327b9135886aa1bc10d7d7497a4, "");
    class_69a4a110a0015866946de130cdeee56b.def("resize", method_pointer_f6a72b765cc157f184fcc99ec83eab4f, "");
    class_69a4a110a0015866946de130cdeee56b.def("resize", method_pointer_64816c2928fb5c9ca4f7edd471f6ccca, "");
    class_69a4a110a0015866946de130cdeee56b.def("conservative_resize", method_pointer_efb0932f60c35fdcb4bf284f9a5646ec, "");
    class_69a4a110a0015866946de130cdeee56b.def("conservative_resize", method_pointer_e9d2eafdc6fd536bab0d909961848118, "");
    class_69a4a110a0015866946de130cdeee56b.def("conservative_resize", method_pointer_9e745b17a33b5b2390dfd1eef81050ca, "");
    class_69a4a110a0015866946de130cdeee56b.def("set_constant", method_pointer_e7d47e7822045d11af3bc9ce5b9d1881, boost::python::return_internal_reference<>(), "");
    class_69a4a110a0015866946de130cdeee56b.def("set_constant", autowig::method_decorator_e7d47e7822045d11af3bc9ce5b9d1881);
    class_69a4a110a0015866946de130cdeee56b.def("set_constant", method_pointer_75e7701962765352b58411e0546d1594, boost::python::return_internal_reference<>(), "");
    class_69a4a110a0015866946de130cdeee56b.def("set_constant", autowig::method_decorator_75e7701962765352b58411e0546d1594);
    class_69a4a110a0015866946de130cdeee56b.def("set_zero", method_pointer_7e4e7337527e5175bc5edff290f1b4da, boost::python::return_internal_reference<>(), "");
    class_69a4a110a0015866946de130cdeee56b.def("set_zero", autowig::method_decorator_7e4e7337527e5175bc5edff290f1b4da);
    class_69a4a110a0015866946de130cdeee56b.def("set_zero", method_pointer_2231a8dcef9f5d3c86874d6dd616f626, boost::python::return_internal_reference<>(), "");
    class_69a4a110a0015866946de130cdeee56b.def("set_zero", autowig::method_decorator_2231a8dcef9f5d3c86874d6dd616f626);
    class_69a4a110a0015866946de130cdeee56b.def("set_ones", method_pointer_e014eb584e1a57f0a836046baa4f51ff, boost::python::return_internal_reference<>(), "");
    class_69a4a110a0015866946de130cdeee56b.def("set_ones", autowig::method_decorator_e014eb584e1a57f0a836046baa4f51ff);
    class_69a4a110a0015866946de130cdeee56b.def("set_ones", method_pointer_ce258a91d1ab5016bd26685c5130eec3, boost::python::return_internal_reference<>(), "");
    class_69a4a110a0015866946de130cdeee56b.def("set_ones", autowig::method_decorator_ce258a91d1ab5016bd26685c5130eec3);
    class_69a4a110a0015866946de130cdeee56b.def("set_random", method_pointer_0c53554a2e59551baf2bf2c14a43ddab, boost::python::return_internal_reference<>(), "");
    class_69a4a110a0015866946de130cdeee56b.def("set_random", autowig::method_decorator_0c53554a2e59551baf2bf2c14a43ddab);
    class_69a4a110a0015866946de130cdeee56b.def("set_random", method_pointer_f1605e83e36d5846914dca007cad0a06, boost::python::return_internal_reference<>(), "");
    class_69a4a110a0015866946de130cdeee56b.def("set_random", autowig::method_decorator_f1605e83e36d5846914dca007cad0a06);
    class_69a4a110a0015866946de130cdeee56b.def("resize_like", method_pointer_d8733ac03b1d523b8abce20c522ff742, "");
    class_69a4a110a0015866946de130cdeee56b.def("resize_like", method_pointer_8db5a3e8c09153edaf5f64eb1949c3ac, "");
    class_69a4a110a0015866946de130cdeee56b.def("resize_like", method_pointer_d633b1e5113751dabc19e7c5ef650529, "");
    class_69a4a110a0015866946de130cdeee56b.def("swap", method_pointer_aab63efbd04959b2972b401444adbac3, "");
    class_69a4a110a0015866946de130cdeee56b.def("resize_like", method_pointer_1da0d8b1eeb658939137a9c85c90410e, "");
    class_69a4a110a0015866946de130cdeee56b.def("resize_like", method_pointer_38532bff78ba50eba324355e27262b85, "");
    class_69a4a110a0015866946de130cdeee56b.def("resize_like", method_pointer_c0f47ff8490055989aa8cdddf29fa065, "");

    if(autowig::Held< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::Type, autowig::Held< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >::Type >();
    }

}