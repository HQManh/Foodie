// rea decompile_all
// name: Mono.Security.Cryptography.PKCS1$$Verify_v15
// address: 0x7421f44
// body: available
// range: 0x7421f44-0x742208b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7422088 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07422084) */

uint Mono_Security_Cryptography_PKCS1__Verify_v15
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((DAT_09520f98 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09188d88);
    DAT_09520f98 = 1;
  }
  if (*(int *)(DAT_09188d88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar2 = (long *)Mono_Security_Cryptography_PKCS1__CreateFromName(param_2);
  if (*(int *)(DAT_09188d88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = Mono_Security_Cryptography_PKCS1__Verify_v15(param_1,plVar2,param_3,param_4,0);
  if (plVar2 != (long *)0x0) {
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_09185a58) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_07422058;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_07422058:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
  }
  return uVar1 & 1;
}

