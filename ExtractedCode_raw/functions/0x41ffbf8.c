// rea decompile_all
// name: AnhPD.FoodOrder.StackModeService$$ShuffleStack
// address: 0x41ffbf8
// body: available
// range: 0x41ffbf8-0x41ffd93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41ffd8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41ffd90 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_StackModeService__ShuffleStack(float param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  if ((DAT_09516be7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b0568);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_091b0610);
    FUN_03f5c2a4(&DAT_0917cce8);
    DAT_09516be7 = 1;
  }
  lVar5 = param_2;
  if (0.0 < param_1) {
    if (param_2 == 0) {
LAB_041ffd8c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (1 < *(int *)(param_2 + 0x18)) {
      lVar4 = Utilities_RandomUtility__GetDisplacementalShuffledIndexArray
                        (param_1,*(int *)(param_2 + 0x18),0);
      uVar1 = *(undefined4 *)(param_2 + 0x18);
      lVar5 = thunk_FUN_03f9944c(DAT_0917cce8);
      FUN_057e0478(lVar5,uVar1,DAT_091b0568);
      if (lVar4 == 0) goto LAB_041ffd8c;
      if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
        uVar9 = 0;
        uVar7 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
        do {
          if (uVar7 <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          uVar6 = FUN_057e0998(param_2,*(undefined4 *)(lVar4 + 0x20 + uVar9 * 4),DAT_091b0610);
          lVar3 = DAT_091b0570;
          if (lVar5 == 0) goto LAB_041ffd8c;
          lVar8 = *(long *)(lVar5 + 0x10);
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_041ffd8c;
          uVar2 = *(uint *)(lVar5 + 0x18);
          if (uVar2 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = uVar6;
            thunk_FUN_03f5d7b8();
          }
          else {
            FUN_057e0c68(lVar5,uVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
          uVar7 = (ulong)*(uint *)(lVar4 + 0x18);
          uVar9 = uVar9 + 1;
        } while ((long)uVar9 < (long)(int)*(uint *)(lVar4 + 0x18));
      }
    }
  }
  return lVar5;
}

