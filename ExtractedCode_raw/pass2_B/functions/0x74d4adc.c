// rea decompile_all
// name: System.Resources.ResourceReader$$FindPosForResource
// address: 0x74d4adc
// body: available
// range: 0x74d4adc-0x74d4df7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74d4d30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d4d34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d4d3c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d4d74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d4d78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d4d7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d4d80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d4df4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x074d4d38) */

ulong System_Resources_ResourceReader__FindPosForResource(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  uint local_6c [3];
  char *pcStack_60;
  long *local_58;
  char local_4c [4];
  long local_48;
  
  if ((DAT_09521579 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091844d8);
    DAT_09521579 = 1;
  }
  local_48 = 0;
  local_4c[0] = '\0';
  if (*(int *)(DAT_091844d8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar2 = System_Resources_FastResourceComparer__HashFunction(param_2);
  iVar12 = *(int *)(param_1 + 0x68) + -1;
  if (-1 < iVar12) {
    iVar10 = 0;
    do {
      while( true ) {
        iVar1 = iVar10 + iVar12 >> 1;
        iVar3 = System_Resources_ResourceReader__GetNameHash(param_1,iVar1);
        if (iVar3 == iVar2) {
          iVar3 = iVar1;
          if (iVar10 == iVar1) goto LAB_074d4bcc;
          goto LAB_074d4bac;
        }
        if (iVar3 < iVar2) break;
        iVar12 = iVar1 + -1;
        if (iVar1 <= iVar10) {
          return 0xffffffff;
        }
      }
      iVar10 = iVar1 + 1;
    } while (iVar1 < iVar12);
  }
  return 0xffffffff;
  while (iVar4 = System_Resources_ResourceReader__GetNameHash(param_1,iVar10 + -1),
        iVar3 = iVar10 + -1, iVar4 == iVar2) {
LAB_074d4bac:
    iVar10 = iVar3;
    if (iVar10 < 1) break;
  }
LAB_074d4bcc:
  if (iVar12 != iVar1) {
    do {
      iVar12 = iVar1;
      if (*(int *)(param_1 + 0x68) + -1 <= iVar12) break;
      iVar3 = System_Resources_ResourceReader__GetNameHash(param_1,iVar12 + 1);
      iVar1 = iVar12 + 1;
    } while (iVar3 == iVar2);
  }
  pcStack_60 = local_4c;
  local_6c[1] = 0;
  local_6c[2] = 0;
  local_58 = &local_48;
  local_4c[0] = '\0';
  local_48 = param_1;
  System_Threading_Monitor__Enter(param_1,local_4c,0);
  do {
    if (iVar12 < iVar10) {
      uVar7 = 0xffffffff;
LAB_074d4cf4:
      if (local_4c[0] != '\0') {
        System_Threading_Monitor__Exit(*local_58,0);
      }
      return uVar7;
    }
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
    lVar11 = *(long *)(param_1 + 0x20);
    iVar2 = System_Resources_ResourceReader__GetNamePosition(param_1,iVar10);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(*plVar6 + 0x348))(plVar6,lVar11 + iVar2,0,*(undefined8 *)(*plVar6 + 0x350));
    uVar7 = System_Resources_ResourceReader__CompareStringEqualsName(param_1,param_2);
    if ((uVar7 & 1) != 0) {
      plVar6 = *(long **)(param_1 + 0x10);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar5 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
      uVar7 = (ulong)uVar5;
      if (-1 < (int)uVar5) {
        plVar6 = *(long **)(param_1 + 0x10);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar6 = (long *)(**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar11 = (**(code **)(*plVar6 + 0x1f8))(plVar6,*(undefined8 *)(*plVar6 + 0x200));
        if ((long)uVar7 < lVar11 - *(long *)(param_1 + 0x28)) goto LAB_074d4cf4;
      }
      uVar8 = thunk_FUN_03fc39d4(&DAT_09180318);
      lVar11 = FUN_03f5c394(uVar8,1);
      local_6c[0] = uVar5;
      uVar8 = FUN_03f5c42c(DAT_09535420,local_6c);
      if (lVar11 != 0) {
        FUN_039b0da0(lVar11,uVar8);
        FUN_039af17c(lVar11,0,uVar8);
        uVar8 = thunk_FUN_03fc39d4(&DAT_091ff318);
        uVar8 = System_Environment__GetResourceString(uVar8,lVar11,0);
        thunk_FUN_03fc39d4(&DAT_09184908);
        uVar9 = thunk_FUN_03f9944c();
        System_FormatException___ctor(uVar9,uVar8,0);
        uVar8 = thunk_FUN_03fc39d4(&DAT_091d7cc0);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar9,uVar8);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar10 = iVar10 + 1;
  } while( true );
}

