// rea decompile_all
// name: Mono.Security.ASN1$$DecodeTLV
// address: 0x73ef5c4
// body: available
// range: 0x73ef5c4-0x73ef6eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73ef6e0 to 0x75e4380 System.Buffer$$BlockCopy (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73ef6e4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ef6e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_ASN1__DecodeTLV
               (undefined8 param_1,long param_2,uint *param_3,undefined1 *param_4,uint *param_5,
               undefined8 *param_6)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  
  if ((DAT_09520e09 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    DAT_09520e09 = 1;
  }
  uVar2 = *param_3;
  *param_3 = uVar2 + 1;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (uVar2 < *(uint *)(param_2 + 0x18)) {
    *param_4 = *(undefined1 *)(param_2 + (int)uVar2 + 0x20);
    uVar6 = *param_3;
    uVar2 = *(uint *)(param_2 + 0x18);
    *param_3 = uVar6 + 1;
    if (uVar6 < uVar2) {
      bVar1 = *(byte *)(param_2 + (int)uVar6 + 0x20);
      *param_5 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        uVar6 = bVar1 & 0x7f;
        uVar5 = 0;
        *param_5 = 0;
        if ((bVar1 & 0x7f) != 0) {
          do {
            uVar3 = *param_3;
            *param_3 = uVar3 + 1;
            if (uVar2 <= uVar3) goto LAB_073ef6e4;
            uVar6 = uVar6 - 1;
            uVar5 = (uint)*(byte *)(param_2 + (int)uVar3 + 0x20) | uVar5 << 8;
            *param_5 = uVar5;
          } while (uVar6 != 0);
        }
      }
      uVar4 = FUN_03f5c394(DAT_0917fc88);
      *param_6 = uVar4;
      thunk_FUN_03f5d7b8(param_6,uVar4);
      System_Buffer__BlockCopy(param_2,*param_3,*param_6,0,*param_5,0);
      return;
    }
  }
LAB_073ef6e4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

