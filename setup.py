##################################################################################
#                                                                                #
# AutoWIG: Automatic Wrapper and Interface Generator                             #
#                                                                                #
# Homepage: http://autowig.readthedocs.io                                        #
#                                                                                #
# Copyright (c) 2016 Pierre Fernique                                             #
#                                                                                #
# This software is distributed under the CeCILL license. You should have       #
# received a copy of the legalcode along with this work. If not, see             #
# <http://www.cecill.info/licences/Licence_CeCILL_V2.1-en.html>.                 #
#                                                                                #
# File authors: Pierre Fernique <pfernique@gmail.com> (19)                       #
#                                                                                #
##################################################################################

import os
from setuptools import setup, find_packages

packages = {"" : "src" + os.sep + "py"}
for package in find_packages("src" + os.sep + "py"):
    packages[package] = "src" + os.sep + "py"

from pkg.metadata import load_metadata
metadata = load_metadata('.')

setup(packages = packages.keys(),
      package_dir = {"" : "src" + os.sep + "py"},
      name = metadata.name,
      version = metadata.version,
      author = metadata.authors,
      author_email = metadata.email,
      description = metadata.description,
      long_description = metadata.long_description,
      license = metadata.license,
      package_data = {package: [ "*.so", "*.dll"] for package in packages},
       zip_safe = False
    )


