#include "_ieigen.h"


namespace autowig
{
    void method_decorator_01c431be16c05ba2a38a94bc87727871(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > & instance, float  const & param_in_0, class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & param_out)     { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_0957d7a9171753349db9925fbc1b8c39(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, float  const & param_in_1, float  const & param_in_2, class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_a15a42d558115e1bad0480da06c2db8b(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > & instance, float  const & param_in_0, float  const & param_in_1, class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & param_out)     { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_edba4216b6c95e6d9f7d6d40dca6e296(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & param_out)     { instance.setZero() = param_out; }
    void method_decorator_673d6bfb379a5e2fb45ae92a8efb5949(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & param_out)     { instance.setOnes() = param_out; }
    void method_decorator_ece35aa492315df7b72c8f586750cc6a(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & param_out)     { instance.setRandom() = param_out; }
    void method_decorator_6c9187444d93564e8353143283d2c233(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > & instance, float  const & param_in_0, class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & param_out)     { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_217b2e19aa0d5d5ab1ae5c47f97b041a()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_3fff2f6e378a5eccbb8e663ef40256d5)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_ea6d1036cb9354e3bca4ab0c3cd5d031)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_c4fdfed969535a42a5102b29e45ec5d1)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_0b9075a390d45ee7ada6d0a5df5d7e49)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_c593745633ad5e2ea3ef0c6f071b2c21)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_6da279fc82775da6a2cf4ee5281edab2)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_07577fad0ea459b89423ec0c4ba09078)(float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::fill;
    class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_01c431be16c05ba2a38a94bc87727871)(float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::setConstant;
    class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_0957d7a9171753349db9925fbc1b8c39)(long int , float  const &, float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::setLinSpaced;
    class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_a15a42d558115e1bad0480da06c2db8b)(float  const &, float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::setLinSpaced;
    class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_edba4216b6c95e6d9f7d6d40dca6e296)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::setZero;
    class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_673d6bfb379a5e2fb45ae92a8efb5949)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::setOnes;
    class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_ece35aa492315df7b72c8f586750cc6a)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_5136bf1c06c3594b9dda749aba8bc088)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_7a98a4f09c4f508ea5f3b2393feafb6f)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_1562e118d78f53d1973a8849f309d8df)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_1a33d97d38f956e6bca94a91653d10f1)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_a8beed1f71155c9e878c02eb830bad6c)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_b4aaadcf537b555cb86eed7b7286a102)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_dca1abd7e0015d8092d0bcae88c498f8)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::allFinite;
    class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_6c9187444d93564e8353143283d2c233)(float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::operator*=;
    class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_982bcc54b7105246b2c011c48ddd568b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::eval;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_a399008669345f81ad73da762c3d9538)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::sum;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_b9a5b9dd3da3587bb57f2c8aa27e2a10)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::mean;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_e3c89a96fdd85b7c9e5ffb429220b94c)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::trace;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_bb3f01c729975c1ea119faebb0437548)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::prod;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_6af687a07c5b5577a32c0cd262e583ef)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::minCoeff;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_1d5386e7c62b5f509a04a1eeafb1846d)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::maxCoeff;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_8759036eedbd5f599b4a3a489519feab)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_c9950b2226c15887822cbb6d25194b99)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_6239d69a7d635502af524885251041ea)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::*method_pointer_99eb72f15ea25af5b7aaa6deb850d56b)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 3 > > > class_217b2e19aa0d5d5ab1ae5c47f97b041a("_DenseBase_217b2e19aa0d5d5ab1ae5c47f97b041a", "", boost::python::no_init);
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("non_zeros", method_pointer_3fff2f6e378a5eccbb8e663ef40256d5, "");
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("outer_size", method_pointer_ea6d1036cb9354e3bca4ab0c3cd5d031, "");
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("inner_size", method_pointer_c4fdfed969535a42a5102b29e45ec5d1, "");
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("resize", method_pointer_0b9075a390d45ee7ada6d0a5df5d7e49, "");
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("resize", method_pointer_c593745633ad5e2ea3ef0c6f071b2c21, "");
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("transpose_in_place", method_pointer_6da279fc82775da6a2cf4ee5281edab2, "");
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("fill", method_pointer_07577fad0ea459b89423ec0c4ba09078, "");
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("set_constant", method_pointer_01c431be16c05ba2a38a94bc87727871, boost::python::return_internal_reference<>(), "");
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("set_constant", autowig::method_decorator_01c431be16c05ba2a38a94bc87727871);
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("set_lin_spaced", method_pointer_0957d7a9171753349db9925fbc1b8c39, boost::python::return_internal_reference<>(), "");
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("set_lin_spaced", autowig::method_decorator_0957d7a9171753349db9925fbc1b8c39);
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("set_lin_spaced", method_pointer_a15a42d558115e1bad0480da06c2db8b, boost::python::return_internal_reference<>(), "");
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("set_lin_spaced", autowig::method_decorator_a15a42d558115e1bad0480da06c2db8b);
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("set_zero", method_pointer_edba4216b6c95e6d9f7d6d40dca6e296, boost::python::return_internal_reference<>(), "");
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("set_zero", autowig::method_decorator_edba4216b6c95e6d9f7d6d40dca6e296);
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("set_ones", method_pointer_673d6bfb379a5e2fb45ae92a8efb5949, boost::python::return_internal_reference<>(), "");
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("set_ones", autowig::method_decorator_673d6bfb379a5e2fb45ae92a8efb5949);
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("set_random", method_pointer_ece35aa492315df7b72c8f586750cc6a, boost::python::return_internal_reference<>(), "");
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("set_random", autowig::method_decorator_ece35aa492315df7b72c8f586750cc6a);
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("is_much_smaller_than", method_pointer_5136bf1c06c3594b9dda749aba8bc088, "");
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("is_approx_to_constant", method_pointer_7a98a4f09c4f508ea5f3b2393feafb6f, "");
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("is_constant", method_pointer_1562e118d78f53d1973a8849f309d8df, "");
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("is_zero", method_pointer_1a33d97d38f956e6bca94a91653d10f1, "");
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("is_ones", method_pointer_a8beed1f71155c9e878c02eb830bad6c, "");
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("has_na_n", method_pointer_b4aaadcf537b555cb86eed7b7286a102, "");
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("all_finite", method_pointer_dca1abd7e0015d8092d0bcae88c498f8, "");
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("__imul__", method_pointer_6c9187444d93564e8353143283d2c233, boost::python::return_internal_reference<>(), "");
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("__imul__", autowig::method_decorator_6c9187444d93564e8353143283d2c233);
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("eval", method_pointer_982bcc54b7105246b2c011c48ddd568b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("sum", method_pointer_a399008669345f81ad73da762c3d9538, "");
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("mean", method_pointer_b9a5b9dd3da3587bb57f2c8aa27e2a10, "");
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("trace", method_pointer_e3c89a96fdd85b7c9e5ffb429220b94c, "");
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("prod", method_pointer_bb3f01c729975c1ea119faebb0437548, "");
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("min_coeff", method_pointer_6af687a07c5b5577a32c0cd262e583ef, "");
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("max_coeff", method_pointer_1d5386e7c62b5f509a04a1eeafb1846d, "");
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("all", method_pointer_8759036eedbd5f599b4a3a489519feab, "");
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("any", method_pointer_c9950b2226c15887822cbb6d25194b99, "");
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("count", method_pointer_6239d69a7d635502af524885251041ea, "");
    class_217b2e19aa0d5d5ab1ae5c47f97b041a.def("reverse_in_place", method_pointer_99eb72f15ea25af5b7aaa6deb850d56b, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, 3 > > >();
    }

}