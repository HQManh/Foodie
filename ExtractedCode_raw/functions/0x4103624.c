// rea decompile_all
// name: AnhPD.FoodOrder.CookingStationSharedFirst$$TryGetRegroupVector
// address: 0x4103624
// body: available
// range: 0x4103624-0x41037fb inclusive
// range: 0x4103830-0x410386f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4103868 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x410386c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AnhPD_FoodOrder_CookingStationSharedFirst__TryGetRegroupVector
               (long *param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  
  if ((DAT_09516180 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182e60);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516180 = 1;
  }
  *param_3 = -1;
  uVar3 = AnhPD_FoodOrder_CookingStationSharedFirst__IsShared(param_1,param_2);
  if (((uVar3 & 1) != 0) ||
     (uVar1 = AnhPD_FoodOrder_CookingStationSharedFirst__InteractingGroup(param_1), (int)uVar1 < 0))
  {
    return 0;
  }
  uVar6 = (ulong)uVar1;
  uVar3 = AnhPD_FoodOrder_CookingStationSharedFirst__HoldsOnlyShared(param_1,uVar6);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  uVar7 = **(undefined8 **)(DAT_091881a0 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar7,0);
  lVar8 = 0;
  if ((uVar3 & 1) != 0) {
    if (**(long **)(DAT_091881a0 + 0xb8) == 0) goto LAB_04103868;
    lVar8 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x110);
  }
  lVar5 = param_1[0xb];
  if (lVar5 != 0) {
    uVar3 = 0;
    iVar9 = -0x80000000;
    do {
      if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar3) {
        if ((int)*param_3 < 0) {
          return 0;
        }
        return ~*(uint *)((long)param_3 + 4) >> 0x1f;
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      if (uVar6 != uVar3) {
        lVar5 = *(long *)(lVar5 + uVar3 * 8 + 0x20);
        if (lVar5 == 0) break;
        if (((*(char *)(lVar5 + 0x39) == '\0') &&
            (uVar1 = AnhPD_FoodOrder_CookingStationSharedFirst__FreeSlotOf(lVar5,param_2),
            -1 < (int)uVar1)) &&
           (uVar4 = AnhPD_FoodOrder_CookingStationSharedFirst__CanHoldMoved(param_1,lVar5,uVar6),
           (uVar4 & 1) != 0)) {
          if ((lVar8 == 0) || (**(char **)(DAT_09182e60 + 0xb8) != '\0')) {
            iVar2 = 0;
          }
          else {
            **(char **)(DAT_09182e60 + 0xb8) = '\x01';
            uVar7 = (**(code **)(*param_1 + 0x228))
                              (param_1,uVar3 & 0xffffffff,*(undefined8 *)(*param_1 + 0x230));
            iVar2 = AnhPD_FoodOrder_LevelInfo__StationResultDemand(lVar8,uVar7,0);
            **(undefined1 **)(DAT_09182e60 + 0xb8) = 0;
          }
          if (iVar9 < iVar2) {
            *param_3 = uVar3 + ((ulong)uVar1 << 0x20);
            iVar9 = iVar2;
          }
        }
      }
      lVar5 = param_1[0xb];
      uVar3 = uVar3 + 1;
    } while (lVar5 != 0);
  }
LAB_04103868:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

