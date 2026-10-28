// rea decompile_all
// name: System.Runtime.Remoting.Messaging.MessageDictionary$$Contains
// address: 0x74a6020
// body: available
// range: 0x74a6020-0x74a614f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74a60b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a6144 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a614c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Runtime_Remoting_Messaging_MessageDictionary__Contains(long param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  ulong uVar7;
  
  if ((DAT_095213a8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a20);
    DAT_095213a8 = 1;
  }
  if ((param_2 != (long *)0x0) && (*param_2 != DAT_09535468)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(param_2);
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    uVar7 = 0;
    do {
      if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)uVar7) {
        plVar6 = *(long **)(param_1 + 0x10);
        if (plVar6 == (long *)0x0) {
          return 0;
        }
        lVar4 = *plVar6;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar7 == 0) goto LAB_074a60f4;
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_074a60dc;
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar1 = System_String__op_Equality(*(undefined8 *)(lVar4 + uVar7 * 8 + 0x20),param_2,0);
      if ((uVar1 & 1) != 0) {
        return 1;
      }
      lVar4 = *(long *)(param_1 + 0x20);
      uVar7 = uVar7 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar5 = piVar5 + 4;
    if (uVar7 == 0) break;
LAB_074a60dc:
    if (*(long *)(piVar5 + -2) == DAT_09185a20) {
      puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 4) * 0x10 + 0x138);
      goto LAB_074a612c;
    }
  }
LAB_074a60f4:
  puVar2 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185a20,4);
LAB_074a612c:
                    /* WARNING: Could not recover jumptable at 0x074a6140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)*puVar2)(plVar6,param_2,puVar2[1]);
  return uVar3;
}

