// rea decompile_all
// name: Utilities.CreateWall2DAroundScreen$$UpdateWall
// address: 0x450dd6c
// body: available
// range: 0x450dd6c-0x450e113 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x450e10c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x450e110 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_CreateWall2DAroundScreen__UpdateWall(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if ((DAT_09518513 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180978);
    FUN_03f5c2a4(&DAT_09173850);
    DAT_09518513 = 1;
  }
  lVar4 = UnityEngine_Camera__get_main(0);
  iVar2 = UnityEngine_Screen__get_height(0);
  if (lVar4 != 0) {
    fVar15 = (float)iVar2;
    fVar10 = (float)UnityEngine_Camera__ScreenToWorldPoint(0,fVar15,0,lVar4,0);
    lVar4 = UnityEngine_Camera__get_main(0);
    iVar2 = UnityEngine_Screen__get_width(0);
    iVar3 = UnityEngine_Screen__get_height(0);
    if (lVar4 != 0) {
      fVar16 = (float)iVar3;
      fVar11 = (float)UnityEngine_Camera__ScreenToWorldPoint((float)iVar2,fVar16,0,lVar4,0);
      lVar4 = UnityEngine_Camera__get_main(0);
      if (lVar4 != 0) {
        fVar17 = 0.0;
        fVar12 = (float)UnityEngine_Camera__ScreenToWorldPoint(0,0,0,lVar4,0);
        lVar4 = UnityEngine_Camera__get_main(0);
        iVar2 = UnityEngine_Screen__get_width(0);
        if (lVar4 != 0) {
          fVar18 = 0.0;
          fVar13 = (float)UnityEngine_Camera__ScreenToWorldPoint((float)iVar2,0,0,lVar4,0);
          uVar5 = DAT_09173850;
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = System_Type__GetTypeFromHandle(uVar5,0);
          if (*(int *)(DAT_09535470 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09535470);
          }
          uVar5 = System_Enum__GetValues(uVar5,0);
          lVar4 = thunk_FUN_03f99350(uVar5,DAT_09180978);
          if (lVar4 != 0) {
            if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
              uVar9 = 0;
              uVar7 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
              do {
                if (uVar7 <= uVar9) {
LAB_0450e110:
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                uVar1 = *(uint *)(lVar4 + 0x20 + uVar9 * 4);
                uVar7 = EnumMaskUtility__IsEnumPositive(*(undefined4 *)(param_1 + 0x34),uVar1,0);
                if ((uVar7 & 1) != 0) {
                  lVar8 = *(long *)(param_1 + 0x38);
                  if (lVar8 == 0) goto LAB_0450e10c;
                  if (*(uint *)(lVar8 + 0x18) <= uVar1) goto LAB_0450e110;
                  lVar8 = *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                  if (lVar8 == 0) goto LAB_0450e10c;
                  lVar6 = UnityEngine_Component__get_transform(lVar8,0);
                  if ((int)uVar1 < 2) {
                    if (uVar1 == 0) {
                      if (lVar6 == 0) goto LAB_0450e10c;
                      UnityEngine_Transform__set_position
                                ((fVar10 + fVar11) * 0.5,
                                 *(float *)(param_1 + 0x30) +
                                 fVar16 + *(float *)(param_1 + 0x28) * 0.5,0,lVar6,0);
                      fVar19 = *(float *)(param_1 + 0x28);
                      fVar14 = (fVar11 - fVar10) +
                               *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x2c);
                    }
                    else {
                      if (uVar1 != 1) goto LAB_0450e0d4;
                      if (lVar6 == 0) goto LAB_0450e10c;
                      UnityEngine_Transform__set_position
                                ((fVar12 + fVar13) * 0.5,
                                 (fVar17 + *(float *)(param_1 + 0x28) * -0.5) -
                                 *(float *)(param_1 + 0x30),0,lVar6,0);
                      fVar19 = *(float *)(param_1 + 0x28);
                      fVar14 = (fVar13 - fVar12) +
                               *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x2c);
                    }
                  }
                  else {
                    if (uVar1 == 2) {
                      if (lVar6 == 0) goto LAB_0450e10c;
                      UnityEngine_Transform__set_position
                                ((fVar12 + *(float *)(param_1 + 0x28) * -0.5) -
                                 *(float *)(param_1 + 0x30),(fVar15 + fVar17) * 0.5,0,lVar6,0);
                      fVar14 = *(float *)(param_1 + 0x2c);
                      fVar19 = fVar15 - fVar17;
                    }
                    else {
                      if (uVar1 != 3) goto LAB_0450e0d4;
                      if (lVar6 == 0) goto LAB_0450e10c;
                      UnityEngine_Transform__set_position
                                (*(float *)(param_1 + 0x30) +
                                 fVar11 + *(float *)(param_1 + 0x28) * 0.5,(fVar16 + fVar18) * 0.5,0
                                 ,lVar6,0);
                      fVar14 = *(float *)(param_1 + 0x2c);
                      fVar19 = fVar16 - fVar18;
                    }
                    fVar19 = fVar19 + fVar14 + fVar14;
                    fVar14 = *(float *)(param_1 + 0x28);
                  }
                  UnityEngine_BoxCollider2D__set_size(fVar14,fVar19,lVar8,0);
                }
LAB_0450e0d4:
                uVar7 = (ulong)*(uint *)(lVar4 + 0x18);
                uVar9 = uVar9 + 1;
              } while ((long)uVar9 < (long)(int)*(uint *)(lVar4 + 0x18));
            }
            return;
          }
        }
      }
    }
  }
LAB_0450e10c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

