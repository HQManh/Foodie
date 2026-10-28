// rea decompile_all
// name: AnhPD.FoodOrder.IngCellStatus$$TryDrawAndLock
// address: 0x4242e78
// body: available
// range: 0x4242e78-0x42430a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4243094 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4243098 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42430a4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
AnhPD_FoodOrder_IngCellStatus__TryDrawAndLock
          (long param_1,int param_2,undefined8 *param_3,long *param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 local_58;
  int local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_09516e44 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09184ed8);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09226af0);
    DAT_09516e44 = 1;
  }
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) goto LAB_04243094;
  iVar1 = *(int *)(lVar7 + 0x20);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = param_2 / iVar1;
  }
  lVar7 = AnhPD_FoodOrder_IngCellStatus__GetDisplay
                    (param_1,CONCAT44(*(int *)(lVar7 + 0x24) + ~uVar2,param_2 - uVar2 * iVar1));
  *param_4 = lVar7;
  thunk_FUN_03f5d7b8(param_4,lVar7);
  lVar7 = *param_4;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(lVar7,0);
  if ((uVar3 & 1) != 0) {
    if (*param_4 == 0) goto LAB_04243094;
    uStack_48 = param_3[1];
    local_50 = *param_3;
    local_40 = param_3[2];
    uVar3 = AnhPD_FoodOrder_IngCellDisplay__Apply(*param_4,&local_50);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        AnhPD_FoodOrder_IngGridLayout__SetCellLocked(*(long *)(param_1 + 0x10),param_2,1);
        return 1;
      }
      goto LAB_04243094;
    }
  }
  plVar4 = (long *)FUN_03f5c394(DAT_09180318,2);
  local_54 = param_2;
  lVar7 = FUN_03f5c42c(DAT_09535420,&local_54);
  if (plVar4 == (long *)0x0) {
LAB_04243094:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((lVar7 != 0) &&
     (lVar5 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
LAB_0424309c:
    uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar6,0);
  }
  if ((int)plVar4[3] != 0) {
    plVar4[4] = lVar7;
    thunk_FUN_03f5d7b8(plVar4 + 4,lVar7);
    local_58 = *(undefined4 *)param_3;
    lVar7 = FUN_03f5c42c(DAT_09184ed8,&local_58);
    if ((lVar7 != 0) &&
       (lVar5 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
    goto LAB_0424309c;
    if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
      plVar4[5] = lVar7;
      thunk_FUN_03f5d7b8(plVar4 + 5,lVar7);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogWarningFormat(DAT_09226af0,plVar4,0);
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

