// rea decompile_all
// name: AnhPD.FoodOrder.StationHolderGrid$$Layout
// address: 0x4118424
// body: available
// range: 0x4118424-0x41186e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41186e0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41186e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_StationHolderGrid__Layout(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_44;
  
  if ((DAT_09516249 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b0500);
    FUN_03f5c2a4(&DAT_091b0508);
    FUN_03f5c2a4(&DAT_091b04f8);
    FUN_03f5c2a4(&DAT_091b0520);
    FUN_03f5c2a4(&DAT_0917ccd0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516249 = 1;
  }
  local_44 = 0.0;
  lVar3 = thunk_FUN_03f9944c(DAT_0917ccd0);
  FUN_057e0400(lVar3,DAT_091b04f8);
  lVar9 = *(long *)(param_1 + 0x20);
  local_44 = *(float *)(param_1 + 0x2c) * 0.5;
  if (lVar9 != 0) {
    if ((int)*(ulong *)(lVar9 + 0x18) < 1) {
      fVar15 = 0.0;
      fVar14 = 0.0;
    }
    else {
      fVar14 = 0.0;
      fVar15 = 0.0;
      uVar10 = 0;
      uVar6 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
      do {
        if (uVar6 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar8 = *(long **)(lVar9 + 0x20 + uVar10 * 8);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = UnityEngine_Object__op_Implicit(plVar8,0);
        if (((uVar6 & 1) != 0) &&
           (uVar6 = AnhPD_FoodOrder_StationHolderGrid__ShouldPlace(param_1,plVar8), (uVar6 & 1) != 0
           )) {
          if (plVar8 == (long *)0x0) goto LAB_041186e4;
          iVar2 = AnhPD_FoodOrder_StationHolder__get_ActiveStationCount(plVar8);
          if (0 < iVar2) {
            (**(code **)(*plVar8 + 0x198))(plVar8,*(undefined8 *)(*plVar8 + 0x1a0));
            fVar11 = (float)(**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
            if (0.0 < fVar11) {
              if (lVar3 == 0) goto LAB_041186e4;
              uVar5 = *(uint *)(lVar3 + 0x18);
              if (0 < (int)uVar5) {
                fVar12 = *(float *)(param_1 + 0x28) -
                         (*(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x30));
                fVar13 = 0.0;
                if (0.0 <= fVar12) {
                  fVar13 = fVar12;
                }
                if (fVar13 < fVar15 + fVar11) {
                  AnhPD_FoodOrder_StationHolderGrid__PlaceRow(fVar15,fVar14,param_1,lVar3,&local_44)
                  ;
                  iVar2 = *(int *)(lVar3 + 0x18);
                  fVar14 = 0.0;
                  *(undefined4 *)(lVar3 + 0x18) = 0;
                  *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                  if (iVar2 < 1) {
                    fVar15 = 0.0;
                    uVar5 = 0;
                  }
                  else {
                    System_Array__Clear(*(undefined8 *)(lVar3 + 0x10),0,iVar2,0);
                    fVar15 = 0.0;
                    uVar5 = *(uint *)(lVar3 + 0x18);
                  }
                }
              }
              lVar1 = DAT_091b0500;
              lVar7 = *(long *)(lVar3 + 0x10);
              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
              if (lVar7 == 0) goto LAB_041186e4;
              if (uVar5 < *(uint *)(lVar7 + 0x18)) {
                *(uint *)(lVar3 + 0x18) = uVar5 + 1;
                puVar4 = (undefined8 *)(lVar7 + (long)(int)uVar5 * 8 + 0x20);
                *puVar4 = plVar8;
                thunk_FUN_03f5d7b8(puVar4,plVar8);
              }
              else {
                FUN_057e0c68(lVar3,plVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar1 + 0x20) + 0xc0) + 0x70));
              }
              fVar15 = fVar11 + fVar15;
              fVar11 = (float)(**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
              if (fVar14 <= fVar11) {
                fVar14 = fVar11;
              }
            }
          }
        }
        uVar6 = (ulong)*(uint *)(lVar9 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((long)uVar10 < (long)(int)*(uint *)(lVar9 + 0x18));
    }
    AnhPD_FoodOrder_StationHolderGrid__PlaceRow(fVar15,fVar14,param_1,lVar3,&local_44);
    return;
  }
LAB_041186e4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

