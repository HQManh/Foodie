// rea decompile_all
// name: Lean.Touch.LeanGesture$$TryGetWorldDelta
// address: 0x73544ec
// body: available
// range: 0x73544ec-0x735461b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Lean_Touch_LeanGesture__TryGetWorldDelta
          (float param_1,undefined1 param_2 [16],float param_3,long param_4,undefined8 *param_5,
          undefined8 param_6)

{
  long lVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  
  if ((DAT_095207a1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ae180);
    FUN_03f5c2a4(&DAT_091ae188);
    DAT_095207a1 = 1;
  }
  if (param_4 != 0) {
    if (DAT_09515ce6 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515ce6 = '\x01';
    }
    iVar2 = *(int *)(param_4 + 0x18);
    if (-1 < iVar2 + -1) {
      iVar3 = 0;
      uVar7 = **(undefined8 **)(DAT_0918cbd0 + 0xb8);
      fVar6 = *(float *)(*(undefined8 **)(DAT_0918cbd0 + 0xb8) + 1);
      do {
        iVar2 = iVar2 + -1;
        lVar1 = FUN_057e0998(param_4,iVar2,DAT_091ae188);
        if (lVar1 != 0) {
          fVar5 = param_1;
          fVar4 = (float)Lean_Touch_LeanFinger__GetWorldDelta(param_1,lVar1,param_6);
          fVar6 = fVar6 + param_3;
          iVar3 = iVar3 + 1;
          uVar7 = CONCAT44((float)((ulong)uVar7 >> 0x20) + fVar5,(float)uVar7 + fVar4);
        }
      } while (0 < iVar2);
      if (0 < iVar3) {
        fVar5 = (float)iVar3;
        *(float *)(param_5 + 1) = fVar6 / fVar5;
        *param_5 = CONCAT44((float)((ulong)uVar7 >> 0x20) / fVar5,(float)uVar7 / fVar5);
        return 1;
      }
    }
  }
  return 0;
}

