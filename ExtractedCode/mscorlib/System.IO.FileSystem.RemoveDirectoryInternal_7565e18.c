// rea decompile_all
// name: System.IO.FileSystem$$RemoveDirectoryInternal
// address: 0x7565e18
// body: available
// range: 0x7565e18-0x75660f7 inclusive
// range: 0x7566160-0x7566383 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7565f5c to 0x75651d8 System.IO.FileSystem$$DeleteFile (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75660f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7566284 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7566288 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756628c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75662a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75662ac to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7566338 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7566380 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x075662ac) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void System_IO_FileSystem__RemoveDirectoryInternal(long *param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  
  if ((DAT_095219db & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183b78);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a768);
    FUN_03f5c2a4(&DAT_0917ae48);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09188f20);
    FUN_03f5c2a4(&DAT_09191e88);
    DAT_095219db = 1;
  }
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = System_IO_FileSystemInfo__get_Attributes(param_1,0);
  if ((uVar1 >> 10 & 1) != 0) {
    (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
    System_IO_FileSystem__DeleteFile();
    return;
  }
  if ((param_2 & 1) != 0) {
    uVar3 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
    plVar4 = (long *)System_IO_Directory__EnumerateFileSystemEntries(uVar3,0);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_0917a768) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_07565f6c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a768,0);
LAB_07565f6c:
    plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    do {
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar9 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_09185b10) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_07566004;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_07566004:
      uVar10 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((uVar10 & 1) == 0) {
        if (plVar4 == (long *)0x0) break;
        lVar9 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 == 0) goto LAB_075661a8;
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_07566190;
      }
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar9 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_0917ae48) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_07566068;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917ae48,0);
LAB_07566068:
      uVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_IO_Path__GetFileName(uVar3,0);
      uVar10 = System_IO_FileSystem__ShouldIgnoreDirectory();
      if ((uVar10 & 1) == 0) {
        plVar6 = (long *)thunk_FUN_03f9944c(DAT_09183b78);
        System_IO_DirectoryInfo___ctor(plVar6,uVar3,0);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar10 = (**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
        if ((uVar10 & 1) == 0) {
          System_IO_FileSystem__DeleteFile(uVar3);
        }
        else {
          System_IO_FileSystem__RemoveDirectoryInternal(plVar6,1,0);
        }
      }
    } while( true );
  }
  goto LAB_075661e4;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_07566190:
    if (*(long *)(piVar11 + -2) == DAT_09185a58) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_075661c4;
    }
  }
LAB_075661a8:
  puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_075661c4:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_075661e4:
  uVar3 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
  if (*(int *)(DAT_09191e88 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09191e88);
  }
  iVar2 = Interop_Sys__RmDir(uVar3,0);
  if (-1 < iVar2) {
    return;
  }
  if (*(int *)(DAT_09191e88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = Interop_Sys__GetLastErrorInfo(0);
  uVar1 = (uint)uVar3;
  if ((int)uVar1 < 0x10020) {
    if (uVar1 == 0x10002) goto LAB_075662d0;
    uVar8 = 0x1f;
  }
  else {
    if (uVar1 == 0x1002d) {
      if ((param_3 & 1) == 0) {
        return;
      }
      goto LAB_0756633c;
    }
    if (uVar1 == 0x10048) goto LAB_075662d0;
    uVar8 = 0x42;
  }
  if (uVar1 == (uVar8 | 0x10000)) {
LAB_075662d0:
    FUN_039b1d98(param_1);
    uVar3 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
    uVar7 = thunk_FUN_03fc39d4(&DAT_091fb338);
    uVar3 = SR__Format(uVar7,uVar3,0);
    thunk_FUN_03fc39d4(&DAT_09186188);
    uVar7 = thunk_FUN_03f9944c();
    System_IO_IOException___ctor(uVar7,uVar3);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091cc338);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar7,uVar3);
  }
LAB_0756633c:
  FUN_039b1d98(param_1);
  uVar7 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
  uVar3 = Interop__GetExceptionForIoErrno(uVar3,uVar7,1,0);
  uVar7 = thunk_FUN_03fc39d4(&DAT_091cc338);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar7);
}

