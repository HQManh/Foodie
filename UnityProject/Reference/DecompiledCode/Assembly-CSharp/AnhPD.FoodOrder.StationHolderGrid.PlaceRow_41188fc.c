// rea decompile_all
// name: AnhPD.FoodOrder.StationHolderGrid$$PlaceRow
// address: 0x41188fc
// body: available
// range: 0x41188fc-0x4118b4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4118b38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4118b3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4118b40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4118b44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4118b48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_StationHolderGrid__PlaceRow
               (float param_1,float param_2,long param_3,long param_4,float *param_5)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long *local_80;
  
  if ((DAT_0951624b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4550);
    FUN_03f5c2a4(&DAT_091a4558);
    FUN_03f5c2a4(&DAT_091a4560);
    FUN_03f5c2a4(&DAT_091b0518);
    FUN_03f5c2a4(&DAT_091b0520);
    DAT_0951624b = 1;
  }
  local_90 = 0;
  uStack_88 = 0;
  local_80 = (long *)0x0;
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar1 = *(int *)(param_4 + 0x18);
  if (iVar1 != 0) {
    iVar2 = iVar1 + -1;
    if (iVar2 == 0 || iVar1 < 1) {
      fVar8 = 0.0;
    }
    else {
      fVar8 = *(float *)(param_3 + 0x28) - (*(float *)(param_3 + 0x30) + *(float *)(param_3 + 0x30))
      ;
      fVar12 = 0.0;
      if (0.0 <= fVar8) {
        fVar12 = fVar8;
      }
      fVar8 = 0.0;
      if (0.0 <= fVar12 - param_1) {
        fVar8 = fVar12 - param_1;
      }
      fVar8 = fVar8 / (float)iVar2;
    }
    fVar12 = *(float *)(param_3 + 0x34);
    bVar4 = true;
    bVar5 = false;
    if (fVar12 <= fVar8) {
      bVar4 = false;
      bVar5 = true;
      if (!NAN(fVar12)) {
        bVar4 = fVar12 < 0.0;
        bVar5 = false;
      }
    }
    if (bVar4 == bVar5) {
      fVar8 = fVar12;
    }
    fVar12 = *param_5 + param_2 * -0.5;
    fVar14 = (fVar8 * (float)iVar2 + param_1) * -0.5;
    FUN_057e185c(&local_a8,param_4,DAT_091b0518);
    local_80 = local_98;
    uStack_88 = puStack_a0;
    local_90 = local_a8;
    local_a8 = 0;
    puStack_a0 = &local_90;
    while (uVar6 = FUN_071bd28c(&local_90,DAT_091a4558), plVar3 = local_80, (uVar6 & 1) != 0) {
      if (local_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      fVar9 = (float)(**(code **)(*local_80 + 0x178))(local_80,*(undefined8 *)(*local_80 + 0x180));
      lVar7 = UnityEngine_Component__get_transform(param_3,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar13 = 0;
      fVar11 = fVar12;
      uVar10 = UnityEngine_Transform__TransformPoint(fVar14 + fVar9 * 0.5,fVar12,0,lVar7,0);
      lVar7 = UnityEngine_Component__get_transform(plVar3,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_Transform__get_position(lVar7,0);
      lVar7 = UnityEngine_Component__get_transform(plVar3,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_Transform__set_position(uVar10,fVar11,uVar13,lVar7,0);
      fVar14 = fVar14 + fVar8 + fVar9;
    }
    FUN_071bd288(&local_90,DAT_091a4550);
    *param_5 = *param_5 - param_2;
  }
  return;
}

