// rea decompile_all
// name: System.Runtime.Remoting.Lifetime.LeaseSink$$AsyncProcessMessage
// address: 0x7490e24
// body: available
// range: 0x7490e24-0x7490ee7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7490ee4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_Lifetime_LeaseSink__AsyncProcessMessage
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  lVar1 = param_1;
  if ((DAT_095212fc & 1) == 0) {
    lVar1 = FUN_03f5c2a4(&DAT_09186090);
    DAT_095212fc = 1;
  }
  System_Runtime_Remoting_Lifetime_LeaseSink__RenewLease(lVar1,param_2);
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar1 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == DAT_09186090) {
        puVar2 = (undefined8 *)(lVar1 + (long)(*piVar4 + 1) * 0x10 + 0x138);
        goto LAB_07490ec4;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09186090,1);
LAB_07490ec4:
                    /* WARNING: Could not recover jumptable at 0x07490ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar5,param_2,param_3,puVar2[1]);
  return;
}

