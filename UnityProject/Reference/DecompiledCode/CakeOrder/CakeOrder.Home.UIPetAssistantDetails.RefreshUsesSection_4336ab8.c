// rea decompile_all
// name: CakeOrder.Home.UIPetAssistantDetails$$RefreshUsesSection
// address: 0x4336ab8
// body: available
// range: 0x4336ab8-0x4336f63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4336f50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4336f54 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4336f60 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIPetAssistantDetails__RefreshUsesSection(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  char cVar12;
  long lVar13;
  undefined4 local_48;
  undefined4 local_44;
  
  if ((DAT_09517700 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4b48);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09223f18);
    DAT_09517700 = 1;
  }
  local_44 = 0;
  if (*(long *)(param_1 + 0x60) == 0) goto LAB_04336f50;
  local_44 = CakeOrder_SaveProfile_PetAssistantDataAccess__GetRemainingUses
                       (*(long *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x48),0);
  uVar9 = *(undefined8 *)(param_1 + 0xd0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar9,0);
  if ((uVar2 & 1) != 0) {
    plVar10 = *(long **)(param_1 + 0xd0);
    uVar9 = System_Int32__ToString(&local_44,0);
    if (plVar10 == (long *)0x0) goto LAB_04336f50;
    (**(code **)(*plVar10 + 0x558))(plVar10,uVar9,*(undefined8 *)(*plVar10 + 0x560));
  }
  if (*(char *)(param_1 + 0x118) == '\0') {
    cVar12 = '\0';
  }
  else {
    cVar12 = *(char *)(param_1 + 0x144);
  }
  uVar9 = *(undefined8 *)(param_1 + 0xd8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar9,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0xd8) == 0) goto LAB_04336f50;
    UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0xd8),cVar12 != '\0',0);
  }
  if (cVar12 == '\0') {
    return;
  }
  uVar9 = *(undefined8 *)(param_1 + 0xe0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar9,0);
  if ((uVar2 & 1) != 0) {
    plVar11 = *(long **)(param_1 + 0xe0);
    plVar10 = (long *)FUN_03f5c394(DAT_09180318,1);
    local_48 = *(undefined4 *)(param_1 + 0x140);
    lVar3 = FUN_03f5c42c(DAT_09535420,&local_48);
    if (plVar10 == (long *)0x0) goto LAB_04336f50;
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar10 + 0x40)), lVar4 == 0)) {
      uVar9 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar9,0);
    }
    if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar10[4] = lVar3;
    thunk_FUN_03f5d7b8(plVar10 + 4,lVar3);
    if (*(int *)(DAT_09182278 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar9 = CakeOrder_Localization_CakeLocalization__TrFormat(DAT_09223f18,plVar10,0);
    if (plVar11 == (long *)0x0) goto LAB_04336f50;
    (**(code **)(*plVar11 + 0x558))(plVar11,uVar9,*(undefined8 *)(*plVar11 + 0x560));
  }
  lVar3 = *(long *)(DAT_091b4b48 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar4 = *(long *)(DAT_091b4b60 + 0x20);
  lVar3 = **(long **)(lVar3 + 0xb8);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c(lVar4);
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  if (**(long **)(lVar4 + 0xb8) != 0) {
    lVar13 = *(long *)(**(long **)(lVar4 + 0xb8) + 0x48);
    lVar4 = *(long *)(DAT_091b4b60 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    if (**(long **)(lVar4 + 0xb8) != 0) {
      lVar4 = *(long *)(**(long **)(lVar4 + 0xb8) + 0x40);
      uVar9 = *(undefined8 *)(param_1 + 0xf0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Implicit(uVar9,0);
      if ((uVar2 & 1) != 0) {
        plVar10 = *(long **)(param_1 + 0xf0);
        uVar9 = System_Int32__ToString((int *)(param_1 + 0x138),0);
        if (((plVar10 == (long *)0x0) ||
            ((**(code **)(*plVar10 + 0x558))(plVar10,uVar9,*(undefined8 *)(*plVar10 + 0x560)),
            lVar13 == 0)) || (lVar3 == 0)) goto LAB_04336f50;
        plVar10 = *(long **)(param_1 + 0xf0);
        iVar1 = CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__GetItemAmount
                          (lVar3,*(undefined8 *)(lVar13 + 0x18),0);
        if (iVar1 < *(int *)(param_1 + 0x138)) {
          puVar5 = (undefined4 *)(lVar13 + 0x50);
          puVar6 = (undefined4 *)(lVar13 + 0x54);
          puVar7 = (undefined4 *)(lVar13 + 0x58);
          puVar8 = (undefined4 *)(lVar13 + 0x5c);
        }
        else {
          puVar5 = (undefined4 *)(lVar13 + 0x40);
          puVar6 = (undefined4 *)(lVar13 + 0x44);
          puVar7 = (undefined4 *)(lVar13 + 0x48);
          puVar8 = (undefined4 *)(lVar13 + 0x4c);
        }
        if (plVar10 == (long *)0x0) goto LAB_04336f50;
        (**(code **)(*plVar10 + 0x2a8))
                  (*puVar5,*puVar6,*puVar7,*puVar8,plVar10,*(undefined8 *)(*plVar10 + 0x2b0));
      }
      uVar9 = *(undefined8 *)(param_1 + 0x100);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Implicit(uVar9,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      plVar10 = *(long **)(param_1 + 0x100);
      uVar9 = System_Int32__ToString((int *)(param_1 + 0x13c),0);
      if (((plVar10 != (long *)0x0) &&
          ((**(code **)(*plVar10 + 0x558))(plVar10,uVar9,*(undefined8 *)(*plVar10 + 0x560)),
          lVar4 != 0)) && (lVar3 != 0)) {
        plVar10 = *(long **)(param_1 + 0x100);
        iVar1 = CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__GetItemAmount
                          (lVar3,*(undefined8 *)(lVar4 + 0x18),0);
        if (iVar1 < *(int *)(param_1 + 0x13c)) {
          puVar5 = (undefined4 *)(lVar4 + 0x50);
          puVar6 = (undefined4 *)(lVar4 + 0x54);
          puVar7 = (undefined4 *)(lVar4 + 0x58);
          puVar8 = (undefined4 *)(lVar4 + 0x5c);
        }
        else {
          puVar5 = (undefined4 *)(lVar4 + 0x40);
          puVar6 = (undefined4 *)(lVar4 + 0x44);
          puVar7 = (undefined4 *)(lVar4 + 0x48);
          puVar8 = (undefined4 *)(lVar4 + 0x4c);
        }
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x2a8))
                    (*puVar5,*puVar6,*puVar7,*puVar8,plVar10,*(undefined8 *)(*plVar10 + 0x2b0));
          return;
        }
      }
    }
  }
LAB_04336f50:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

