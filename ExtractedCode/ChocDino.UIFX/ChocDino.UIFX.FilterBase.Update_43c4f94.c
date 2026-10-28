// rea decompile_all
// name: ChocDino.UIFX.FilterBase$$Update
// address: 0x43c4f94
// body: available
// range: 0x43c4f94-0x43c51d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43c51d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_FilterBase__Update(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((DAT_09517c90 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517c90 = 1;
  }
  if ((*(char *)(param_1 + 0xe8) == '\0') && (*(char *)(param_1 + 0xd9) == '\0')) {
    bVar1 = *(char *)(param_1 + 0xa8) != '\0';
    if (*(int *)(param_1 + 0x24) == 1) {
      uStack_68 = *(undefined8 *)(param_1 + 0xf4);
      local_70 = *(undefined8 *)(param_1 + 0xec);
      uStack_58 = *(undefined8 *)(param_1 + 0x104);
      uStack_60 = *(undefined8 *)(param_1 + 0xfc);
      uStack_48 = *(undefined8 *)(param_1 + 0x114);
      local_50 = *(undefined8 *)(param_1 + 0x10c);
      uStack_38 = *(undefined8 *)(param_1 + 0x124);
      uStack_40 = *(undefined8 *)(param_1 + 0x11c);
      lVar3 = UnityEngine_Component__get_transform(param_1,0);
      if (lVar3 == 0) {
LAB_043c51d0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_Transform__get_localToWorldMatrix(&local_b0,lVar3,0);
      uStack_e8 = uStack_68;
      local_f0 = local_70;
      uStack_d8 = uStack_58;
      uStack_e0 = uStack_60;
      uStack_c8 = uStack_48;
      local_d0 = local_50;
      uStack_b8 = uStack_38;
      uStack_c0 = uStack_40;
      uStack_128 = uStack_a8;
      local_130 = local_b0;
      uStack_118 = uStack_98;
      uStack_120 = uStack_a0;
      uStack_108 = uStack_88;
      local_110 = local_90;
      uStack_f8 = uStack_78;
      uStack_100 = uStack_80;
      uVar4 = ChocDino_UIFX_MathUtils__HasMatrixChanged(&local_f0,&local_130,0,0);
      if ((uVar4 & 1) != 0) {
        lVar3 = UnityEngine_Component__get_transform(param_1,0);
        if (lVar3 == 0) goto LAB_043c51d0;
        UnityEngine_Transform__get_localToWorldMatrix(&local_70,lVar3,0);
        bVar1 = true;
        *(undefined8 *)(param_1 + 0xf4) = uStack_68;
        *(undefined8 *)(param_1 + 0xec) = local_70;
        *(undefined8 *)(param_1 + 0x104) = uStack_58;
        *(undefined8 *)(param_1 + 0xfc) = uStack_60;
        *(undefined8 *)(param_1 + 0x114) = uStack_48;
        *(undefined8 *)(param_1 + 0x10c) = local_50;
        *(undefined8 *)(param_1 + 0x124) = uStack_38;
        *(undefined8 *)(param_1 + 0x11c) = uStack_40;
      }
      uVar6 = *(undefined8 *)(param_1 + 0x98);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Implicit(uVar6,0);
      if ((uVar4 & 1) != 0) {
        if (*(long *)(param_1 + 0x98) == 0) goto LAB_043c51d0;
        iVar2 = UnityEngine_Canvas__get_renderMode(*(long *)(param_1 + 0x98),0);
        if (iVar2 == 2) {
          lVar3 = ChocDino_UIFX_FilterBase__GetRenderCamera(param_1);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar4 = UnityEngine_Object__op_Implicit(lVar3,0);
          if ((uVar4 & 1) != 0) {
            uStack_68 = *(undefined8 *)(param_1 + 0x134);
            local_70 = *(undefined8 *)(param_1 + 300);
            uStack_58 = *(undefined8 *)(param_1 + 0x144);
            uStack_60 = *(undefined8 *)(param_1 + 0x13c);
            uStack_48 = *(undefined8 *)(param_1 + 0x154);
            local_50 = *(undefined8 *)(param_1 + 0x14c);
            uStack_38 = *(undefined8 *)(param_1 + 0x164);
            uStack_40 = *(undefined8 *)(param_1 + 0x15c);
            if ((lVar3 == 0) || (lVar5 = UnityEngine_Component__get_transform(lVar3,0), lVar5 == 0))
            goto LAB_043c51d0;
            UnityEngine_Transform__get_localToWorldMatrix(&local_b0,lVar5,0);
            uStack_168 = uStack_68;
            local_170 = local_70;
            uStack_158 = uStack_58;
            uStack_160 = uStack_60;
            uStack_148 = uStack_48;
            local_150 = local_50;
            uStack_138 = uStack_38;
            uStack_140 = uStack_40;
            uStack_1a8 = uStack_a8;
            local_1b0 = local_b0;
            uStack_198 = uStack_98;
            uStack_1a0 = uStack_a0;
            uStack_188 = uStack_88;
            local_190 = local_90;
            uStack_178 = uStack_78;
            uStack_180 = uStack_80;
            uVar4 = ChocDino_UIFX_MathUtils__HasMatrixChanged(&local_170,&local_1b0,0,0);
            if ((uVar4 & 1) != 0) {
              lVar3 = UnityEngine_Component__get_transform(lVar3,0);
              if (lVar3 == 0) goto LAB_043c51d0;
              UnityEngine_Transform__get_localToWorldMatrix(&local_70,lVar3,0);
              bVar1 = true;
              *(undefined8 *)(param_1 + 0x134) = uStack_68;
              *(undefined8 *)(param_1 + 300) = local_70;
              *(undefined8 *)(param_1 + 0x144) = uStack_58;
              *(undefined8 *)(param_1 + 0x13c) = uStack_60;
              *(undefined8 *)(param_1 + 0x154) = uStack_48;
              *(undefined8 *)(param_1 + 0x14c) = local_50;
              *(undefined8 *)(param_1 + 0x164) = uStack_38;
              *(undefined8 *)(param_1 + 0x15c) = uStack_40;
            }
          }
        }
      }
    }
    if (*(char *)(param_1 + 0x1c1) != '\0') {
      ChocDino_UIFX_FilterBase__UpdateCulling(param_1);
    }
    if (bVar1) {
      ChocDino_UIFX_FilterBase__ForceUpdate(param_1,0);
    }
  }
  return;
}

