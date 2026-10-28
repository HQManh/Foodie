// rea decompile_all
// name: System.Security.Cryptography.DES$$.cctor
// address: 0x745ef98
// body: available
// range: 0x745ef98-0x745f0d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x745f0cc to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x745f0d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745f0d4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_DES___cctor(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if ((DAT_0952116b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183178);
    FUN_03f5c2a4(&DAT_09180228);
    FUN_03f5c2a4(&DAT_09187510);
    DAT_0952116b = 1;
  }
  lVar1 = FUN_03f5c394(DAT_09180228,1);
  lVar2 = thunk_FUN_03f9944c(DAT_09187510);
  System_Object___ctor(lVar2,0);
  *(undefined4 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x10) = 0x4000000040;
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(long *)(lVar1 + 0x20) = lVar2;
      thunk_FUN_03f5d7b8((long *)(lVar1 + 0x20),lVar2);
      **(long **)(DAT_09183178 + 0xb8) = lVar1;
      thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09183178 + 0xb8),lVar1);
      lVar1 = FUN_03f5c394(DAT_09180228,1);
      lVar2 = thunk_FUN_03f9944c(DAT_09187510);
      System_Object___ctor(lVar2,0);
      *(undefined4 *)(lVar2 + 0x18) = 0;
      *(undefined8 *)(lVar2 + 0x10) = 0x4000000040;
      if (lVar1 == 0) goto LAB_0745f0d0;
      if (*(int *)(lVar1 + 0x18) != 0) {
        *(long *)(lVar1 + 0x20) = lVar2;
        thunk_FUN_03f5d7b8((long *)(lVar1 + 0x20),lVar2);
        plVar3 = (long *)(*(long *)(DAT_09183178 + 0xb8) + 8);
        *plVar3 = lVar1;
        thunk_FUN_03f5d7b8(plVar3,lVar1);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_0745f0d0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

