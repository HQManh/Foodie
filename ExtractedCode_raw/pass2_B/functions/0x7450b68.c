// rea decompile_all
// name: System.Text.Encoding.EncodingCharBuffer$$.ctor
// address: 0x7450b68
// body: available
// range: 0x7450b68-0x7450c47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7450c40 to 0x763ab18 System.Text.DecoderFallbackBuffer$$InternalInitialize (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7450c44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Text_Encoding_EncodingCharBuffer___ctor
               (long param_1,long param_2,long param_3,long param_4,int param_5,long param_6,
               int param_7)

{
  undefined8 uVar1;
  long *plVar2;
  
  System_Object___ctor(param_1,0);
  *(long *)(param_1 + 0x30) = param_2;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x30),param_2);
  plVar2 = (long *)(param_1 + 0x38);
  *plVar2 = param_3;
  thunk_FUN_03f5d7b8(plVar2,param_3);
  *(long *)(param_1 + 0x10) = param_4;
  *(long *)(param_1 + 0x18) = param_4;
  *(long *)(param_1 + 0x40) = param_6;
  *(long *)(param_1 + 0x20) = param_4 + (long)param_5 * 2;
  *(long *)(param_1 + 0x48) = param_6 + param_7;
  *(long *)(param_1 + 0x50) = param_6;
  if (*plVar2 == 0) {
    if ((param_2 == 0) || (plVar2 = *(long **)(param_2 + 0x30), plVar2 == (long *)0x0))
    goto LAB_07450c44;
    uVar1 = (**(code **)(*plVar2 + 0x178))(plVar2,*(undefined8 *)(*plVar2 + 0x180));
  }
  else {
    uVar1 = System_Text_Decoder__get_FallbackBuffer(*plVar2,0);
  }
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  thunk_FUN_03f5d7b8();
  if (*(long *)(param_1 + 0x58) != 0) {
    System_Text_DecoderFallbackBuffer__InternalInitialize
              (*(long *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x50),
               *(undefined8 *)(param_1 + 0x20),0);
    return;
  }
LAB_07450c44:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

