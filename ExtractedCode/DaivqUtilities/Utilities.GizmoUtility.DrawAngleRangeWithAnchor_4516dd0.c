// rea decompile_all
// name: Utilities.GizmoUtility$$DrawAngleRangeWithAnchor
// address: 0x4516dd0
// body: available
// range: 0x4516dd0-0x4517103 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_GizmoUtility__DrawAngleRangeWithAnchor
               (float param_1,float param_2,undefined4 param_3,float param_4,float param_5,
               undefined4 param_6)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_70;
  float local_68;
  
  UnityEngine_Gizmos__set_color(param_3,param_4,param_5,param_6,0);
  local_70 = 0;
  local_68 = param_1 * 0.017453292;
  uVar3 = UnityEngine_Quaternion__Internal_FromEulerRad(&local_70,0);
  if (DAT_09515cf0 == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515cf0 = '\x01';
  }
  lVar1 = *(long *)(DAT_0918cbd0 + 0xb8);
  fVar4 = (float)UnityEngine_Quaternion__op_Multiply
                           (uVar3,param_4,param_5,param_6,*(undefined4 *)(lVar1 + 0x3c),
                            *(undefined4 *)(lVar1 + 0x40),*(undefined4 *)(lVar1 + 0x44),0);
  local_70 = 0;
  local_68 = (param_1 - param_2 * 0.5) * 0.017453292;
  fVar7 = param_4;
  fVar9 = param_5;
  uVar3 = UnityEngine_Quaternion__Internal_FromEulerRad(&local_70,0);
  if (DAT_09515cf0 == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515cf0 = '\x01';
  }
  lVar1 = *(long *)(DAT_0918cbd0 + 0xb8);
  fVar5 = (float)UnityEngine_Quaternion__op_Multiply
                           (uVar3,fVar7,fVar9,param_6,*(undefined4 *)(lVar1 + 0x3c),
                            *(undefined4 *)(lVar1 + 0x40),*(undefined4 *)(lVar1 + 0x44),0);
  local_70 = 0;
  local_68 = (param_2 * 0.5 + param_1) * 0.017453292;
  fVar8 = fVar7;
  fVar10 = fVar9;
  uVar3 = UnityEngine_Quaternion__Internal_FromEulerRad(&local_70,0);
  if (DAT_09515cf0 == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515cf0 = '\x01';
  }
  param_4 = param_4 * 10.0;
  lVar1 = *(long *)(DAT_0918cbd0 + 0xb8);
  fVar4 = fVar4 * 10.0;
  param_5 = param_5 * 10.0;
  fVar6 = (float)UnityEngine_Quaternion__op_Multiply
                           (uVar3,fVar8,fVar10,param_6,*(undefined4 *)(lVar1 + 0x3c),
                            *(undefined4 *)(lVar1 + 0x40),*(undefined4 *)(lVar1 + 0x44),0);
  if (DAT_09515ce6 == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515ce6 = '\x01';
  }
  puVar2 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
  UnityEngine_Gizmos__DrawLine(*puVar2,puVar2[1],puVar2[2],fVar4,param_4,param_5,0);
  if (DAT_09515ce6 == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515ce6 = '\x01';
  }
  puVar2 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
  UnityEngine_Gizmos__DrawLine(*puVar2,puVar2[1],puVar2[2],fVar5 * 10.0,fVar7 * 10.0,fVar9 * 10.0,0)
  ;
  if (DAT_09515ce6 == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515ce6 = '\x01';
  }
  puVar2 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
  UnityEngine_Gizmos__DrawLine
            (*puVar2,puVar2[1],puVar2[2],fVar6 * 10.0,fVar8 * 10.0,fVar10 * 10.0,0);
  UnityEngine_Gizmos__DrawLine(fVar5 * 10.0,fVar7 * 10.0,fVar9 * 10.0,fVar4,param_4,param_5,0);
  UnityEngine_Gizmos__DrawLine(fVar6 * 10.0,fVar8 * 10.0,fVar10 * 10.0,fVar4,param_4,param_5,0);
  return;
}

