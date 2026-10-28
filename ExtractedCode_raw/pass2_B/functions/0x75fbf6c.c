// rea decompile_all
// name: System.AppDomain$$DoAssemblyResolve
// address: 0x75fbf6c
// body: available
// range: 0x75fbf6c-0x75fc26f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75fc250 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75fc254 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75fc25c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75fc260 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75fc264 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75fc26c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x075fc268) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
System_AppDomain__DoAssemblyResolve
          (long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long local_68;
  
  if ((DAT_09521f87 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181360);
    FUN_03f5c2a4(&DAT_0919fb80);
    FUN_03f5c2a4(&DAT_0919fb90);
    FUN_03f5c2a4(&DAT_0919fb58);
    FUN_03f5c2a4(&DAT_0919fbc8);
    FUN_03f5c2a4(&DAT_09176b80);
    FUN_03f5c2a4(&DAT_0918a0e8);
    FUN_03f5c2a4(&DAT_0918a0f0);
    DAT_09521f87 = 1;
  }
  lVar2 = 0x80;
  if ((param_4 & 1) == 0) {
    lVar2 = 0x40;
  }
  plVar4 = *(long **)(param_1 + lVar2);
  if (plVar4 == (long *)0x0) {
    return 0;
  }
  lVar2 = FUN_03f5c2c0(DAT_09181360);
  if ((param_4 & 1) == 0) {
    local_68 = *(long *)(lVar2 + 8);
    if (local_68 == 0) {
      local_68 = thunk_FUN_03f9944c(DAT_09176b80);
      FUN_06fd76bc(local_68,DAT_0919fb58);
      lVar2 = FUN_03f5c2c0(DAT_09181360);
      uVar5 = DAT_09181360;
      *(long *)(lVar2 + 8) = local_68;
      lVar2 = FUN_03f5c2c0(uVar5);
      lVar2 = lVar2 + 8;
      goto LAB_075fc0e0;
    }
  }
  else {
    local_68 = *(long *)(lVar2 + 0x10);
    if (local_68 == 0) {
      local_68 = thunk_FUN_03f9944c(DAT_09176b80);
      FUN_06fd76bc(local_68,DAT_0919fb58);
      lVar2 = FUN_03f5c2c0(DAT_09181360);
      uVar5 = DAT_09181360;
      *(long *)(lVar2 + 0x10) = local_68;
      lVar2 = FUN_03f5c2c0(uVar5);
      lVar2 = lVar2 + 0x10;
LAB_075fc0e0:
      thunk_FUN_03f5d7b8(lVar2,local_68);
      if (local_68 == 0) goto LAB_075fc260;
    }
  }
  uVar3 = FUN_06fd8648(local_68,param_2,DAT_0919fb80);
  if ((uVar3 & 1) == 0) {
    FUN_06fd8440(local_68,param_2,0,DAT_0919fbc8);
    lVar2 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (0 < (int)uVar1) {
      lVar6 = 0;
      do {
        if (uVar1 <= (uint)lVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar4 = *(long **)(lVar2 + 0x20 + lVar6 * 8);
        uVar5 = thunk_FUN_03f9944c(DAT_0918a0e8);
        System_ResolveEventArgs___ctor(uVar5,param_2,param_3,0);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*plVar4 != DAT_0918a0f0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar4);
        }
        uVar5 = (*(code *)plVar4[3])(plVar4[8],param_1,uVar5,plVar4[5]);
        uVar3 = System_Reflection_Assembly__op_Inequality(uVar5,0,0);
        if ((uVar3 & 1) != 0) goto LAB_075fc204;
        uVar1 = *(uint *)(lVar2 + 0x18);
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < (int)uVar1);
    }
    uVar5 = 0;
LAB_075fc204:
    if (local_68 == 0) {
LAB_075fc260:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_06fd9970(local_68,param_2,DAT_0919fb90);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

