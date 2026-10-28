// rea decompile_all
// name: Utilities.GizmoUtility$$DrawPlane
// address: 0x4516be8
// body: available
// range: 0x4516be8-0x4516dcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_GizmoUtility__DrawPlane
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
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
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
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
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  uVar4 = param_3;
  UnityEngine_Gizmos__get_matrix(&local_d0,0);
  if (DAT_09515faa == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515faa = '\x01';
  }
  local_80 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x18);
  local_78 = *(undefined4 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x20);
  local_110 = param_1;
  uStack_10c = param_2;
  uStack_108 = param_3;
  uVar3 = local_78;
  uVar2 = UnityEngine_Quaternion__Internal_LookRotation(&local_110,&local_80,0);
  if (DAT_09515cf3 == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515cf3 = '\x01';
  }
  local_90 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0xc);
  local_88 = *(undefined4 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x14);
  local_80 = CONCAT44(uVar3,uVar2);
  local_78 = uVar4;
  local_74 = param_4;
  local_6c = param_5;
  local_68 = param_6;
  local_64 = param_7;
  UnityEngine_Matrix4x4__Internal_TRS(&local_110,&local_6c,&local_80,&local_90,0);
  uStack_148 = CONCAT44(uStack_104,uStack_108);
  local_150 = CONCAT44(uStack_10c,local_110);
  uStack_138 = uStack_f8;
  uStack_140 = uStack_100;
  uStack_128 = uStack_e8;
  local_130 = local_f0;
  uStack_118 = uStack_d8;
  uStack_120 = uStack_e0;
  UnityEngine_Gizmos__set_matrix(&local_150,0);
  UnityEngine_Gizmos__set_color
            (uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,
             uStack000000000000000c,0);
  if (DAT_09515ce6 == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515ce6 = '\x01';
  }
  puVar1 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
  UnityEngine_Gizmos__DrawCube(*puVar1,puVar1[1],puVar1[2],0x41200000,0x41200000,0x3dcccccd,0);
  uStack_188 = uStack_c8;
  local_190 = local_d0;
  uStack_178 = uStack_b8;
  uStack_180 = uStack_c0;
  uStack_168 = uStack_a8;
  local_170 = local_b0;
  uStack_158 = uStack_98;
  uStack_160 = uStack_a0;
  UnityEngine_Gizmos__set_matrix(&local_190,0);
  return;
}

