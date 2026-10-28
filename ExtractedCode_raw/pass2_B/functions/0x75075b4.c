// rea decompile_all
// name: System.Globalization.DateTimeFormatInfoScanner$$get_KnownWords
// address: 0x75075b4
// body: available
// range: 0x75075b4-0x750799f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x750799c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Globalization_DateTimeFormatInfoScanner__get_KnownWords(void)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((DAT_095216ac & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183578);
    FUN_03f5c2a4(&DAT_0919feb8);
    FUN_03f5c2a4(&DAT_0919fe90);
    FUN_03f5c2a4(&DAT_09176c28);
    FUN_03f5c2a4(&DAT_09227008);
    FUN_03f5c2a4(&DAT_09227098);
    FUN_03f5c2a4(&DAT_09227068);
    FUN_03f5c2a4(&DAT_092270b0);
    FUN_03f5c2a4(&DAT_09227040);
    FUN_03f5c2a4(&DAT_09227088);
    FUN_03f5c2a4(&DAT_092270a0);
    FUN_03f5c2a4(&DAT_091f8a38);
    FUN_03f5c2a4(&DAT_09226ff8);
    FUN_03f5c2a4(&DAT_091f9400);
    FUN_03f5c2a4(&DAT_09227030);
    FUN_03f5c2a4(&DAT_09227080);
    FUN_03f5c2a4(&DAT_09227038);
    FUN_03f5c2a4(&DAT_09226fc0);
    FUN_03f5c2a4(&DAT_09226ff0);
    FUN_03f5c2a4(&DAT_091f8f68);
    DAT_095216ac = 1;
  }
  lVar1 = **(long **)(DAT_09183578 + 0xb8);
  thunk_FUN_03f6a5cc();
  if (lVar1 == 0) {
    lVar1 = thunk_FUN_03f9944c(DAT_09176c28);
    FUN_06fd76bc(lVar1,DAT_0919fe90);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_06fd8454(lVar1,DAT_091f9400,**(undefined8 **)(DAT_09535468 + 0xb8),DAT_0919feb8);
    FUN_06fd8454(lVar1,DAT_091f8a38,**(undefined8 **)(DAT_09535468 + 0xb8),DAT_0919feb8);
    FUN_06fd8454(lVar1,DAT_091f8f68,**(undefined8 **)(DAT_09535468 + 0xb8),DAT_0919feb8);
    FUN_06fd8454(lVar1,DAT_09226ff0,**(undefined8 **)(DAT_09535468 + 0xb8),DAT_0919feb8);
    FUN_06fd8454(lVar1,DAT_09227038,**(undefined8 **)(DAT_09535468 + 0xb8),DAT_0919feb8);
    FUN_06fd8454(lVar1,DAT_09226ff8,**(undefined8 **)(DAT_09535468 + 0xb8),DAT_0919feb8);
    FUN_06fd8454(lVar1,DAT_09227068,**(undefined8 **)(DAT_09535468 + 0xb8),DAT_0919feb8);
    FUN_06fd8454(lVar1,DAT_09227098,**(undefined8 **)(DAT_09535468 + 0xb8),DAT_0919feb8);
    FUN_06fd8454(lVar1,DAT_092270a0,**(undefined8 **)(DAT_09535468 + 0xb8),DAT_0919feb8);
    FUN_06fd8454(lVar1,DAT_09227088,**(undefined8 **)(DAT_09535468 + 0xb8),DAT_0919feb8);
    FUN_06fd8454(lVar1,DAT_09227080,**(undefined8 **)(DAT_09535468 + 0xb8),DAT_0919feb8);
    FUN_06fd8454(lVar1,DAT_092270b0,**(undefined8 **)(DAT_09535468 + 0xb8),DAT_0919feb8);
    FUN_06fd8454(lVar1,DAT_09227030,**(undefined8 **)(DAT_09535468 + 0xb8),DAT_0919feb8);
    FUN_06fd8454(lVar1,DAT_09227008,**(undefined8 **)(DAT_09535468 + 0xb8),DAT_0919feb8);
    FUN_06fd8454(lVar1,DAT_09226fc0,**(undefined8 **)(DAT_09535468 + 0xb8),DAT_0919feb8);
    FUN_06fd8454(lVar1,DAT_09227040,**(undefined8 **)(DAT_09535468 + 0xb8),DAT_0919feb8);
    thunk_FUN_03f6a5cc();
    **(long **)(DAT_09183578 + 0xb8) = lVar1;
    thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09183578 + 0xb8),lVar1);
  }
  uVar2 = **(undefined8 **)(DAT_09183578 + 0xb8);
  thunk_FUN_03f6a5cc();
  return uVar2;
}

