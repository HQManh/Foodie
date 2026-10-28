// rea decompile_all
// name: Utilities.CreateWall2DAroundScreen$$CreateWall
// address: 0x450d8a0
// body: available
// range: 0x450d8a0-0x450dd6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x450dd64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x450dd68 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_CreateWall2DAroundScreen__CreateWall(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_b8;
  undefined8 uStack_b0;
  uint local_a8;
  
  if ((DAT_09518512 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cd5e8);
    FUN_03f5c2a4(&DAT_09184b68);
    FUN_03f5c2a4(&DAT_09180978);
    FUN_03f5c2a4(&DAT_09173850);
    FUN_03f5c2a4(&DAT_0918f820);
    FUN_03f5c2a4(&DAT_09213188);
    DAT_09518512 = 1;
  }
  lVar4 = UnityEngine_Camera__get_main(0);
  iVar2 = UnityEngine_Screen__get_height(0);
  if (lVar4 != 0) {
    fVar17 = (float)iVar2;
    fVar12 = (float)UnityEngine_Camera__ScreenToWorldPoint(0,fVar17,0,lVar4,0);
    lVar4 = UnityEngine_Camera__get_main(0);
    iVar2 = UnityEngine_Screen__get_width(0);
    iVar3 = UnityEngine_Screen__get_height(0);
    if (lVar4 != 0) {
      fVar18 = (float)iVar3;
      fVar13 = (float)UnityEngine_Camera__ScreenToWorldPoint((float)iVar2,fVar18,0,lVar4,0);
      lVar4 = UnityEngine_Camera__get_main(0);
      if (lVar4 != 0) {
        fVar19 = 0.0;
        fVar14 = (float)UnityEngine_Camera__ScreenToWorldPoint(0,0,0,lVar4,0);
        lVar4 = UnityEngine_Camera__get_main(0);
        iVar2 = UnityEngine_Screen__get_width(0);
        if (lVar4 != 0) {
          fVar20 = 0.0;
          fVar15 = (float)UnityEngine_Camera__ScreenToWorldPoint((float)iVar2,0,0,lVar4,0);
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
              uVar11 = 0;
              uVar9 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
              do {
                if (uVar9 <= uVar11) {
LAB_0450dd68:
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                uVar1 = *(uint *)(lVar4 + 0x20 + uVar11 * 4);
                uVar9 = EnumMaskUtility__IsEnumPositive(*(undefined4 *)(param_1 + 0x34),uVar1,0);
                if ((uVar9 & 1) != 0) {
                  local_b8 = DAT_0918f820;
                  uStack_b0 = 0xffffffffffffffff;
                  local_a8 = uVar1;
                  uVar5 = System_Enum__ToString(&local_b8,0);
                  uVar5 = System_String__Concat(DAT_09213188,uVar5,0);
                  lVar6 = thunk_FUN_03f9944c(DAT_09184b68);
                  UnityEngine_GameObject___ctor(lVar6,uVar5,0);
                  if (lVar6 == 0) goto LAB_0450dd64;
                  lVar7 = UnityEngine_GameObject__get_transform(lVar6,0);
                  uVar5 = UnityEngine_Component__get_transform(param_1,0);
                  if (lVar7 == 0) goto LAB_0450dd64;
                  UnityEngine_Transform__set_parent(lVar7,uVar5,0);
                  lVar7 = FUN_04b7c294(lVar6,DAT_091cd5e8);
                  lVar10 = *(long *)(param_1 + 0x38);
                  if (lVar10 == 0) goto LAB_0450dd64;
                  if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_0450dd68;
                  plVar8 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar8 = lVar7;
                  thunk_FUN_03f5d7b8(plVar8,lVar7);
                  if ((int)uVar1 < 2) {
                    if (uVar1 == 0) {
                      lVar6 = UnityEngine_GameObject__get_transform(lVar6,0);
                      if ((lVar6 == 0) ||
                         (UnityEngine_Transform__set_position
                                    ((fVar12 + fVar13) * 0.5,
                                     *(float *)(param_1 + 0x30) +
                                     fVar18 + *(float *)(param_1 + 0x28) * 0.5,0,lVar6,0),
                         lVar7 == 0)) goto LAB_0450dd64;
                      fVar21 = *(float *)(param_1 + 0x28);
                      fVar16 = (fVar13 - fVar12) +
                               *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x2c);
                    }
                    else {
                      if (uVar1 != 1) goto LAB_0450dd24;
                      lVar6 = UnityEngine_GameObject__get_transform(lVar6,0);
                      if ((lVar6 == 0) ||
                         (UnityEngine_Transform__set_position
                                    ((fVar14 + fVar15) * 0.5,
                                     (fVar19 + *(float *)(param_1 + 0x28) * -0.5) -
                                     *(float *)(param_1 + 0x30),0,lVar6,0), lVar7 == 0))
                      goto LAB_0450dd64;
                      fVar21 = *(float *)(param_1 + 0x28);
                      fVar16 = (fVar15 - fVar14) +
                               *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x2c);
                    }
                  }
                  else {
                    if (uVar1 == 2) {
                      lVar6 = UnityEngine_GameObject__get_transform(lVar6,0);
                      if ((lVar6 == 0) ||
                         (UnityEngine_Transform__set_position
                                    ((fVar14 + *(float *)(param_1 + 0x28) * -0.5) -
                                     *(float *)(param_1 + 0x30),(fVar17 + fVar19) * 0.5,0,lVar6,0),
                         lVar7 == 0)) goto LAB_0450dd64;
                      fVar16 = *(float *)(param_1 + 0x28);
                      fVar22 = *(float *)(param_1 + 0x2c);
                      fVar21 = fVar17 - fVar19;
                    }
                    else {
                      if (uVar1 != 3) goto LAB_0450dd24;
                      lVar6 = UnityEngine_GameObject__get_transform(lVar6,0);
                      if ((lVar6 == 0) ||
                         (UnityEngine_Transform__set_position
                                    (*(float *)(param_1 + 0x30) +
                                     fVar13 + *(float *)(param_1 + 0x28) * 0.5,
                                     (fVar18 + fVar20) * 0.5,0,lVar6,0), lVar7 == 0))
                      goto LAB_0450dd64;
                      fVar16 = *(float *)(param_1 + 0x28);
                      fVar22 = *(float *)(param_1 + 0x2c);
                      fVar21 = fVar18 - fVar20;
                    }
                    fVar21 = fVar21 + fVar22 + fVar22;
                  }
                  UnityEngine_BoxCollider2D__set_size(fVar16,fVar21,lVar7,0);
                }
LAB_0450dd24:
                uVar9 = (ulong)*(uint *)(lVar4 + 0x18);
                uVar11 = uVar11 + 1;
              } while ((long)uVar11 < (long)(int)*(uint *)(lVar4 + 0x18));
            }
            return;
          }
        }
      }
    }
  }
LAB_0450dd64:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

