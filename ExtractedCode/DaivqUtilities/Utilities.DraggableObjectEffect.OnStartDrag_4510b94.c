// rea decompile_all
// name: Utilities.DraggableObjectEffect$$OnStartDrag
// address: 0x4510b94
// body: available
// range: 0x4510b94-0x4510c17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_DraggableObjectEffect__OnStartDrag(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined8 local_20;
  float local_18;
  
  uVar1 = UnityEngine_Time__get_time(0);
  fVar3 = *(float *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x70);
  uVar2 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x84) >> 0x20) * fVar3,
                   (float)*(undefined8 *)(param_1 + 0x84) * fVar3);
  uVar5 = 0x3c8efa35;
  *(undefined8 *)(param_1 + 0xbc) = *(undefined8 *)(param_1 + 0x60);
  fVar4 = *(float *)(param_1 + 0x6c) * 0.017453292;
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  *(float *)(param_1 + 0xb8) = *(float *)(param_1 + 0x8c) * fVar3;
  local_20 = 0;
  local_18 = fVar4;
  uVar1 = UnityEngine_Quaternion__Internal_FromEulerRad(&local_20,0);
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  *(int *)(param_1 + 0x94) = (int)uVar2;
  *(float *)(param_1 + 0x98) = fVar4;
  *(undefined4 *)(param_1 + 0x9c) = uVar5;
  return;
}

