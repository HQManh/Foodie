// rea decompile_all
// name: AnhPD.FoodOrder.IngCellFinder$$AddOwed
// address: 0x4233f24
// body: available
// range: 0x4233f24-0x423407f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x423407c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngCellFinder__AddOwed(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_09516e2a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aac00);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bee50);
    DAT_09516e2a = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(param_2,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (param_2 != (long *)0x0) {
    lVar6 = *(long *)(param_1 + 0x40);
    uVar4 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    FUN_066ee688(&local_68,param_2,uVar4,*(undefined4 *)((long)param_2 + 0x94),DAT_091bee50);
    lVar2 = DAT_091aac00;
    if (lVar6 != 0) {
      lVar5 = *(long *)(lVar6 + 0x10);
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          lVar5 = lVar5 + (long)(int)uVar1 * 0x18;
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar5 + 0x30) = local_58;
          *(undefined8 *)(lVar5 + 0x28) = uStack_60;
          *(undefined8 *)(lVar5 + 0x20) = local_68;
          thunk_FUN_03f5d7b8(lVar5 + 0x20,0);
          return;
        }
        uStack_48 = uStack_60;
        local_50 = local_68;
        local_40 = local_58;
        FUN_05705448(lVar6,&local_50,
                     *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

