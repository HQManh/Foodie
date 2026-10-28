// rea decompile_all
// name: System.Runtime.Remoting.Messaging.CADMessageBase$$UnmarshalProperties
// address: 0x749f8c8
// body: available
// range: 0x749f8c8-0x749fa03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x749f9fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749fa00 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_Messaging_CADMessageBase__UnmarshalProperties
               (long *param_1,int param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  int iVar8;
  
  if ((DAT_09521372 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183b38);
    FUN_03f5c2a4(&DAT_09185a20);
    DAT_09521372 = 1;
  }
  if (0 < param_2) {
    if (param_3 == (long *)0x0) {
LAB_0749f9fc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar8 = 0;
    do {
      plVar3 = (long *)(**(code **)(*param_3 + 0x2e8))
                                 (param_3,iVar8,*(undefined8 *)(*param_3 + 0x2f0));
      if (plVar3 == (long *)0x0) goto LAB_0749f9fc;
      if (*(long *)(*plVar3 + 0x40) != *(long *)(DAT_09183b38 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0();
      }
      puVar4 = (undefined8 *)thunk_FUN_03f99594();
      if (param_1 == (long *)0x0) goto LAB_0749f9fc;
      lVar5 = *param_1;
      uVar1 = *puVar4;
      uVar2 = puVar4[1];
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_09185a20) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_0749f9c4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(param_1,DAT_09185a20,1);
LAB_0749f9c4:
      (*(code *)*puVar4)(param_1,uVar1,uVar2,puVar4[1]);
      iVar8 = iVar8 + 1;
    } while (iVar8 != param_2);
  }
  return;
}

