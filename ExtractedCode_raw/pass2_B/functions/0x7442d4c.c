// rea decompile_all
// name: System.Text.UTF32Encoding$$.cctor
// address: 0x7442d4c
// body: available
// range: 0x7442d4c-0x7442ea7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7442e9c to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7442ea0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7442ea4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Text_UTF32Encoding___cctor(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if ((DAT_09521089 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_0918c548);
    DAT_09521089 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_0918c548);
  System_Text_Encoding___ctor(lVar1,12000,0);
  lVar2 = DAT_0918c548;
  *(undefined2 *)(lVar1 + 0x38) = 1;
  plVar3 = *(long **)(lVar2 + 0xb8);
  *(undefined1 *)(lVar1 + 0x3a) = 0;
  *plVar3 = lVar1;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_0918c548 + 0xb8),lVar1);
  lVar1 = thunk_FUN_03f9944c(DAT_0918c548);
  System_Text_Encoding___ctor(lVar1,0x2ee1,0);
  lVar2 = DAT_0918c548;
  *(undefined2 *)(lVar1 + 0x38) = 1;
  *(undefined1 *)(lVar1 + 0x3a) = 1;
  plVar3 = (long *)(*(long *)(lVar2 + 0xb8) + 8);
  *plVar3 = lVar1;
  thunk_FUN_03f5d7b8(plVar3,lVar1);
  lVar2 = FUN_03f5c394(DAT_0917fc88,4);
  if (lVar2 != 0) {
    if ((2 < *(uint *)(lVar2 + 0x18)) &&
       (*(undefined1 *)(lVar2 + 0x22) = 0xfe, *(uint *)(lVar2 + 0x18) != 3)) {
      *(undefined1 *)(lVar2 + 0x23) = 0xff;
      *(long *)(*(long *)(DAT_0918c548 + 0xb8) + 0x10) = lVar2;
      thunk_FUN_03f5d7b8();
      lVar2 = FUN_03f5c394(DAT_0917fc88,4);
      if (lVar2 == 0) goto LAB_07442ea4;
      if ((*(int *)(lVar2 + 0x18) != 0) &&
         (*(undefined1 *)(lVar2 + 0x20) = 0xff, *(int *)(lVar2 + 0x18) != 1)) {
        *(undefined1 *)(lVar2 + 0x21) = 0xfe;
        *(long *)(*(long *)(DAT_0918c548 + 0xb8) + 0x18) = lVar2;
        thunk_FUN_03f5d7b8();
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_07442ea4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

