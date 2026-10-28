// rea decompile_all
// name: System.IO.FileSystem$$CopyFile
// address: 0x75649f4
// body: available
// range: 0x75649f4-0x7564d17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7564d00 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7564d04 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7564d08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7564d0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7564d14 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07564d10) */

void System_IO_FileSystem__CopyFile(undefined8 param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  undefined4 uVar8;
  long local_58;
  long **local_50;
  long *local_48;
  long *local_38;
  
  if ((DAT_095219d4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184580);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09191e88);
    DAT_095219d4 = 1;
  }
  local_38 = (long *)0x0;
  local_48 = (long *)0x0;
  if (DAT_09519f66 == '\0') {
    FUN_03f5c2a4(&DAT_091b97b8);
    DAT_09519f66 = '\x01';
  }
  if (param_2 == 0) {
    uVar1 = 0;
    uVar8 = 0;
  }
  else {
    uVar1 = System_String__GetRawStringData(param_2,0);
    uVar8 = *(undefined4 *)(param_2 + 0x10);
  }
  local_58 = 0;
  uVar2 = System_IO_FileSystem__FileExists(uVar1,uVar8,0x4000,&local_58);
  if ((uVar2 & 1) != 0) {
    uVar1 = thunk_FUN_03fc39d4(&DAT_09210080);
    uVar1 = SR__Format(uVar1,param_2,0);
    thunk_FUN_03fc39d4(&DAT_0918c5d8);
    uVar4 = thunk_FUN_03f9944c();
    System_UnauthorizedAccessException___ctor(uVar4,uVar1,0);
    uVar1 = thunk_FUN_03fc39d4(&DAT_091cc310);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar1);
  }
  uVar2 = System_IO_FileSystem__CopyDanglingSymlink(param_1,param_2);
  if ((uVar2 & 1) == 0) {
    plVar3 = (long *)thunk_FUN_03f9944c(DAT_09184580);
    System_IO_FileStream___ctor(plVar3,param_1,3,1,1,0x1000,0,0);
    local_50 = &local_38;
    local_58 = 0;
    local_38 = plVar3;
    plVar3 = (long *)thunk_FUN_03f9944c(DAT_09184580);
    uVar8 = 1;
    if ((param_3 & 1) != 0) {
      uVar8 = 2;
    }
    System_IO_FileStream___ctor(plVar3,param_2,uVar8,3,0,0x1000,0,0);
    local_48 = plVar3;
    if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = (**(code **)(*local_38 + 1000))(local_38,*(undefined8 *)(*local_38 + 0x3f0));
    if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = (**(code **)(*local_48 + 1000))(local_48,*(undefined8 *)(*local_48 + 0x3f0));
    if (*(int *)(DAT_09191e88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = Interop_Sys__CopyFile(uVar1,uVar4,0);
    Interop__CheckIo(uVar1,0,0,0,0);
    plVar3 = local_48;
    if (local_48 != (long *)0x0) {
      lVar6 = *local_48;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_09185a58) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_07564c14;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(local_48,DAT_09185a58,0);
LAB_07564c14:
      (*(code *)*puVar5)(plVar3,puVar5[1]);
    }
    plVar3 = *local_50;
    if (plVar3 != (long *)0x0) {
      lVar6 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_09185a58) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_07564c84;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_07564c84:
      (*(code *)*puVar5)(plVar3,puVar5[1]);
    }
    if (local_58 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c548();
    }
  }
  return;
}

