// rea decompile_all
// name: System.Globalization.CharUnicodeInfo$$InternalGetCategoryValue
// address: 0x74fc17c
// body: available
// range: 0x74fc17c-0x74fc22b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74fc228 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 System_Globalization_CharUnicodeInfo__InternalGetCategoryValue(ulong param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  ushort *puVar4;
  ulong uVar5;
  undefined1 auVar6 [12];
  
  if ((DAT_0952164c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091de198);
    DAT_0952164c = 1;
  }
  auVar6 = System_Globalization_CharUnicodeInfo__get_CategoryLevel1Index();
  uVar1 = (int)(uint)param_1 >> 9;
  if (uVar1 < auVar6._8_4_) {
    bVar2 = *(byte *)(auVar6._0_8_ + (long)(int)uVar1);
    auVar6 = System_Globalization_CharUnicodeInfo__get_CategoryLevel2Index();
    uVar5 = (ulong)((uint)param_1 >> 3) & 0x3e | (ulong)bVar2 << 6;
    if ((uint)uVar5 < auVar6._8_4_) {
      puVar4 = (ushort *)FUN_04e3b810(auVar6._0_8_ + uVar5,DAT_091de198);
      uVar3 = *puVar4;
      auVar6 = System_Globalization_CharUnicodeInfo__get_CategoryLevel3Index();
      uVar5 = param_1 & 0xf | (ulong)uVar3 << 4;
      if ((uint)uVar5 < auVar6._8_4_) {
        bVar2 = *(byte *)(auVar6._0_8_ + uVar5);
        auVar6 = System_Globalization_CharUnicodeInfo__get_CategoriesValue();
        uVar1 = param_2 + (uint)bVar2 * 2;
        if (uVar1 < auVar6._8_4_) {
          return *(undefined1 *)(auVar6._0_8_ + (long)(int)uVar1);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

