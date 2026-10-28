// rea decompile_all
// name: AnhPD.FoodOrder.CameraMatchScreen$$Apply
// address: 0x412b1b8
// body: available
// range: 0x412b1b8-0x412b427 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x412b420 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x412b424 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CameraMatchScreen__Apply(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_64;
  undefined8 local_18;
  
  if ((DAT_09516306 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180528);
    DAT_09516306 = 1;
  }
  local_18 = 0;
  local_64 = 0.0;
  uVar1 = AnhPD_FoodOrder_CameraMatchScreen__EnsureCamera(param_1);
  if (((uVar1 & 1) == 0) ||
     (uVar1 = AnhPD_FoodOrder_CameraMatchScreen__TryGetZone
                        (uVar1,(long)&local_18 + 4,&local_18,&local_64), (uVar1 & 1) == 0)) {
    return;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    UnityEngine_Camera__set_orthographic(*(long *)(param_1 + 0x38),1,0);
    fVar12 = local_64;
    fVar17 = *(float *)(param_1 + 0x20);
    fVar10 = (float)local_18;
    fVar6 = (float)AnhPD_FoodOrder_CameraMatchScreen__get_NotchTopFraction();
    fVar7 = (float)AnhPD_FoodOrder_CameraMatchScreen__get_NotchBottomFraction();
    fVar15 = *(float *)(param_1 + 0x30);
    fVar8 = (float)AnhPD_FoodOrder_CameraMatchScreen__get_CanvasHeight(param_1);
    fVar16 = *(float *)(param_1 + 0x34);
    fVar9 = (float)AnhPD_FoodOrder_CameraMatchScreen__get_CanvasHeight(param_1);
    lVar2 = FUN_03f5c394(DAT_09180528,3);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) == 0) {
LAB_0412b424:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      fVar15 = fVar15 / fVar8;
      lVar3 = *(long *)(param_1 + 0x38);
      fVar13 = (fVar12 - fVar10) * 0.5;
      fVar16 = fVar16 / fVar9;
      fVar8 = (((1.0 - fVar6) - fVar7) - fVar15) - fVar16;
      fVar10 = 0.05;
      if (0.05 <= fVar8) {
        fVar10 = fVar8;
      }
      *(float *)(lVar2 + 0x20) = fVar13 / fVar10;
      if (lVar3 != 0) {
        fVar10 = (float)UnityEngine_Camera__get_aspect(lVar3,0);
        uVar4 = (uint)*(ulong *)(lVar2 + 0x18);
        if ((uVar4 < 2) || (*(float *)(lVar2 + 0x24) = (fVar17 * 0.5) / fVar10, uVar4 == 2))
        goto LAB_0412b424;
        fVar10 = *(float *)(lVar2 + 0x20);
        *(undefined4 *)(lVar2 + 0x28) = 0x38d1b717;
        if (1 < (int)uVar4) {
          lVar3 = (*(ulong *)(lVar2 + 0x18) & 0xffffffff) - 1;
          pfVar5 = (float *)(lVar2 + 0x24);
          do {
            fVar8 = *pfVar5;
            if (*pfVar5 <= fVar10) {
              fVar8 = fVar10;
            }
            fVar10 = fVar8;
            lVar3 = lVar3 + -1;
            pfVar5 = pfVar5 + 1;
          } while (lVar3 != 0);
        }
        if (*(long *)(param_1 + 0x38) != 0) {
          fVar8 = (float)local_18;
          UnityEngine_Camera__set_orthographicSize(fVar10,*(long *)(param_1 + 0x38),0);
          lVar2 = UnityEngine_Component__get_transform(param_1,0);
          uVar11 = local_18._4_4_;
          lVar3 = UnityEngine_Component__get_transform(param_1,0);
          if ((lVar3 != 0) && (UnityEngine_Transform__get_position(lVar3,0), lVar2 != 0)) {
            uVar14 = 0x3f000000;
            fVar12 = (fVar12 + fVar15 * (fVar10 + fVar10) + (fVar8 - fVar16 * (fVar10 + fVar10))) *
                     0.5 - (fVar7 - fVar6) * fVar10;
            UnityEngine_Transform__set_position(uVar11,lVar2,0);
            uVar1 = UnityEngine_Screen__get_width(0);
            lVar2 = UnityEngine_Screen__get_height(0);
            *(ulong *)(param_1 + 0x40) = uVar1 & 0xffffffff | lVar2 << 0x20;
            uVar11 = UnityEngine_Screen__get_safeArea(0);
            *(undefined4 *)(param_1 + 0x48) = uVar11;
            *(float *)(param_1 + 0x4c) = fVar12;
            *(float *)(param_1 + 0x50) = fVar13;
            *(undefined4 *)(param_1 + 0x54) = uVar14;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

