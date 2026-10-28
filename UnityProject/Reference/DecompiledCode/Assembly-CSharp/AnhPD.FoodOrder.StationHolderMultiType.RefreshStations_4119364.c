// rea decompile_all
// name: AnhPD.FoodOrder.StationHolderMultiType$$RefreshStations
// address: 0x4119364
// body: available
// range: 0x4119364-0x41196bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x411969c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41196a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41196a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41196a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41196ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41196b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41196b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_StationHolderMultiType__RefreshStations(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  long local_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  long local_80;
  
  if ((DAT_09516250 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a5978);
    FUN_03f5c2a4(&DAT_091a5980);
    FUN_03f5c2a4(&DAT_091a5988);
    FUN_03f5c2a4(&DAT_091b3c48);
    FUN_03f5c2a4(&DAT_091b3c50);
    FUN_03f5c2a4(&DAT_091b3c40);
    FUN_03f5c2a4(&DAT_091b3c58);
    FUN_03f5c2a4(&DAT_091b3c60);
    FUN_03f5c2a4(&DAT_0917d7c8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516250 = 1;
  }
  local_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_80 = 0;
  lVar4 = thunk_FUN_03f9944c(DAT_0917d7c8);
  FUN_057e0400(lVar4,DAT_091b3c40);
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_057e185c(&local_a8,*(long *)(param_1 + 0x38),DAT_091b3c50);
    fVar11 = 0.0;
    local_80 = local_98;
    puStack_88 = puStack_a0;
    local_90 = local_a8;
    local_a8 = 0;
    puStack_a0 = &local_90;
    while (uVar5 = FUN_071bd28c(&local_90,DAT_091a5980), lVar3 = local_80, (uVar5 & 1) != 0) {
      if (local_80 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)(local_80 + 0x10);
      }
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Equality(uVar9,0,0);
      if ((uVar5 & 1) == 0) {
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(lVar3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = UnityEngine_Component__get_gameObject(*(long *)(lVar3 + 0x10),0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar5 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
        lVar6 = DAT_091b3c48;
        if ((uVar5 & 1) != 0) {
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar8 = *(long *)(lVar4 + 0x10);
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            plVar7 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
            *plVar7 = lVar3;
            thunk_FUN_03f5d7b8(plVar7,lVar3);
          }
          else {
            FUN_057e0c68(lVar4,lVar3,
                         *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
          fVar11 = fVar11 + *(float *)(lVar3 + 0x1c);
        }
      }
    }
    FUN_071bd288(&local_90,DAT_091a5978);
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x18) != 0) {
        iVar2 = *(int *)(lVar4 + 0x18) + -1;
        if (iVar2 == 0) {
          lVar4 = FUN_057e0998(lVar4,0,DAT_091b3c60);
          if (lVar4 == 0) goto LAB_041196ac;
          fVar11 = 1.0;
          if (0.0 < *(float *)(lVar4 + 0x18)) {
            fVar11 = *(float *)(param_1 + 0x30) / *(float *)(lVar4 + 0x18);
          }
          AnhPD_FoodOrder_StationHolderMultiType__Place
                    (0,fVar11,lVar4,*(undefined8 *)(lVar4 + 0x10));
        }
        else {
          fVar10 = *(float *)(param_1 + 0x34) - fVar11;
          fVar12 = 0.0;
          if (0.0 <= fVar10) {
            fVar12 = fVar10;
          }
          fVar10 = (float)iVar2;
          fVar12 = fVar12 / fVar10;
          fVar11 = (fVar11 + fVar12 * fVar10) * 0.5;
          FUN_057e185c(&local_a8,lVar4,DAT_091b3c50);
          local_80 = local_98;
          puStack_88 = puStack_a0;
          local_90 = local_a8;
          local_a8 = 0;
          puStack_a0 = &local_90;
          while (uVar5 = FUN_071bd28c(&local_90,DAT_091a5980), lVar4 = local_80, (uVar5 & 1) != 0) {
            if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            AnhPD_FoodOrder_StationHolderMultiType__Place
                      (fVar11 + *(float *)(local_80 + 0x1c) * -0.5,0x3f800000,uVar5,
                       *(undefined8 *)(local_80 + 0x10));
            fVar11 = fVar11 - (fVar12 + *(float *)(lVar4 + 0x1c));
          }
          FUN_071bd288(&local_90,DAT_091a5978);
        }
      }
      return;
    }
  }
LAB_041196ac:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

