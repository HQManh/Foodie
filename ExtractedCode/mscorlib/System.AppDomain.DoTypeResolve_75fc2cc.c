// rea decompile_all
// name: System.AppDomain$$DoTypeResolve
// address: 0x75fc2cc
// body: available
// range: 0x75fc2cc-0x75fc55f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75fc53c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75fc540 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75fc548 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75fc54c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75fc550 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75fc558 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75fc55c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x075fc554) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 System_AppDomain__DoTypeResolve(long param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long local_60;
  
  if ((DAT_09521f88 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181360);
    FUN_03f5c2a4(&DAT_0919fb80);
    FUN_03f5c2a4(&DAT_0919fb90);
    FUN_03f5c2a4(&DAT_0919fb58);
    FUN_03f5c2a4(&DAT_0919fbc8);
    FUN_03f5c2a4(&DAT_09176b80);
    FUN_03f5c2a4(&DAT_0918a0e8);
    FUN_03f5c2a4(&DAT_0918a0f0);
    DAT_09521f88 = 1;
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    plVar2 = (long *)FUN_03f5c2c0(DAT_09181360);
    local_60 = *plVar2;
    if (local_60 == 0) {
      local_60 = thunk_FUN_03f9944c(DAT_09176b80);
      FUN_06fd76bc(local_60,DAT_0919fb58);
      plVar2 = (long *)FUN_03f5c2c0(DAT_09181360);
      *plVar2 = local_60;
      uVar3 = FUN_03f5c2c0(DAT_09181360);
      thunk_FUN_03f5d7b8(uVar3,local_60);
      if (local_60 == 0) goto LAB_075fc54c;
    }
    uVar4 = FUN_06fd8648(local_60,param_2,DAT_0919fb80);
    if ((uVar4 & 1) == 0) {
      FUN_06fd8440(local_60,param_2,0,DAT_0919fbc8);
      plVar2 = *(long **)(param_1 + 0x60);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = (**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0));
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (0 < (int)uVar1) {
        lVar6 = 0;
        do {
          if (uVar1 <= (uint)lVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          plVar2 = *(long **)(lVar5 + 0x20 + lVar6 * 8);
          uVar3 = thunk_FUN_03f9944c(DAT_0918a0e8);
          System_ResolveEventArgs___ctor(uVar3,param_2,0);
          if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*plVar2 != DAT_0918a0f0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(plVar2);
          }
          uVar3 = (*(code *)plVar2[3])(plVar2[8],param_1,uVar3,plVar2[5]);
          uVar4 = System_Reflection_Assembly__op_Inequality(uVar3,0,0);
          if ((uVar4 & 1) != 0) goto LAB_075fc4f4;
          uVar1 = *(uint *)(lVar5 + 0x18);
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < (int)uVar1);
      }
      uVar3 = 0;
LAB_075fc4f4:
      if (local_60 != 0) {
        FUN_06fd9970(local_60,param_2,DAT_0919fb90);
        return uVar3;
      }
LAB_075fc54c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return 0;
}

