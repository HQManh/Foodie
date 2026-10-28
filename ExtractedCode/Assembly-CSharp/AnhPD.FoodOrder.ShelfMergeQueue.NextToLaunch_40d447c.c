// rea decompile_all
// name: AnhPD.FoodOrder.ShelfMergeQueue$$NextToLaunch
// address: 0x40d447c
// body: available
// range: 0x40d447c-0x40d46b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40d46ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40d46b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_ShelfMergeQueue__NextToLaunch(float param_1,long param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  
  if ((DAT_09515ff5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a58a0);
    FUN_03f5c2a4(&DAT_091a58a8);
    FUN_03f5c2a4(&DAT_091a58b0);
    FUN_03f5c2a4(&DAT_091b3a30);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515ff5 = 1;
  }
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(param_3,0);
  if ((uVar2 & 1) == 0) {
    bVar1 = 1;
  }
  else {
    if (param_3 == 0) goto LAB_040d46b0;
    bVar1 = AnhPD_FoodOrder_ServePlate__get_IsEmpty(param_3,0);
    bVar1 = bVar1 ^ 1;
  }
  if (*(long *)(param_2 + 0x10) != 0) {
    FUN_057e185c(&local_a8,*(long *)(param_2 + 0x10),DAT_091b3a30);
    bVar6 = true;
    local_80 = local_98;
    uStack_88 = puStack_a0;
    local_90 = local_a8;
    local_a8 = 0;
    lVar4 = 0;
    fVar8 = -3.4028235e+38;
    puStack_a0 = &local_90;
    while (uVar2 = FUN_071bd28c(&local_90,DAT_091a58a8), lVar3 = local_80, (uVar2 & 1) != 0) {
      if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar5 = *(undefined8 *)(local_80 + 0x10);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar5,param_3,0);
      if ((uVar2 & 1) == 0) {
        if (bVar6) {
          bVar1 = *(char *)(lVar3 + 0x34) != '\0' || (bVar1 & 1) != 0;
        }
        if (*(char *)(lVar3 + 0x2c) == '\0') {
          bVar6 = false;
          if ((lVar4 == 0) && (bVar6 = false, lVar4 = lVar3, *(char *)(lVar3 + 0x36) != '\0')) {
            lVar4 = 0;
          }
        }
        else {
          bVar6 = false;
          if (fVar8 <= *(float *)(lVar3 + 0x30)) {
            fVar8 = *(float *)(lVar3 + 0x30);
          }
        }
      }
    }
    FUN_071bd288(&local_90,DAT_091a58a0);
    if ((lVar4 == 0) ||
       (lVar3 = AnhPD_FoodOrder_ShelfMergeQueue__Oldest(param_2,param_3),
       lVar4 != lVar3 && (bVar1 & 1) == 0)) {
      lVar4 = 0;
    }
    else if ((-3.4028235e+38 < fVar8) &&
            (fVar7 = (float)UnityEngine_Time__get_time(0), fVar7 < fVar8 + param_1)) {
      return 0;
    }
    return lVar4;
  }
LAB_040d46b0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

