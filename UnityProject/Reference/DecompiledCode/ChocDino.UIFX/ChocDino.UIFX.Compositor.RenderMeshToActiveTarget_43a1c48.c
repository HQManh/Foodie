// rea decompile_all
// name: ChocDino.UIFX.Compositor$$RenderMeshToActiveTarget
// address: 0x43a1c48
// body: available
// range: 0x43a1c48-0x43a1e5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43a1e5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_Compositor__RenderMeshToActiveTarget
               (long param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((DAT_09517aa7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184e48);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517aa7 = 1;
  }
  UnityEngine_GL__PushMatrix(0);
  UnityEngine_GL__LoadIdentity(0);
  uStack_98 = *(undefined8 *)(param_1 + 0x78);
  local_a0 = *(undefined8 *)(param_1 + 0x70);
  uStack_88 = *(undefined8 *)(param_1 + 0x88);
  uStack_90 = *(undefined8 *)(param_1 + 0x80);
  uStack_78 = *(undefined8 *)(param_1 + 0x98);
  local_80 = *(undefined8 *)(param_1 + 0x90);
  uStack_68 = *(undefined8 *)(param_1 + 0xa8);
  uStack_70 = *(undefined8 *)(param_1 + 0xa0);
  UnityEngine_GL__set_modelview(&local_a0,0);
  uStack_118 = *(undefined8 *)(param_1 + 0x20);
  local_120 = *(undefined8 *)(param_1 + 0x18);
  uStack_108 = *(undefined8 *)(param_1 + 0x30);
  uStack_110 = *(undefined8 *)(param_1 + 0x28);
  uStack_f8 = *(undefined8 *)(param_1 + 0x40);
  local_100 = *(undefined8 *)(param_1 + 0x38);
  uStack_e8 = *(undefined8 *)(param_1 + 0x50);
  uStack_f0 = *(undefined8 *)(param_1 + 0x48);
  UnityEngine_GL__GetGPUProjectionMatrix(&local_e0,&local_120,0,0);
  uStack_158 = uStack_d8;
  local_160 = local_e0;
  uStack_148 = uStack_c8;
  uStack_150 = uStack_d0;
  uStack_138 = uStack_b8;
  local_140 = local_c0;
  uStack_128 = uStack_a8;
  uStack_130 = uStack_b0;
  UnityEngine_GL__LoadProjectionMatrix(&local_160,0);
  if (param_4 != 0) {
    iVar1 = UnityEngine_Material__get_passCount(param_4,0);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        uVar3 = UnityEngine_Material__SetPass(param_4,iVar1,0);
        if ((uVar3 & 1) != 0) {
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Implicit(param_2,0);
          if ((uVar3 & 1) == 0) {
            if (DAT_09516ccb == '\0') {
              FUN_03f5c2a4(&DAT_09187ec0);
              DAT_09516ccb = '\x01';
            }
            lVar5 = *(long *)(DAT_09187ec0 + 0xb8);
            uStack_d8 = *(undefined8 *)(lVar5 + 0x48);
            local_e0 = *(undefined8 *)(lVar5 + 0x40);
            uStack_c8 = *(undefined8 *)(lVar5 + 0x58);
            uStack_d0 = *(undefined8 *)(lVar5 + 0x50);
            uStack_b8 = *(undefined8 *)(lVar5 + 0x68);
            local_c0 = *(undefined8 *)(lVar5 + 0x60);
            uStack_a8 = *(undefined8 *)(lVar5 + 0x78);
            uStack_b0 = *(undefined8 *)(lVar5 + 0x70);
            if (*(int *)(DAT_09184e48 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uStack_1d8 = uStack_d8;
            local_1e0 = local_e0;
            uStack_1c8 = uStack_c8;
            uStack_1d0 = uStack_d0;
            uStack_1b8 = uStack_b8;
            local_1c0 = local_c0;
            uStack_1a8 = uStack_a8;
            uStack_1b0 = uStack_b0;
            puVar4 = &local_1e0;
          }
          else {
            if (param_2 == 0) goto LAB_043a1e5c;
            UnityEngine_Transform__get_localToWorldMatrix(&local_e0,param_2,0);
            if (*(int *)(DAT_09184e48 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uStack_198 = uStack_d8;
            local_1a0 = local_e0;
            uStack_188 = uStack_c8;
            uStack_190 = uStack_d0;
            uStack_178 = uStack_b8;
            local_180 = local_c0;
            uStack_168 = uStack_a8;
            uStack_170 = uStack_b0;
            puVar4 = &local_1a0;
          }
          UnityEngine_Graphics__DrawMeshNow(param_3,puVar4,0);
        }
        iVar1 = iVar1 + 1;
        iVar2 = UnityEngine_Material__get_passCount(param_4,0);
      } while (iVar1 < iVar2);
    }
    UnityEngine_GL__PopMatrix(0);
    return;
  }
LAB_043a1e5c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

