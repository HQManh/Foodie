// rea decompile_all
// name: MessagePack.Internal.UnsafeMemory32$$WriteRaw22
// address: 0x73bd454
// body: available
// range: 0x73bd454-0x73bd503 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73bd4fc to 0x73a1c00 MessagePack.MessagePackWriter$$Advance (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73bd500 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_UnsafeMemory32__WriteRaw22
               (undefined8 param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined1 auVar2 [12];
  
  if ((DAT_09520c53 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9798);
    FUN_03f5c2a4(&DAT_091de240);
    DAT_09520c53 = 1;
  }
  auVar2 = MessagePack_MessagePackWriter__GetSpan(param_1,param_3,0);
  puVar1 = auVar2._0_8_;
  if ((param_3 != 0) && (auVar2._8_4_ != 0)) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
    puVar1[4] = param_2[4];
    *(undefined4 *)((long)puVar1 + 0x12) = *(undefined4 *)((long)param_2 + 0x12);
    MessagePack_MessagePackWriter__Advance(param_1,param_3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

