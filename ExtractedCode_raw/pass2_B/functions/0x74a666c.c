// rea decompile_all
// name: System.Runtime.Remoting.Messaging.MessageDictionary.DictionaryEnumerator$$get_Entry
// address: 0x74a666c
// body: available
// range: 0x74a666c-0x74a67d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74a6784 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a67cc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a67d0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Runtime_Remoting_Messaging_MessageDictionary_DictionaryEnumerator__get_Entry(long param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((DAT_095213b2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a30);
    DAT_095213b2 = 1;
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  if ((int)uVar1 < 0) {
    if ((uVar1 == 0xffffffff) || (plVar2 = *(long **)(param_1 + 0x18), plVar2 == (long *)0x0)) {
      thunk_FUN_03fc39d4(&DAT_091870e0);
      uVar3 = thunk_FUN_03f9944c();
      uVar8 = thunk_FUN_03fc39d4(&DAT_0920f4c0);
      System_InvalidOperationException___ctor(uVar3,uVar8,0);
      uVar8 = thunk_FUN_03fc39d4(&DAT_091ecf18);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar3,uVar8);
    }
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09185a30) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_074a6764;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a30,2);
LAB_074a6764:
    local_30 = (*(code *)*puVar4)(plVar2,puVar4[1]);
  }
  else {
    plVar2 = *(long **)(param_1 + 0x10);
    if ((plVar2 == (long *)0x0) || (lVar5 = plVar2[4], lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar8 = *(undefined8 *)(lVar5 + (ulong)uVar1 * 8 + 0x20);
    uVar3 = (**(code **)(*plVar2 + 0x288))(plVar2,uVar8,*(undefined8 *)(*plVar2 + 0x290));
    local_30 = 0;
    uStack_28 = 0;
    System_Collections_DictionaryEntry___ctor(&local_30,uVar8,uVar3,0);
  }
  return local_30;
}

