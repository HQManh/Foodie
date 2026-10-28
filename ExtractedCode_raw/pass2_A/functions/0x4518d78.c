// rea decompile_all
// name: Utilities.SnapToSpriteShape$$Snap
// address: 0x4518d78
// body: available
// range: 0x4518d78-0x451902b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4519024 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4519028 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_SnapToSpriteShape__Snap
               (undefined1 param_1 [16],float param_2,undefined1 param_3 [16],undefined4 param_4,
               long param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_a0;
  undefined4 local_94;
  undefined4 uStack_90;
  float local_8c;
  float fStack_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  long local_68;
  
  if ((DAT_0951857b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5988);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189078);
    DAT_0951857b = 1;
  }
  local_68 = 0;
  plVar5 = (long *)(param_5 + 0x20);
  lVar6 = *plVar5;
  local_94 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(lVar6,0);
  if ((uVar1 & 1) == 0) {
    uVar2 = UnityEngine_Component__get_transform(param_5,0);
    *(undefined8 *)(param_5 + 0x20) = uVar2;
    thunk_FUN_03f5d7b8(plVar5,uVar2);
  }
  lVar6 = UnityEngine_Component__get_transform(param_5,0);
  if (lVar6 != 0) {
    uVar8 = UnityEngine_Transform__get_position(lVar6,0);
    uVar12 = *(uint *)(param_5 + 0x28);
    if (*(int *)(DAT_09189078 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = (ulong)uVar12;
    lVar6 = UnityEngine_Physics2D__OverlapCircleAll(uVar8,param_2,uVar1,0);
    uVar8 = (undefined4)uVar1;
    local_68 = 0;
    if (lVar6 != 0) {
      uVar12 = *(uint *)(lVar6 + 0x18);
      if (0 < (int)uVar12) {
        lVar7 = 0;
        do {
          if (uVar12 <= (uint)lVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar3 = *(long *)(lVar6 + 0x20 + lVar7 * 8);
          if ((lVar3 == 0) || (lVar3 = UnityEngine_Component__get_transform(lVar3,0), lVar3 == 0))
          goto LAB_04519024;
          uVar4 = FUN_04a6b048(lVar3,&local_68,DAT_091c5988);
          uVar8 = (undefined4)uVar1;
          if ((uVar4 & 1) != 0) break;
          uVar12 = *(uint *)(lVar6 + 0x18);
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < (int)uVar12);
      }
      lVar6 = local_68;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Object__op_Implicit(lVar6,0);
      lVar6 = local_68;
      if ((uVar1 & 1) == 0) {
        return;
      }
      lVar7 = UnityEngine_Component__get_transform(param_5,0);
      if (lVar7 != 0) {
        UnityEngine_Transform__get_position(lVar7,0);
        fVar9 = (float)Utilities_SpriteShapeUtilities__GetNearestPointInShape
                                 (lVar6,&uStack_90,&local_94,&local_a0);
        fVar13 = local_a0._4_4_;
        fVar14 = (float)local_a0;
        if (*(char *)(param_5 + 0x2c) != '\0') {
          fVar14 = -(float)local_a0;
          fVar13 = -local_a0._4_4_;
          local_a0 = CONCAT44(fVar13,fVar14);
        }
        if (local_68 != 0) {
          fVar15 = *(float *)(local_68 + 0x158);
          lVar6 = *plVar5;
          if (DAT_09517b1f == '\0') {
            FUN_03f5c2a4(&DAT_0918cbd0);
            DAT_09517b1f = '\x01';
          }
          local_84 = 0;
          local_80 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x48);
          uVar11 = *(undefined4 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x50);
          local_8c = fVar14;
          fStack_88 = fVar13;
          local_78 = uVar11;
          uVar10 = UnityEngine_Quaternion__Internal_LookRotation(&local_80,&local_8c,0);
          if (lVar6 != 0) {
            UnityEngine_Transform__SetPositionAndRotation
                      (fVar9 + fVar14 * fVar15,param_2 + fVar13 * fVar15,0,uVar10,uVar11,uVar8,
                       param_4,lVar6,0);
            return;
          }
        }
      }
    }
  }
LAB_04519024:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

