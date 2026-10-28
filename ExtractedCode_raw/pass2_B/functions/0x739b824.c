// rea decompile_all
// name: MessagePack.MessagePackSerializerOptions$$.cctor
// address: 0x739b824
// body: available
// range: 0x739b824-0x739b97f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x739b978 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x739b97c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_MessagePackSerializerOptions___cctor(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  if ((DAT_09520b20 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a86b8);
    FUN_03f5c2a4(&DAT_091a8698);
    FUN_03f5c2a4(&DAT_09179ee0);
    FUN_03f5c2a4(&DAT_09188190);
    FUN_03f5c2a4(&DAT_09189db0);
    FUN_03f5c2a4(&DAT_0920e0e0);
    FUN_03f5c2a4(&DAT_0920df68);
    FUN_03f5c2a4(&DAT_091f87e8);
    DAT_09520b20 = 1;
  }
  uVar1 = thunk_FUN_03f9944c(DAT_09189db0);
  System_Text_RegularExpressions_Regex___ctor(uVar1,DAT_091f87e8,8,0);
  **(undefined8 **)(DAT_09188190 + 0xb8) = uVar1;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09188190 + 0xb8),uVar1);
  lVar2 = thunk_FUN_03f9944c(DAT_09179ee0);
  FUN_053eb530(lVar2,DAT_091a8698);
  if (lVar2 != 0) {
    FUN_053ec72c(lVar2,DAT_0920df68,DAT_091a86b8);
    FUN_053ec72c(lVar2,DAT_0920e0e0,DAT_091a86b8);
    plVar3 = (long *)(*(long *)(DAT_09188190 + 0xb8) + 8);
    *plVar3 = lVar2;
    thunk_FUN_03f5d7b8(plVar3,lVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

