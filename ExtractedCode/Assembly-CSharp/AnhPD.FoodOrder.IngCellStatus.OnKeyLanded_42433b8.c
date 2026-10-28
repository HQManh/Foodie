// rea decompile_all
// name: AnhPD.FoodOrder.IngCellStatus$$OnKeyLanded
// address: 0x42433b8
// body: available
// range: 0x42433b8-0x424356f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4243550 to 0x42409ac AnhPD.FoodOrder.IngCellDisplay$$PlayColorLockUnlock (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4243568 to 0x4243578 AnhPD.FoodOrder.IngCellStatus$$UnlockColorCell (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x424356c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngCellStatus__OnKeyLanded(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((DAT_09516e4a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091eb930);
    FUN_03f5c2a4(&DAT_09191720);
    DAT_09516e4a = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_09191720);
  System_Object___ctor(lVar3,0);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x10),param_1);
    plVar8 = (long *)(lVar3 + 0x18);
    *plVar8 = param_2;
    thunk_FUN_03f5d7b8(plVar8,param_2);
    lVar6 = *plVar8;
    if (lVar6 != 0) {
      lVar7 = *(long *)(lVar6 + 0x20);
      iVar2 = *(int *)(lVar6 + 0x1c) + -1;
      *(int *)(lVar6 + 0x1c) = iVar2;
      if (0 < iVar2) {
        if (lVar7 != 0) {
          uVar1 = *(undefined4 *)(lVar6 + 0x14);
          uStack_40 = 0;
          local_48 = CONCAT44(iVar2,4);
          local_38 = 0;
          thunk_FUN_03f5d7b8(&uStack_40,0);
          local_38 = CONCAT44(local_38._4_4_,uVar1);
          uStack_58 = uStack_40;
          local_60 = local_48;
          local_50 = local_38;
          AnhPD_FoodOrder_IngCellDisplay__Apply(lVar7,&local_60);
        }
        return;
      }
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Implicit(lVar7,0);
      if ((uVar4 & 1) == 0) {
        AnhPD_FoodOrder_IngCellStatus__UnlockColorCell(param_1);
        return;
      }
      if (*plVar8 != 0) {
        lVar6 = *(long *)(*plVar8 + 0x20);
        uVar5 = thunk_FUN_03f9944c(DAT_09180e78);
        System_Action___ctor(uVar5,lVar3,DAT_091eb930,0);
        if (lVar6 != 0) {
          AnhPD_FoodOrder_IngCellDisplay__PlayColorLockUnlock(lVar6,uVar5);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

