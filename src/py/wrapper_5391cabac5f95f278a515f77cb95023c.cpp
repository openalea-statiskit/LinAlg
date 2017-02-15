#include "_linalg.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > const volatile * get_pointer<class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > const volatile >(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
    void method_decorator_154ffa07a02459a1a7e6ebc1d5df0411(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::Base & param_out)     { instance.base() = param_out; }
    void method_decorator_efe104b1a93358379d0228025f6e0bc8(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, const ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::Scalar & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_5449df5426e95ab2b84d83ee6068dcd1(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, ::Eigen::Index  param_in_0, const ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::Scalar & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_d0c56a48a93450a28e99e4934d80d29c(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::Scalar const & param_in_1, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > & param_out)     { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_6477a6751b035e1099356f8318905949(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::Scalar const & param_in_2, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > & param_out)     { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_7bece74fba125177b2f9fec22bc7a662(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, ::Eigen::Index  param_in_0, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > & param_out)     { instance.setZero(param_in_0) = param_out; }
    void method_decorator_f4057a9f4d7051aa8b070224d3bf3aaf(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > & param_out)     { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_207afe1bd95e564e82a947d8dd158222(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, ::Eigen::Index  param_in_0, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > & param_out)     { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_cdec404626ea53efb4ac632d92ad9126(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > & param_out)     { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_f95fa25a44e459fb90a338f487e7a846(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, ::Eigen::Index  param_in_0, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > & param_out)     { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_b718d3038e3c5ad0bb8fc604d655a6e9(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > & instance, ::Eigen::Index  param_in_0, ::Eigen::Index  param_in_1, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > & param_out)     { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_5391cabac5f95f278a515f77cb95023c()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::Base & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_154ffa07a02459a1a7e6ebc1d5df0411)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::base;
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::Base const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_8ebc08d1e13f5b1398fb16af7265f8c9)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::base;
    ::Eigen::Index  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_74c98a45f907533baf6f8ee61cb8845f)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::rows;
    ::Eigen::Index  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_7a5bfddbbe685812b68663bda5fc17aa)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::cols;
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::Scalar const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_96bdfd6006c15125a925cb39d0bf2f41)(::Eigen::Index , ::Eigen::Index ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::coeff;
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::Scalar const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_b0eb4cf3af905f90a4f5abfe0bec0dbf)(::Eigen::Index ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::coeff;
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::Scalar & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_efe104b1a93358379d0228025f6e0bc8)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::coeffRef;
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::Scalar & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_5449df5426e95ab2b84d83ee6068dcd1)(::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::coeffRef;
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::Scalar const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_95817f3f70dc540c8f97c52a4f7009cc)(::Eigen::Index , ::Eigen::Index ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::coeffRef;
    ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::Scalar const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_ce813ea4a68b53838c6ed8a8327d6a5c)(::Eigen::Index ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_0f53ff8abc9a5fc0be2cf44cfb1dc05e)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_9c886db75031530bb661ef1898a5b862)(::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_23dca6e8d8355893a56dd7049f26c8dd)(enum ::Eigen::NoChange_t , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_f8f3dee8c08450c59c9335c2edc6ce7e)(::Eigen::Index , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_1d2f6f314b9d5df4bc8b0e037d651f8b)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_bcea66a31c03527fb95d30cace397414)(::Eigen::Index , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_620975f144ab520fb558e330750ccb8c)(enum ::Eigen::NoChange_t , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_8b536c18ad5855478a3fa96ad4b85a02)(::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::conservativeResize;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_d0c56a48a93450a28e99e4934d80d29c)(::Eigen::Index , ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::Scalar const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::setConstant;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_6477a6751b035e1099356f8318905949)(::Eigen::Index , ::Eigen::Index , ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::Scalar const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::setConstant;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_7bece74fba125177b2f9fec22bc7a662)(::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::setZero;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_f4057a9f4d7051aa8b070224d3bf3aaf)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::setZero;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_207afe1bd95e564e82a947d8dd158222)(::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::setOnes;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_cdec404626ea53efb4ac632d92ad9126)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::setOnes;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_f95fa25a44e459fb90a338f487e7a846)(::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::setRandom;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > & (::Eigen::PlainObjectBase< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::*method_pointer_b718d3038e3c5ad0bb8fc604d655a6e9)(::Eigen::Index , ::Eigen::Index ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::setRandom;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >, autowig::Held< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::Type, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > > > class_5391cabac5f95f278a515f77cb95023c("_PlainObjectBase_5391cabac5f95f278a515f77cb95023c", "", boost::python::no_init);
    class_5391cabac5f95f278a515f77cb95023c.def("base", method_pointer_154ffa07a02459a1a7e6ebc1d5df0411, boost::python::return_internal_reference<>(), "");
    class_5391cabac5f95f278a515f77cb95023c.def("base", autowig::method_decorator_154ffa07a02459a1a7e6ebc1d5df0411);
    class_5391cabac5f95f278a515f77cb95023c.def("base", method_pointer_8ebc08d1e13f5b1398fb16af7265f8c9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5391cabac5f95f278a515f77cb95023c.def("rows", method_pointer_74c98a45f907533baf6f8ee61cb8845f, "");
    class_5391cabac5f95f278a515f77cb95023c.def("cols", method_pointer_7a5bfddbbe685812b68663bda5fc17aa, "");
    class_5391cabac5f95f278a515f77cb95023c.def("coeff", method_pointer_96bdfd6006c15125a925cb39d0bf2f41, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5391cabac5f95f278a515f77cb95023c.def("coeff", method_pointer_b0eb4cf3af905f90a4f5abfe0bec0dbf, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5391cabac5f95f278a515f77cb95023c.def("coeff_ref", method_pointer_efe104b1a93358379d0228025f6e0bc8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5391cabac5f95f278a515f77cb95023c.def("coeff_ref", autowig::method_decorator_efe104b1a93358379d0228025f6e0bc8);
    class_5391cabac5f95f278a515f77cb95023c.def("coeff_ref", method_pointer_5449df5426e95ab2b84d83ee6068dcd1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5391cabac5f95f278a515f77cb95023c.def("coeff_ref", autowig::method_decorator_5449df5426e95ab2b84d83ee6068dcd1);
    class_5391cabac5f95f278a515f77cb95023c.def("coeff_ref", method_pointer_95817f3f70dc540c8f97c52a4f7009cc, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5391cabac5f95f278a515f77cb95023c.def("coeff_ref", method_pointer_ce813ea4a68b53838c6ed8a8327d6a5c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5391cabac5f95f278a515f77cb95023c.def("resize", method_pointer_0f53ff8abc9a5fc0be2cf44cfb1dc05e, "");
    class_5391cabac5f95f278a515f77cb95023c.def("resize", method_pointer_9c886db75031530bb661ef1898a5b862, "");
    class_5391cabac5f95f278a515f77cb95023c.def("resize", method_pointer_23dca6e8d8355893a56dd7049f26c8dd, "");
    class_5391cabac5f95f278a515f77cb95023c.def("resize", method_pointer_f8f3dee8c08450c59c9335c2edc6ce7e, "");
    class_5391cabac5f95f278a515f77cb95023c.def("conservative_resize", method_pointer_1d2f6f314b9d5df4bc8b0e037d651f8b, "");
    class_5391cabac5f95f278a515f77cb95023c.def("conservative_resize", method_pointer_bcea66a31c03527fb95d30cace397414, "");
    class_5391cabac5f95f278a515f77cb95023c.def("conservative_resize", method_pointer_620975f144ab520fb558e330750ccb8c, "");
    class_5391cabac5f95f278a515f77cb95023c.def("conservative_resize", method_pointer_8b536c18ad5855478a3fa96ad4b85a02, "");
    class_5391cabac5f95f278a515f77cb95023c.def("set_constant", method_pointer_d0c56a48a93450a28e99e4934d80d29c, boost::python::return_internal_reference<>(), "");
    class_5391cabac5f95f278a515f77cb95023c.def("set_constant", autowig::method_decorator_d0c56a48a93450a28e99e4934d80d29c);
    class_5391cabac5f95f278a515f77cb95023c.def("set_constant", method_pointer_6477a6751b035e1099356f8318905949, boost::python::return_internal_reference<>(), "");
    class_5391cabac5f95f278a515f77cb95023c.def("set_constant", autowig::method_decorator_6477a6751b035e1099356f8318905949);
    class_5391cabac5f95f278a515f77cb95023c.def("set_zero", method_pointer_7bece74fba125177b2f9fec22bc7a662, boost::python::return_internal_reference<>(), "");
    class_5391cabac5f95f278a515f77cb95023c.def("set_zero", autowig::method_decorator_7bece74fba125177b2f9fec22bc7a662);
    class_5391cabac5f95f278a515f77cb95023c.def("set_zero", method_pointer_f4057a9f4d7051aa8b070224d3bf3aaf, boost::python::return_internal_reference<>(), "");
    class_5391cabac5f95f278a515f77cb95023c.def("set_zero", autowig::method_decorator_f4057a9f4d7051aa8b070224d3bf3aaf);
    class_5391cabac5f95f278a515f77cb95023c.def("set_ones", method_pointer_207afe1bd95e564e82a947d8dd158222, boost::python::return_internal_reference<>(), "");
    class_5391cabac5f95f278a515f77cb95023c.def("set_ones", autowig::method_decorator_207afe1bd95e564e82a947d8dd158222);
    class_5391cabac5f95f278a515f77cb95023c.def("set_ones", method_pointer_cdec404626ea53efb4ac632d92ad9126, boost::python::return_internal_reference<>(), "");
    class_5391cabac5f95f278a515f77cb95023c.def("set_ones", autowig::method_decorator_cdec404626ea53efb4ac632d92ad9126);
    class_5391cabac5f95f278a515f77cb95023c.def("set_random", method_pointer_f95fa25a44e459fb90a338f487e7a846, boost::python::return_internal_reference<>(), "");
    class_5391cabac5f95f278a515f77cb95023c.def("set_random", autowig::method_decorator_f95fa25a44e459fb90a338f487e7a846);
    class_5391cabac5f95f278a515f77cb95023c.def("set_random", method_pointer_b718d3038e3c5ad0bb8fc604d655a6e9, boost::python::return_internal_reference<>(), "");
    class_5391cabac5f95f278a515f77cb95023c.def("set_random", autowig::method_decorator_b718d3038e3c5ad0bb8fc604d655a6e9);

    if(autowig::Held< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::Type, autowig::Held< class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::Type >();
    }

}