// rea decompile_all
// name: Utilities.RandomUtility$$GetWeightedRandomIndexes
// address: 0x45096e8
// body: available
// range: 0x45096e8-0x4509a2f inclusive
// range: 0x4509a68-0x4509a97 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4509a90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4509a94 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Utilities_RandomUtility__GetWeightedRandomIndexes(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  
  if ((DAT_095184ef & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a42e0);
    FUN_03f5c2a4(&DAT_091a42e8);
    FUN_03f5c2a4(&DAT_091a42f0);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091affb8);
    FUN_03f5c2a4(&DAT_091affc0);
    FUN_03f5c2a4(&DAT_091adce8);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_091aff98);
    FUN_03f5c2a4(&DAT_091affd8);
    FUN_03f5c2a4(&DAT_091add20);
    FUN_03f5c2a4(&DAT_091affe0);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_0917cbd0);
    DAT_095184ef = 1;
  }
  local_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_80 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    if ((int)param_2 <= (int)*(uint *)(param_1 + 0x18)) {
      uVar1 = param_2;
    }
    lVar4 = FUN_03f5c394(DAT_091801b8,(ulong)uVar1);
    lVar5 = thunk_FUN_03f9944c(DAT_0917c520);
    FUN_05796918(lVar5,DAT_091adc70);
    lVar6 = thunk_FUN_03f9944c(DAT_0917cbd0);
    FUN_05862eac(lVar6,param_1,DAT_091aff98);
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    if (0 < (int)uVar8) {
      if (lVar5 == 0) goto LAB_04509a90;
      iVar11 = 0;
      lVar9 = DAT_091adc88;
      do {
        lVar10 = *(long *)(lVar5 + 0x10);
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_04509a90;
        uVar2 = *(uint *)(lVar5 + 0x18);
        if (uVar2 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar2 + 1;
          *(int *)(lVar10 + (long)(int)uVar2 * 4 + 0x20) = iVar11;
        }
        else {
          FUN_057971a8(lVar5,iVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          uVar8 = *(undefined8 *)(param_1 + 0x18);
          lVar9 = DAT_091adc88;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < (int)uVar8);
    }
    if (0 < (int)uVar1) {
      if (lVar6 == 0) goto LAB_04509a90;
      uVar12 = 0;
      do {
        FUN_058641d0(&local_a8,lVar6,DAT_091affb8);
        local_90 = local_a8;
        fVar14 = 0.0;
        local_a8 = 0;
        puStack_88 = puStack_a0;
        local_80 = local_98;
        puStack_a0 = &local_90;
        while (uVar7 = FUN_071e4ae0(&local_90,DAT_091a42e8), (uVar7 & 1) != 0) {
          fVar14 = fVar14 + (float)local_80;
        }
        FUN_071e4adc(&local_90,DAT_091a42e0);
        fVar13 = (float)UnityEngine_Random__get_value(0);
        if (0 < *(int *)(lVar6 + 0x18)) {
          fVar14 = fVar14 * fVar13;
          iVar11 = 0;
          do {
            fVar13 = (float)FUN_05863308(lVar6,iVar11,DAT_091affe0);
            if (fVar14 <= fVar13) {
              if ((lVar5 == 0) || (uVar3 = FUN_05796eb0(lVar5,iVar11,DAT_091add20), lVar4 == 0))
              goto LAB_04509a90;
              if (*(uint *)(lVar4 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              *(undefined4 *)(lVar4 + uVar12 * 4 + 0x20) = uVar3;
              FUN_05798a08(lVar5,iVar11,DAT_091adce8);
              FUN_05864e60(lVar6,iVar11,DAT_091affc0);
              break;
            }
            fVar13 = (float)FUN_05863308(lVar6,iVar11,DAT_091affe0);
            fVar14 = fVar14 - fVar13;
            iVar11 = iVar11 + 1;
          } while (iVar11 < *(int *)(lVar6 + 0x18));
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar1);
    }
    return lVar4;
  }
LAB_04509a90:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

