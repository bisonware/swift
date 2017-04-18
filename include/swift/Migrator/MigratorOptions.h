//===--- MigratorOptions.h - Swift Migrator ---------------------*- C++ -*-===//
//
// This source file is part of the Swift.org open source project
//
// Copyright (c) 2014 - 2017 Apple Inc. and the Swift project authors
// Licensed under Apache License v2.0 with Runtime Library Exception
//
// See https://swift.org/LICENSE.txt for license information
// See https://swift.org/CONTRIBUTORS.txt for the list of Swift project authors
//
//===----------------------------------------------------------------------===//
//
// A container for Swift Migrator options pulled in through the driver/frontend.
//
//===----------------------------------------------------------------------===//

#ifndef SWIFT_MIGRATOR_MIGRATOROPTIONS_H
#define SWIFT_MIGRATOR_MIGRATOROPTIONS_H

namespace swift {

struct MigratorOptions {
  /// Add `@objc` to declarations that would've been implicitly
  /// visible to the Objective-C runtime in Swift 3.
  bool AddObjC = false;

  /// Skip the migration phase that repeatedly asks for fix-its from the
  /// compiler and applies them. This is generally for debugging.
  bool EnableMigratorFixits = true;

  /// If non-empty, print the last MigrationState's output text to the given
  /// file path.
  std::string EmitMigratedFilePath = "";

  /// If non-empty, dump all Migrator::States to this directory.
  std::string DumpMigrationStatesDir = "";
};

} // end namespace swift

#endif // SWIFT_MIGRATOR_MIGRATOROPTIONS_H
