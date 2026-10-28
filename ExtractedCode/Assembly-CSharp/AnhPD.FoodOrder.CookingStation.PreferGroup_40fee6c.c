// rea decompile_all
// name: AnhPD.FoodOrder.CookingStation$$PreferGroup
// address: 0x40fee6c
// body: available
// range: 0x40fee6c-0x40ff053 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40ff050 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong AnhPD_FoodOrder_CookingStation__PreferGroup(long *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  
  uVar8 = (ulong)param_2;
  if ((DAT_09516163 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182e58);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516163 = 1;
  }
  uVar7 = (ulong)param_3;
  if ((-1 < (int)param_2) && (uVar7 = uVar8, **(char **)(DAT_09182e58 + 0xb8) == '\0')) {
    uVar9 = **(undefined8 **)(DAT_091881a0 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = UnityEngine_Object__op_Implicit(uVar9,0);
    if ((uVar6 & 1) != 0) {
      if (**(long **)(DAT_091881a0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar10 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x110);
      if (lVar10 != 0) {
        uVar7 = AnhPD_FoodOrder_LevelInfo__InboundGroupOf(lVar10,param_1,0);
        if (((uint)uVar7 != param_3) && ((uint)uVar7 != param_2)) {
          **(undefined1 **)(DAT_09182e58 + 0xb8) = 1;
          uVar9 = (**(code **)(*param_1 + 0x228))
                            (param_1,(ulong)param_3,*(undefined8 *)(*param_1 + 0x230));
          iVar2 = AnhPD_FoodOrder_LevelInfo__StationResultDemand(lVar10,uVar9,0);
          uVar9 = (**(code **)(*param_1 + 0x228))(param_1,uVar8,*(undefined8 *)(*param_1 + 0x230));
          iVar3 = AnhPD_FoodOrder_LevelInfo__StationResultDemand(lVar10,uVar9,0);
          if (iVar2 < 1) {
            iVar4 = 0;
          }
          else {
            iVar4 = (**(code **)(*param_1 + 0x238))
                              (param_1,param_3,*(undefined8 *)(*param_1 + 0x240));
          }
          if (iVar3 < 1) {
            iVar5 = 0;
          }
          else {
            iVar5 = (**(code **)(*param_1 + 0x238))(param_1,uVar8,*(undefined8 *)(*param_1 + 0x240))
            ;
          }
          uVar1 = param_3;
          if (iVar2 <= iVar3) {
            uVar1 = param_2;
          }
          if (iVar4 == iVar5 || iVar4 < iVar5) {
            param_3 = param_2;
          }
          if (iVar4 != iVar5) {
            uVar1 = param_3;
          }
          **(undefined1 **)(DAT_09182e58 + 0xb8) = 0;
          uVar7 = (ulong)uVar1;
        }
      }
    }
  }
  return uVar7;
}

