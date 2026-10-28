// rea decompile_all
// name: UnityEngine.UI.Extensions.Gradient2$$CreateSplitVertex
// address: 0x44f35fc
// body: available
// range: 0x44f35fc-0x44f3727 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void UnityEngine_UI_Extensions_Gradient2__CreateSplitVertex
               (float *param_1,float param_2,long param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float local_c0;
  undefined1 auStack_ac [12];
  undefined8 local_a0;
  float local_98;
  
  uVar4 = *(undefined8 *)(param_4 + 0xb);
  uVar5 = *(undefined8 *)(param_5 + 0xb);
  if (*(int *)(param_3 + 0x28) == 0) {
    fVar3 = param_5[1];
    fVar2 = param_4[1];
    fVar6 = param_4[2];
    local_c0 = (*param_4 - param_2) / (*param_4 - *param_5);
    memcpy(auStack_ac,param_4,0x6c);
    fVar1 = (float)FUN_043b2fc4(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    *param_1 = param_2;
    param_1[1] = fVar2 - local_c0 * (fVar2 - fVar3);
  }
  else {
    fVar3 = *param_5;
    fVar2 = *param_4;
    fVar6 = param_4[2];
    local_c0 = (param_4[1] - param_2) / (param_4[1] - param_5[1]);
    memcpy(auStack_ac,param_4,0x6c);
    fVar1 = (float)FUN_043b2fc4(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    *param_1 = fVar2 - local_c0 * (fVar2 - fVar3);
    param_1[1] = param_2;
  }
  param_1[2] = fVar6;
  *(undefined8 *)(param_1 + 3) = local_a0;
  param_1[5] = local_98;
  param_1[0x11] = 0.0;
  param_1[0x12] = 0.0;
  param_1[0xf] = 0.0;
  param_1[0x10] = 0.0;
  param_1[0x15] = 0.0;
  param_1[0x16] = 0.0;
  param_1[0x13] = 0.0;
  param_1[0x14] = 0.0;
  param_1[0x19] = 0.0;
  param_1[0x1a] = 0.0;
  param_1[0x17] = 0.0;
  param_1[0x18] = 0.0;
  fVar2 = (float)uVar4;
  fVar3 = (float)((ulong)uVar4 >> 0x20);
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[10] = fVar1;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  *(ulong *)(param_1 + 0xb) =
       CONCAT44(fVar3 - (fVar3 - (float)((ulong)uVar5 >> 0x20)) * local_c0,
                fVar2 - (fVar2 - (float)uVar5) * local_c0);
  return;
}

