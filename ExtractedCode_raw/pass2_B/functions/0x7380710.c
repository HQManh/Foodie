// rea decompile_all
// name: System.Range$$GetOffsetAndLength
// address: 0x7380710
// body: available
// range: 0x7380710-0x73807a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Range__GetOffsetAndLength(long *param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 local_28;
  
  if ((DAT_09520a01 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bec98);
    DAT_09520a01 = 1;
  }
  lVar4 = *param_1;
  uVar6 = CONCAT44(-(uint)(lVar4 < 0),-(uint)((int)lVar4 < 0)) & CONCAT44(param_2 + 1,param_2 + 1);
  uVar3 = (int)lVar4 + (int)uVar6;
  uVar5 = (int)((ulong)lVar4 >> 0x20) + (int)(uVar6 >> 0x20);
  if (uVar5 <= param_2 && uVar3 <= uVar5) {
    local_28 = 0;
    FUN_066c1fdc(&local_28,uVar3,uVar5 - uVar3,DAT_091bec98);
    return local_28;
  }
  System_Range_ThrowHelper__ThrowArgumentOutOfRangeException();
  thunk_FUN_03fc39d4(&DAT_09181558);
  uVar1 = thunk_FUN_03f9944c();
  uVar2 = thunk_FUN_03fc39d4(&DAT_0921e638);
  System_ArgumentOutOfRangeException___ctor(uVar1,uVar2,0);
  uVar2 = thunk_FUN_03fc39d4(&DAT_091eed48);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar1,uVar2);
}

