// rea decompile_all
// name: AnhPD.FoodOrder.Customer$$BuildStateLookup
// address: 0x4200c30
// body: available
// range: 0x4200c30-0x4200ff3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4200fe0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4200fe4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4200ff0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * AnhPD_FoodOrder_Customer__BuildStateLookup(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  int local_68;
  undefined4 local_64;
  
  if ((DAT_09516be9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0160);
    FUN_03f5c2a4(&DAT_0917fde0);
    FUN_03f5c2a4(&DAT_09183128);
    FUN_03f5c2a4(&DAT_091830a8);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0918f8a8);
    FUN_03f5c2a4(&DAT_09213c40);
    FUN_03f5c2a4(&DAT_09213c50);
    DAT_09516be9 = 1;
  }
  if (*(int *)(DAT_091830a8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar2 = (long *)FUN_03f5c394(DAT_0917fde0,**(undefined4 **)(DAT_091830a8 + 0xb8));
  lVar3 = DAT_091c0160;
  lVar9 = *(long *)(param_1 + 0x28);
  if (lVar9 == 0) {
    lVar9 = *(long *)(DAT_091c0160 + 0x38);
    if (lVar9 == 0) {
      FUN_03f95ac8(DAT_091c0160);
      lVar9 = *(long *)(lVar3 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03f95a6c();
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar9 = **(long **)(lVar3 + 0xb8);
    if (lVar9 == 0) {
LAB_04200fe4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  plVar7 = plVar2 + 4;
  if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
    uVar8 = 0;
    uVar6 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
    do {
      if (uVar6 <= uVar8) goto LAB_04200fe0;
      lVar3 = *(long *)(lVar9 + 0x20 + uVar8 * 8);
      if (lVar3 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x10);
        if (-1 < (int)uVar1) {
          if (*(int *)(DAT_091830a8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if ((int)uVar1 < **(int **)(DAT_091830a8 + 0xb8)) {
            if (plVar2 == (long *)0x0) goto LAB_04200fe4;
            if (*(uint *)(plVar2 + 3) <= uVar1) goto LAB_04200fe0;
            if (plVar2[(ulong)uVar1 + 4] == 0) {
              lVar5 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40));
              if (lVar5 == 0) goto LAB_04200fe8;
              if (*(uint *)(plVar2 + 3) <= uVar1) goto LAB_04200fe0;
              plVar2[(ulong)uVar1 + 4] = lVar3;
              thunk_FUN_03f5d7b8(plVar7 + uVar1,lVar3);
            }
            else {
              local_64 = *(undefined4 *)(lVar3 + 0x10);
              uVar4 = FUN_03f5c42c(DAT_0918f8a8,&local_64);
              uVar4 = System_String__Format(DAT_09213c40,uVar4,0);
              if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                FUN_03f5c424(DAT_091835d0);
              }
              UnityEngine_Debug__LogError(uVar4,param_1,0);
            }
          }
        }
      }
      uVar6 = (ulong)*(uint *)(lVar9 + 0x18);
      uVar8 = uVar8 + 1;
    } while ((long)uVar8 < (long)(int)*(uint *)(lVar9 + 0x18));
  }
  lVar3 = -4;
  lVar9 = DAT_091830a8;
  do {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar9 = DAT_091830a8;
    }
    uVar8 = lVar3 + 4;
    if ((long)**(int **)(lVar9 + 0xb8) <= (long)uVar8) {
      return plVar2;
    }
    if (plVar2 == (long *)0x0) goto LAB_04200fe4;
    if (*(uint *)(plVar2 + 3) <= uVar8) goto LAB_04200fe0;
    if (*plVar7 == 0) {
      if (lVar3 != 0) {
        local_68 = (int)lVar3 + 4;
        uVar4 = FUN_03f5c42c(DAT_0918f8a8,&local_68);
        uVar4 = System_String__Format(DAT_09213c50,uVar4,0);
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_091835d0);
        }
        UnityEngine_Debug__LogError(uVar4,param_1,0);
      }
      lVar9 = thunk_FUN_03f9944c(DAT_09183128);
      AnhPD_FoodOrder_CustomerState___ctor(lVar9,0);
      if ((lVar9 != 0) &&
         (lVar5 = thunk_FUN_03f99350(lVar9,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0)) {
LAB_04200fe8:
        uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar4,0);
      }
      if (*(uint *)(plVar2 + 3) <= uVar8) {
LAB_04200fe0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *plVar7 = lVar9;
      thunk_FUN_03f5d7b8(plVar7,lVar9);
      lVar9 = DAT_091830a8;
    }
    lVar3 = lVar3 + 1;
    plVar7 = plVar7 + 1;
  } while( true );
}

