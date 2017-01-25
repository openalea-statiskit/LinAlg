#include "_ieigen.h"


namespace autowig
{
    void method_decorator_f8e8d489e02b597e8117c8d8be9bc1c0(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_03746ec8c9ed5eda89dbdd9b489debce(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)
    { instance.coeffRefByOuterInner(param_in_0, param_in_1) = param_out; }
    void method_decorator_abb95f0137b9576ea589cad571ffaeac(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 1 > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)
    { instance.operator()(param_in_0, param_in_1) = param_out; }
    void method_decorator_192278cc557559608ab2689de64db1bd(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 1 > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_2129ca9f33755ae2ae2046edca910605(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 1 > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)
    { instance.operator[](param_in_0) = param_out; }
    void method_decorator_d163a1c86a91568aa8d459c8000f25c0(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 1 > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)
    { instance.operator()(param_in_0) = param_out; }
    void method_decorator_cf784443962e56289b58b90d48cee597(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 1 > & instance, struct ::std::complex< float >  & param_out)
    { instance.x() = param_out; }
    void method_decorator_8b538958af2f58c789d4ac834af8caa2(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 1 > & instance, struct ::std::complex< float >  & param_out)
    { instance.y() = param_out; }
    void method_decorator_da85f93f82905f2989fa40b714ca6cff(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 1 > & instance, struct ::std::complex< float >  & param_out)
    { instance.z() = param_out; }
    void method_decorator_a3ef3a65f42056c1a4cb2dcba839015e(class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 1 > & instance, struct ::std::complex< float >  & param_out)
    { instance.w() = param_out; }
}


void wrapper_4ceb2f9caee15f4da2f30b6e8251b9bd()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_f8e8d489e02b597e8117c8d8be9bc1c0)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 1 >::coeffRef;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_03746ec8c9ed5eda89dbdd9b489debce)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 1 >::coeffRefByOuterInner;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_abb95f0137b9576ea589cad571ffaeac)(long int , long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 1 >::operator();
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_192278cc557559608ab2689de64db1bd)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 1 >::coeffRef;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_2129ca9f33755ae2ae2046edca910605)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 1 >::operator[];
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_d163a1c86a91568aa8d459c8000f25c0)(long int ) = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 1 >::operator();
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_cf784443962e56289b58b90d48cee597)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 1 >::x;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_8b538958af2f58c789d4ac834af8caa2)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 1 >::y;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_da85f93f82905f2989fa40b714ca6cff)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 1 >::z;
    struct ::std::complex< float >  & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 >, 1 >::*method_pointer_a3ef3a65f42056c1a4cb2dcba839015e)() = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 1 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 1 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 1 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 0 > > > class_4ceb2f9caee15f4da2f30b6e8251b9bd("_DenseCoeffsBase_4ceb2f9caee15f4da2f30b6e8251b9bd", "", boost::python::no_init);
    class_4ceb2f9caee15f4da2f30b6e8251b9bd.def("coeff_ref", method_pointer_f8e8d489e02b597e8117c8d8be9bc1c0, boost::python::return_internal_reference<>(), "");
    class_4ceb2f9caee15f4da2f30b6e8251b9bd.def("coeff_ref", autowig::method_decorator_f8e8d489e02b597e8117c8d8be9bc1c0);
    class_4ceb2f9caee15f4da2f30b6e8251b9bd.def("coeff_ref_by_outer_inner", method_pointer_03746ec8c9ed5eda89dbdd9b489debce, boost::python::return_internal_reference<>(), "");
    class_4ceb2f9caee15f4da2f30b6e8251b9bd.def("coeff_ref_by_outer_inner", autowig::method_decorator_03746ec8c9ed5eda89dbdd9b489debce);
    class_4ceb2f9caee15f4da2f30b6e8251b9bd.def("__call__", method_pointer_abb95f0137b9576ea589cad571ffaeac, boost::python::return_internal_reference<>(), "");
    class_4ceb2f9caee15f4da2f30b6e8251b9bd.def("__call__", autowig::method_decorator_abb95f0137b9576ea589cad571ffaeac);
    class_4ceb2f9caee15f4da2f30b6e8251b9bd.def("coeff_ref", method_pointer_192278cc557559608ab2689de64db1bd, boost::python::return_internal_reference<>(), "");
    class_4ceb2f9caee15f4da2f30b6e8251b9bd.def("coeff_ref", autowig::method_decorator_192278cc557559608ab2689de64db1bd);
    class_4ceb2f9caee15f4da2f30b6e8251b9bd.def("__getitem__", method_pointer_2129ca9f33755ae2ae2046edca910605, boost::python::return_internal_reference<>(), "");
    class_4ceb2f9caee15f4da2f30b6e8251b9bd.def("__getitem__", autowig::method_decorator_2129ca9f33755ae2ae2046edca910605);
    class_4ceb2f9caee15f4da2f30b6e8251b9bd.def("__call__", method_pointer_d163a1c86a91568aa8d459c8000f25c0, boost::python::return_internal_reference<>(), "");
    class_4ceb2f9caee15f4da2f30b6e8251b9bd.def("__call__", autowig::method_decorator_d163a1c86a91568aa8d459c8000f25c0);
    class_4ceb2f9caee15f4da2f30b6e8251b9bd.def("x", method_pointer_cf784443962e56289b58b90d48cee597, boost::python::return_internal_reference<>(), "");
    class_4ceb2f9caee15f4da2f30b6e8251b9bd.def("x", autowig::method_decorator_cf784443962e56289b58b90d48cee597);
    class_4ceb2f9caee15f4da2f30b6e8251b9bd.def("y", method_pointer_8b538958af2f58c789d4ac834af8caa2, boost::python::return_internal_reference<>(), "");
    class_4ceb2f9caee15f4da2f30b6e8251b9bd.def("y", autowig::method_decorator_8b538958af2f58c789d4ac834af8caa2);
    class_4ceb2f9caee15f4da2f30b6e8251b9bd.def("z", method_pointer_da85f93f82905f2989fa40b714ca6cff, boost::python::return_internal_reference<>(), "");
    class_4ceb2f9caee15f4da2f30b6e8251b9bd.def("z", autowig::method_decorator_da85f93f82905f2989fa40b714ca6cff);
    class_4ceb2f9caee15f4da2f30b6e8251b9bd.def("w", method_pointer_a3ef3a65f42056c1a4cb2dcba839015e, boost::python::return_internal_reference<>(), "");
    class_4ceb2f9caee15f4da2f30b6e8251b9bd.def("w", autowig::method_decorator_a3ef3a65f42056c1a4cb2dcba839015e);

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 1 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 0 > > >();
    }

}