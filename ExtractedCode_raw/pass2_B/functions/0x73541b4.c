// rea decompile_all
// name: Lean.Touch.LeanGesture$$TryGetScreenDelta
// address: 0x73541b4
// body: available
// range: 0x73541b4-0x73542b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Lean_Touch_LeanGesture__TryGetScreenDelta(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((DAT_0952079c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ae180);
    FUN_03f5c2a4(&DAT_091ae188);
    DAT_0952079c = 1;
  }
  if (param_1 != 0) {
    if (DAT_09515ce8 == '\0') {
      FUN_03f5c2a4(&DAT_0918cb68);
      DAT_09515ce8 = '\x01';
    }
    iVar2 = *(int *)(param_1 + 0x18);
    if (-1 < iVar2 + -1) {
      iVar3 = 0;
      uVar4 = **(undefined8 **)(DAT_0918cb68 + 0xb8);
      do {
        iVar2 = iVar2 + -1;
        lVar1 = FUN_057e0998(param_1,iVar2,DAT_091ae188);
        if (lVar1 != 0) {
          iVar3 = iVar3 + 1;
          uVar4 = CONCAT44((float)((ulong)uVar4 >> 0x20) +
                           ((float)((ulong)*(undefined8 *)(lVar1 + 0x3c) >> 0x20) -
                           (float)((ulong)*(undefined8 *)(lVar1 + 0x34) >> 0x20)),
                           (float)uVar4 +
                           ((float)*(undefined8 *)(lVar1 + 0x3c) -
                           (float)*(undefined8 *)(lVar1 + 0x34)));
        }
      } while (0 < iVar2);
      if (0 < iVar3) {
        *param_2 = CONCAT44((float)((ulong)uVar4 >> 0x20) / (float)iVar3,(float)uVar4 / (float)iVar3
                           );
        return 1;
      }
    }
  }
  return 0;
}

