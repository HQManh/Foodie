// rea decompile_all
// name: System.Runtime.Remoting.Messaging.MethodResponse$$.ctor
// address: 0x74a3a5c
// body: available
// range: 0x74a3a5c-0x74a3b6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74a3b64 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74a3b68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_Messaging_MethodResponse___ctor
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((DAT_095213b4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091860a8);
    DAT_095213b4 = 1;
  }
  System_Object___ctor(param_1,0);
  *(long *)(param_1 + 0x60) = (long)param_5;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x60),param_5);
  if (param_5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar3 = *param_5;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == DAT_091860a8) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 7) * 0x10 + 0x138);
        goto LAB_074a3b10;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_03f95da8(param_5,DAT_091860a8,7);
LAB_074a3b10:
  uVar2 = (*(code *)*puVar1)(param_5,puVar1[1]);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  thunk_FUN_03f5d7b8();
  *(undefined8 *)(param_1 + 0x38) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x38),0);
  *(undefined8 *)(param_1 + 0x30) = param_2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),param_2);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x50),param_3);
  return;
}

